/*
 * File: driver.c
 *
 * Code generated for Simulink model 'driver'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Tue Jun 25 22:10:16 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "driver.h"
#include "driver_private.h"

/* Model step function */
void Runnable_Step(void)
{
  /* Outport: '<Root>/Out1' */
  Rte_IWrite_Runnable_Step_Out1_Out1(driver_ConstB.input1);

  /* Outport: '<Root>/Out2' */
  Rte_IWrite_Runnable_Step_Out2_Out2(driver_ConstB.input2);
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
