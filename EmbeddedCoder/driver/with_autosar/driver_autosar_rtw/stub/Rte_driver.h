/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "driver"
   ARXML schema: "4.0"
   File generated on: "25-Jun-2024 22:10:20"  */

#ifndef Rte_driver_h
#define Rte_driver_h
#include "Rte_Type.h"
#include "Compiler.h"

/* Data access functions */
#define Rte_IWrite_Runnable_Step_Out1_Out1 Rte_IWrite_driver_Runnable_Step_Out1_Out1

void Rte_IWrite_Runnable_Step_Out1_Out1(Double u);

#define Rte_IWriteRef_Runnable_Step_Out1_Out1 Rte_IWriteRef_driver_Runnable_Step_Out1_Out1

Double* Rte_IWriteRef_Runnable_Step_Out1_Out1(void);

#define Rte_IWrite_Runnable_Step_Out2_Out2 Rte_IWrite_driver_Runnable_Step_Out2_Out2

void Rte_IWrite_Runnable_Step_Out2_Out2(Double u);

#define Rte_IWriteRef_Runnable_Step_Out2_Out2 Rte_IWriteRef_driver_Runnable_Step_Out2_Out2

Double* Rte_IWriteRef_Runnable_Step_Out2_Out2(void);

/* Entry point functions */
extern FUNC(void, driver_CODE) Runnable_Init(void);
extern FUNC(void, driver_CODE) Runnable_Step(void);

#endif
