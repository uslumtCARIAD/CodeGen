/*
 * File: add.c
 *
 * Code generated for Simulink model 'add'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Tue Jun 25 21:50:24 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "add.h"
#include "add_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_add_T add_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_add_T add_Y;

/* Real-time model */
RT_MODEL_add_T add_M_;
RT_MODEL_add_T *const add_M = &add_M_;

/* Model step function */
void add_step(void)
{
  /* Outport: '<Root>/output' incorporates:
   *  Inport: '<Root>/input1'
   *  Inport: '<Root>/input2'
   *  Sum: '<Root>/Add'
   */
  add_Y.output = add_U.input1 + add_U.input2;
}

/* Model initialize function */
void add_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(add_M, (NULL));

  /* external inputs */
  (void)memset((void *)&add_U, 0, sizeof(ExtU_add_T));

  /* external outputs */
  add_Y.output = 0.0;
}

/* Model terminate function */
void add_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
