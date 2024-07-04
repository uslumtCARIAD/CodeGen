@echo off

if "%~1" == "" (
  SET _Mode=all
) ELSE (
  SET _Mode=%~1
)

IF "%_Mode%" == "CGU_NAME_LIST" (
echo *Subsystem*
echo *add*
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
call:delete_subsystem_files
call:delete_add_files

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

IF "%_Mode%" == "subsystem" (

rem *********************************************************************************************
rem ** Cleanup files generated for code generation unit subsystem. 
rem *********************************************************************************************
call:delete_subsystem_files
GOTO :EOF
)

IF "%_Mode%" == "add" (

rem *********************************************************************************************
rem ** Cleanup files generated for code generation unit add. 
rem *********************************************************************************************
call:delete_add_files
GOTO :EOF
)



rem *********************************************************************************************
rem ** Cleanup file related to code generation unit subsystem
rem *********************************************************************************************


:delete_subsystem_files
set tl_subsys=subsystem
if exist %tl_subsys%_sf.c        del %tl_subsys%_sf.c
if exist %tl_subsys%_sf.mexw64   del %tl_subsys%_sf.mexw64
if exist %tl_subsys%_sfcn.c      del %tl_subsys%_sfcn.c
if exist %tl_subsys%_sfcn.mexw64 del %tl_subsys%_sfcn.mexw64
if exist %tl_subsys%_sf*.pdb     del %tl_subsys%_sf*.pdb
if exist %tl_subsys%_sf.ilk      del %tl_subsys%_sf.ilk

if exist ".\TLSim\Subsystem_fri.c" del ".\TLSim\Subsystem_fri.c" 
if exist ".\TLSim\Subsystem_fri.h" del ".\TLSim\Subsystem_fri.h" 
if exist ".\TLSim\subsystem_sf.c" del ".\TLSim\subsystem_sf.c" 
if exist ".\TLSim\subsystem_pcf.c" del ".\TLSim\subsystem_pcf.c" 
if exist ".\TLSim\subsystem_frm.h" del ".\TLSim\subsystem_frm.h" 
if exist ".\TLSim\globals_subsystem.*" del ".\TLSim\globals_subsystem.*" 
if exist ".\TLSim\tlsim_*_globals.c" del ".\TLSim\tlsim_*_globals.c" 
if exist ".\TLSim\tlsim_*_enums.c" del ".\TLSim\tlsim_*_enums.c" 
if exist ".\TLProj\Subsystem\Metadata\subsystem_SubsystemObject.dd" del ".\TLProj\Subsystem\Metadata\subsystem_SubsystemObject.dd" 
if exist ".\TLProj\Subsystem" rmdir /s /q ".\TLProj\Subsystem" 
if exist ".\TLSim\StubCode\Subsystem" rmdir /s /q ".\TLSim\StubCode\Subsystem" 
if exist ".\TLProj\Subsystem\CGReport" rmdir /s /q ".\TLProj\Subsystem\CGReport" 
if exist ".\TLProj\Subsystem\Metadata" call:delete_if_empty ".\TLProj\Subsystem\Metadata"
if exist ".\TLProj\Subsystem" call:delete_if_empty ".\TLProj\Subsystem"
if exist ".\TLSim\StubCode" call:delete_if_empty ".\TLSim\StubCode"
if exist ".\TLProj" call:delete_if_empty ".\TLProj"
if exist ".\TLSim" call:delete_if_empty ".\TLSim"
GOTO :EOF
)



rem *********************************************************************************************
rem ** Cleanup file related to code generation unit add
rem *********************************************************************************************


:delete_add_files
set tl_subsys=add
if exist %tl_subsys%_sf.c        del %tl_subsys%_sf.c
if exist %tl_subsys%_sf.mexw64   del %tl_subsys%_sf.mexw64
if exist %tl_subsys%_sfcn.c      del %tl_subsys%_sfcn.c
if exist %tl_subsys%_sfcn.mexw64 del %tl_subsys%_sfcn.mexw64
if exist %tl_subsys%_sf*.pdb     del %tl_subsys%_sf*.pdb
if exist %tl_subsys%_sf.ilk      del %tl_subsys%_sf.ilk

if exist ".\TLSim\add_fri.c" del ".\TLSim\add_fri.c" 
if exist ".\TLSim\add_fri.h" del ".\TLSim\add_fri.h" 
if exist ".\TLSim\add_sf.c" del ".\TLSim\add_sf.c" 
if exist ".\TLSim\add_pcf.c" del ".\TLSim\add_pcf.c" 
if exist ".\TLSim\add_frm.h" del ".\TLSim\add_frm.h" 
if exist ".\TLSim\globals_add.*" del ".\TLSim\globals_add.*" 
if exist ".\TLSim\tlsim_*_globals.c" del ".\TLSim\tlsim_*_globals.c" 
if exist ".\TLSim\tlsim_*_enums.c" del ".\TLSim\tlsim_*_enums.c" 
if exist ".\TLProj\add\Metadata\add_SubsystemObject.dd" del ".\TLProj\add\Metadata\add_SubsystemObject.dd" 
if exist ".\TLProj\add" rmdir /s /q ".\TLProj\add" 
if exist ".\TLSim\StubCode\add" rmdir /s /q ".\TLSim\StubCode\add" 
if exist ".\TLProj\add\CGReport" rmdir /s /q ".\TLProj\add\CGReport" 
if exist ".\TLProj\add\Metadata" call:delete_if_empty ".\TLProj\add\Metadata"
if exist ".\TLSim\StubCode" call:delete_if_empty ".\TLSim\StubCode"
if exist ".\TLProj\add" call:delete_if_empty ".\TLProj\add"
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
