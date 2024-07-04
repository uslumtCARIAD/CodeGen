/*
 * File: driver.c
 *
 * Code generated for Simulink model 'driver'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Tue Jun 25 14:00:25 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "driver.h"
#include "driver_private.h"

/* External outputs (root outports fed by signals with auto storage) */
ExtY_driver_T driver_Y;

/* Real-time model */
RT_MODEL_driver_T driver_M_;
RT_MODEL_driver_T *const driver_M = &driver_M_;

/* Model step function */
void driver_step(void)
{
  /* (no output/update code required) */
}

/* Model initialize function */
void driver_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(driver_M, (NULL));

  /* external outputs */
  (void) memset((void *)&driver_Y, 0,
                sizeof(ExtY_driver_T));

  /* ConstCode for Outport: '<Root>/Out1' incorporates:
   *  Constant: '<Root>/input1'
   */
  driver_Y.Out1 = 2.0;

  /* ConstCode for Outport: '<Root>/Out2' incorporates:
   *  Constant: '<Root>/input2'
   */
  driver_Y.Out2 = 5.0;
}

/* Model terminate function */
void driver_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
