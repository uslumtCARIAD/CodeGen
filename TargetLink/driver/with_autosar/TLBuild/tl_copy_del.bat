@echo off

REM tl_copy_del.BAT
REM    Copy simulation files into the working directory or
REM    delete simulation files in the working directory
REM
REM    tl_copy_del.bat COPY
REM
REM       or
REM
REM    tl_copy_del.bat REMOVE


SET _DebugMode=ENABLE
SET _LogFile=.\.\TLBuild\driver\HostPC64_GCC\_CopyOrRemoveSimFiles.log
SET _ErrFile=.\.\TLBuild\driver\HostPC64_GCC\_CopyOrRemoveSimFiles.err
IF EXIST "%_LogFile%" del "%_LogFile%" /F /Q
IF EXIST "%_ErrFile%" del "%_ErrFile%" /F /Q


SET _Mode=%~1
IF "%_Mode%" == "COPY" (
    IF "%_DebugMode%" == "ENABLE" (
        echo.                                                                     >> "%_LogFile%"
        echo ----------------------------------------------------------           >> "%_LogFile%"
        echo Copy simulation files into the working directory                     >> "%_LogFile%"
        echo ----------------------------------------------------------           >> "%_LogFile%"
    )

call :do_copy  ".\TLProj\driver\driver.c" ".\TLBuild\driver\HostPC64_GCC\driver.c"
call :do_copy  ".\TLProj\driver\driver.h" ".\TLBuild\driver\HostPC64_GCC\driver.h"
call :do_copy  ".\TLSim\driver_fri.c" ".\TLBuild\driver\HostPC64_GCC\driver_fri.c"
call :do_copy  ".\TLSim\driver_fri.h" ".\TLBuild\driver\HostPC64_GCC\driver_fri.h"
call :do_copy  ".\TLSim\driver_pcf.c" ".\TLBuild\driver\HostPC64_GCC\driver_pcf.c"
call :do_copy  ".\TLSim\driver_frm.h" ".\TLBuild\driver\HostPC64_GCC\driver_frm.h"
call :do_copy  ".\TLSim\driver_ARfrm.c" ".\TLBuild\driver\HostPC64_GCC\driver_ARfrm.c"
call :do_copy  ".\TLSim\driver_ARfrm.h" ".\TLBuild\driver\HostPC64_GCC\driver_ARfrm.h"
GOTO :EOF
)
IF "%_Mode%" == "REMOVE" (
    IF "%_DebugMode%" == "ENABLE" (
        echo.                                                                    >> "%_LogFile%"
        echo ----------------------------------------------------------          >> "%_LogFile%"
        echo Remove simulation files in the working directory                    >> "%_LogFile%"
        echo ----------------------------------------------------------          >> "%_LogFile%"
    )
call :do_delete  ".\TLBuild\driver\HostPC64_GCC\Rte.c"
call :do_delete  ".\TLBuild\driver\HostPC64_GCC\RteIv.c"
call :do_delete  ".\TLBuild\driver\HostPC64_GCC\MemMap.h"
call :do_delete  ".\TLBuild\driver\HostPC64_GCC\Platform_Types.h"
call :do_delete  ".\TLBuild\driver\HostPC64_GCC\Rte.h"
call :do_delete  ".\TLBuild\driver\HostPC64_GCC\RteIv.h"
call :do_delete  ".\TLBuild\driver\HostPC64_GCC\Rte_Main.h"
call :do_delete  ".\TLBuild\driver\HostPC64_GCC\Rte_Type.h"
call :do_delete  ".\TLBuild\driver\HostPC64_GCC\Rte_driver_SoftwareComponent.h"
call :do_delete  ".\TLBuild\driver\HostPC64_GCC\Std_Types.h"
GOTO :EOF
)
echo. >> "%_ErrFile%"
echo Wrong parameter of the batch file '.\TLBuild\driver\HostPC64_GCC\tl_copy_del.bat'. Use either 'COPY' or 'REMOVE', please.  >> "%_ErrFile%"
echo Wrong parameter of the batch file '.\TLBuild\driver\HostPC64_GCC\tl_copy_del.bat'. Use either 'COPY' or 'REMOVE', please.
GOTO :EOF


:do_copy
SET _SrcFileName=%~1
SET _DesFileName=%~2
IF EXIST "%_DesFileName%" (
   echo The file "%_DesFileName%" exists in the working directory. >> "%_ErrFile%"
   echo The file "%_DesFileName%" exists in the working directory.
   GOTO :EOF
)
IF NOT EXIST "%_SrcFileName%"  (
   echo "%_SrcFileName%" not found. >> "%_ErrFile%"
   echo "%_SrcFileName%" not found. 
   GOTO :EOF
)
IF "%_DebugMode%" == "ENABLE" (
   echo copy: "%_SrcFileName%" >> "%_LogFile%"
   copy  /Y "%_SrcFileName%" "%_DesFileName%"  >> "%_LogFile%"
   ) ELSE (
   xcopy "%_SrcFileName%" "%_DesFileName%" /Q > NUL
)
GOTO :EOF


:do_delete
SET _FileName=%~1
IF "%_DebugMode%" == "ENABLE" (
   echo remove: "%_FileName%" >> "%_LogFile%"
   del  "%_FileName%" /F /Q   >> "%_LogFile%" 2>&1
) ELSE (
   del  "%_FileName%" /F /Q > NUL 2>&1
)
IF EXIST "%_FileName%" (
   echo *** Can not delete file "%_FileName%." >> "%_ErrFile%"
   echo *** Can not delete file "%_FileName%."
)
GOTO :EOF