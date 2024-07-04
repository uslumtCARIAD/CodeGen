/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "add"
   ARXML schema: "4.0"
   File generated on: "25-Jun-2024 21:59:48"  */

#ifndef Rte_add_h
#define Rte_add_h
#include "Rte_Type.h"
#include "Compiler.h"

/* Data access functions */
#define Rte_IRead_Runnable_Step_input1_input1 Rte_IRead_add_Runnable_Step_input1_input1

Double Rte_IRead_Runnable_Step_input1_input1(void);

#define Rte_IRead_Runnable_Step_input2_input2 Rte_IRead_add_Runnable_Step_input2_input2

Double Rte_IRead_Runnable_Step_input2_input2(void);

#define Rte_IWrite_Runnable_Step_output_output Rte_IWrite_add_Runnable_Step_output_output

void Rte_IWrite_Runnable_Step_output_output(Double u);

#define Rte_IWriteRef_Runnable_Step_output_output Rte_IWriteRef_add_Runnable_Step_output_output

Double* Rte_IWriteRef_Runnable_Step_output_output(void);

/* Entry point functions */
extern FUNC(void, add_CODE) Runnable_Init(void);
extern FUNC(void, add_CODE) Runnable_Step(void);

#endif
