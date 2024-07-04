/*
 * File: add.c
 *
 * Code generated for Simulink model 'add'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Tue Jun 25 21:59:43 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "add.h"
#include "add_private.h"

/* Model step function */
void Runnable_Step(void)
{
  /* Outport: '<Root>/output' incorporates:
   *  Inport: '<Root>/input1'
   *  Inport: '<Root>/input2'
   *  Sum: '<Root>/Add'
   */
  Rte_IWrite_Runnable_Step_output_output(Rte_IRead_Runnable_Step_input1_input1()
    + Rte_IRead_Runnable_Step_input2_input2());
}

/* Model initialize function */
void Runnable_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
