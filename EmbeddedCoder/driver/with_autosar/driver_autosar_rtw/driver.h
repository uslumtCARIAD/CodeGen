/*
 * File: driver.h
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

#ifndef RTW_HEADER_driver_h_
#define RTW_HEADER_driver_h_
#ifndef driver_COMMON_INCLUDES_
# define driver_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_driver.h"
#endif                                 /* driver_COMMON_INCLUDES_ */

#include "driver_types.h"

/* Macros for accessing real-time model data structure */

/* Invariant block signals (auto storage) */
typedef struct {
  real_T input1;                       /* '<Root>/input1' */
  real_T input2;                       /* '<Root>/input2' */
} ConstB_driver_T;

extern const ConstB_driver_T driver_ConstB;/* constant block i/o */

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
