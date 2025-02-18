/*
 * File: driver.h
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

#ifndef RTW_HEADER_driver_h_
#define RTW_HEADER_driver_h_
#include <stddef.h>
#include <string.h>
#ifndef driver_COMMON_INCLUDES_
# define driver_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* driver_COMMON_INCLUDES_ */

#include "driver_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
  real_T Out2;                         /* '<Root>/Out2' */
} ExtY_driver_T;

/* Real-time Model Data Structure */
struct tag_RTM_driver_T {
  const char_T * volatile errorStatus;
};

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_driver_T driver_Y;

/* Model entry point functions */
extern void driver_initialize(void);
extern void driver_step(void);
extern void driver_terminate(void);

/* Real-time Model object */
extern RT_MODEL_driver_T *const driver_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'driver'
 */
#endif                                 /* RTW_HEADER_driver_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
