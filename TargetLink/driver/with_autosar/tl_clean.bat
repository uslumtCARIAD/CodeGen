@echo off

if "%~1" == "" (
  SET _Mode=all
) ELSE (
  SET _Mode=%~1
)

IF "%_Mode%" == "CGU_NAME_LIST" (
echo *driver*
GOTO :EOF
)

IF "%_Mode%" == "all" (

rem *********************************************************************************************
rem ** Cleanup all TargetLink predefined directories. 
rem *********************************************************************************************
if exist ".\TLProj" rmdir /s /q ".\TLProj"
if exist ".\CodeViewFiles" rmdir /s /q ".\CodeViewFiles"
if exist ".\CodeCoverageReport" rmdir /s /q ".\CodeCoverageReport"
if exist ".\doc" rmdir /s /q ".\doc"
if exist ".\TLSim" rmdir /s /q ".\TLSim"
if exist ".\TLBuild" rmdir /s /q ".\TLBuild"

rem *********************************************************************************************
rem ** Cleanup code generation unit specific directories. 
rem *********************************************************************************************
call:delete_driver_files

rem *********************************************************************************************
rem ** cleanup ASAP2 files and files created during A2L file generation
rem *********************************************************************************************
if exist a2lexport.log                del a2lexport.log
if exist a2l_export_param.dd          del a2l_export_param.dd
if exist asap2_all_in_one.xsl         del asap2_all_in_one.xsl
if exist asap2_all_in_one_module.xsl  del asap2_all_in_one_module.xsl
if exist asap2_default.xsl            del asap2_default.xsl
if exist SymTabParser.cfg             del SymTabParser.cfg
if exist *.a2l                        del *.a2l

rem *********************************************************************************************
rem ** cleanup other files
rem *********************************************************************************************
if exist tl_autoscaling.log           del tl_autoscaling.log
if exist dsdd_validate.log            del dsdd_validate.log
if exist lnk*.tmp                     del lnk*.tmp
if exist make*.lck                    del make*.lck
if exist vc40.pdb                     del vc40.pdb
if exist vc50.pdb                     del vc50.pdb
if exist vc*.idb                      del vc*.idb
if exist NONE                         del NONE
if exist BS_Debug.txt                 del BS_Debug.txt
if exist hdi.hdc                      del hdi.hdc
if exist hdi.hds                      del hdi.hds
if exist tl_diff_cgopt_report.log     del tl_diff_cgopt_report.log

GOTO :EOF
)

IF "%_Mode%" == "driver" (

rem *********************************************************************************************
rem ** Cleanup files generated for code generation unit driver. 
rem *********************************************************************************************
call:delete_driver_files
GOTO :EOF
)



rem *********************************************************************************************
rem ** Cleanup file related to code generation unit driver
rem *********************************************************************************************


:delete_driver_files
set tl_subsys=driver
if exist %tl_subsys%_sf.c        del %tl_subsys%_sf.c
if exist %tl_subsys%_sf.mexw64   del %tl_subsys%_sf.mexw64
if exist %tl_subsys%_sfcn.c      del %tl_subsys%_sfcn.c
if exist %tl_subsys%_sfcn.mexw64 del %tl_subsys%_sfcn.mexw64
if exist %tl_subsys%_sf*.pdb     del %tl_subsys%_sf*.pdb
if exist %tl_subsys%_sf.ilk      del %tl_subsys%_sf.ilk

if exist ".\TLSim\driver_fri.c" del ".\TLSim\driver_fri.c" 
if exist ".\TLSim\driver_fri.h" del ".\TLSim\driver_fri.h" 
if exist "Rte_Type.h" del "Rte_Type.h" 
if exist "Rte.c" del "Rte.c" 
if exist "Rte.h" del "Rte.h" 
if exist ".\TLSim\driver_ARfrm.c" del ".\TLSim\driver_ARfrm.c" 
if exist ".\TLSim\driver_ARfrm.h" del ".\TLSim\driver_ARfrm.h" 
if exist ".\TLSim\Rte_driver_SoftwareComponent.c" del ".\TLSim\Rte_driver_SoftwareComponent.c" 
if exist ".\TLSim\Rte_driver_SoftwareComponent.h" del ".\TLSim\Rte_driver_SoftwareComponent.h" 
if exist ".\TLSim\driver_sf.c" del ".\TLSim\driver_sf.c" 
if exist ".\TLSim\driver_pcf.c" del ".\TLSim\driver_pcf.c" 
if exist ".\TLSim\driver_frm.h" del ".\TLSim\driver_frm.h" 
if exist ".\TLSim\globals_driver.*" del ".\TLSim\globals_driver.*" 
if exist ".\TLSim\tlsim_*_globals.c" del ".\TLSim\tlsim_*_globals.c" 
if exist ".\TLSim\tlsim_*_enums.c" del ".\TLSim\tlsim_*_enums.c" 
if exist ".\TLProj\driver\Metadata\driver_SubsystemObject.dd" del ".\TLProj\driver\Metadata\driver_SubsystemObject.dd" 
if exist ".\TLProj\driver" rmdir /s /q ".\TLProj\driver" 
if exist ".\TLSim\StubCode\driver" rmdir /s /q ".\TLSim\StubCode\driver" 
if exist ".\TLProj\driver\CGReport" rmdir /s /q ".\TLProj\driver\CGReport" 
if exist ".\TLProj\driver\Metadata" call:delete_if_empty ".\TLProj\driver\Metadata"
if exist ".\TLSim\StubCode" call:delete_if_empty ".\TLSim\StubCode"
if exist ".\TLProj\driver" call:delete_if_empty ".\TLProj\driver"
if exist ".\TLProj" call:delete_if_empty ".\TLProj"
if exist ".\TLSim" call:delete_if_empty ".\TLSim"
GOTO :EOF
)

:delete_if_empty
set _TMP=
for /f "delims=" %%a in ('dir /b %1') do set _TMP="%%a"
IF {%_TMP%}=={} (
      set _empty=Empty
      if exist %1 rmdir /s /q %1
)
