/**************************************************************************************************\
 *** 
 *** Simulink model       : driver
 *** TargetLink subsystem : driver/driver
 *** Codefile             : driver.h
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2024-07-04 08:56:42
 ***
 *** CODE GENERATOR OPTIONS:
 *** Code generation mode                     : Standard
 *** Compiler                                 : <unknown>
 *** Target                                   : Generic
 *** ANSI-C compatible code                   : yes
 *** Code Optimization                        : enabled
 *** Constant style                           : decimal
 *** Clean code option                        : disabled
 *** Logging mode                             : According to block-specific data
 *** Code Coverage                            : disabled
 *** Generate empty conditional branches      : disabled
 *** Loop unroll threshold                    : 5
 *** Shift mode                               : automatic
 *** Handle unscaled SF expr. with TL type    : enabled
 *** Assignment of conditions                 : AllBooleanOutputs 
 *** Scope reduction only to function level   : disabled
 *** Exploit ranges if not erasable           : disabled
 *** Exploit Compute Through Overflow         : optimized
 *** Linker sections                          : enabled
 *** Enable Assembler                         : disabled
 *** Variable name length                     : 31 chars
 *** Use global bitfields                     : disabled
 *** Stateflow: use of bitfields              : enabled
 *** State activity encoding limit            : 5
 *** Omit zero inits in restart function      : disabled
 *** Share functions between TL subsystems    : disabled
 *** Generate 64bit functions                 : enabled
 *** Inlining Threshold                       : 6
 *** Line break limit                         : 100
 *** Target optimized boolean data type       : enabled
 *** Keep saturation elements                 : disabled
 *** Extended variable sharing                : disabled
 *** Extended lifetime optimization           : enabled
 *** Style definition file                    : C:\Program Files\dSPACE TargetLink 4.3\Matlab\Tl\Con
 ***                                            fig\codegen\cconfig.xml
 *** Root style sheet                         : C:\Program Files\dSPACE TargetLink 4.3\Matlab\Tl\XML
 ***                                            \CodeGen\Stylesheets\TL_CSourceCodeSS.xsl
 ***
 *** TargetLink version      : 4.3p6 from 26-Feb-2020
 *** Code generator version  : Build Id 4.3.0.31 from 2020-03-02 18:28:10
\**************************************************************************************************/

#ifndef DRIVER_H
#define DRIVER_H

/*------------------------------------------------------------------------------------------------*\
  DEFINES (OPT)
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  INCLUDES
\*------------------------------------------------------------------------------------------------*/

#include "tl_basetypes.h"

/*------------------------------------------------------------------------------------------------*\
  ENUMS
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  DEFINES
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  TYPEDEFS
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  VARIABLES
\*------------------------------------------------------------------------------------------------*/

/**************************************************************************************************\
   SLGlobal: Default storage class for global variables | Width: 16
\**************************************************************************************************/
extern Int16 Sa1_Out1;
extern Int16 Sa1_Out2;

/*------------------------------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*------------------------------------------------------------------------------------------------*/

/**************************************************************************************************\
   GlobalStep: Default function class for not static model step functions
\**************************************************************************************************/
extern void driver(void);

#endif /* DRIVER_H */
/*------------------------------------------------------------------------------------------------*\
  END OF FILE
\*------------------------------------------------------------------------------------------------*/
