/**************************************************************************************************\
 *** 
 *** System              : TargetLink Simulation RTE
 *** ECU                 : TL_ECU
 *** Configuration       : NONE
 *** Codefile            : Rte_Main.h
 ***
 *** Generated by the SystemDesk RTE code generator
 *** Generation date: 2024-06-26 10:27:02
 ***
 *** SystemDesk version  : 4.3.0.314576
 *** Copyright (c) 2016 dSPACE GmbH
\**************************************************************************************************/

#ifndef RTE_MAIN_H
#define RTE_MAIN_H

/*----------------------------------------------------------------------------*\
  DEFINES (OPT)
\*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*\
  INCLUDES
\*----------------------------------------------------------------------------*/

#include "Std_Types.h"
/*----------------------------------------------------------------------------*\
  DEFINES
\*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*\
  TYPEDEFS
\*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*\
  ENUMS
\*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*\
  VARIABLES
\*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*----------------------------------------------------------------------------*/

#ifdef __cplusplus
 extern "C" {
#endif /* __cplusplus */ 

extern Std_ReturnType Rte_Start(void);
extern Std_ReturnType Rte_Stop(void);
#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */ 


#endif/*RTE_MAIN_H */
/*----------------------------------------------------------------------------*\
 END OF FILE
\*----------------------------------------------------------------------------*/
