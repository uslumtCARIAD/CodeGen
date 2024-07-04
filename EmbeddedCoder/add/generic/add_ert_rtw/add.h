/*
 * File: add.h
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

#ifndef RTW_HEADER_add_h_
#define RTW_HEADER_add_h_
#include <string.h>
#include <stddef.h>
#ifndef add_COMMON_INCLUDES_
# define add_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* add_COMMON_INCLUDES_ */

#include "add_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T input1;                       /* '<Root>/input1' */
  real_T input2;                       /* '<Root>/input2' */
} ExtU_add_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T output;                       /* '<Root>/output' */
} ExtY_add_T;

/* Real-time Model Data Structure */
struct tag_RTM_add_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_add_T add_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_add_T add_Y;

/* Model entry point functions */
extern void add_initialize(void);
extern void add_step(void);
extern void add_terminate(void);

/* Real-time Model object */
extern RT_MODEL_add_T *const add_M;

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
 * '<Root>' : 'add'
 */
#endif                                 /* RTW_HEADER_add_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
