/*************************************************************************************\
 ***
 *** Simulation frame file :  driver_pcf.c
 *** Code generation unit  :  driver/driver/Subsystem/driver
 ***
 *** Generated by dSPACE TargetLink Version 4.3p6 from 26-Feb-2020
 *** Generation date: 26-Jun-2024 10:26:40
\*************************************************************************************/

/* standard definitions and includes */
#if defined(TL_STACK_MEASUREMENT) || defined(TL_TIME_MEASUREMENT)
#include "ts_frame.h"
#endif


/* include frame header file (if exist) and TL subsystem header file(s) */
#ifdef TL_FRAME
#include "driver_frm.h"
#endif 
#include "driver_fri.h"

#if !defined(TL_FRAME) && !defined(TL_CODE_SFCN) && !defined(RT) && !defined(TL_FRAME_PROVIDE_ROOT_FUNCTION_INFO) 

#ifdef FORBID_OPT
void (* g_FcnTable_a[])(void)        = {(void *)Task_driver_runnable_Wrapper};
#endif /* #ifdef FORBID_OPT */

#else /* #ifndef TL_FRAME */

extern void CallFcn_a1(void);

#ifdef FORBID_OPT
void (* g_FcnTable_a[])(void)        = {(void *)CallFcn_a1};
#endif /* #ifdef FORBID_OPT */


#ifdef TL_FRAME_PROVIDE_ROOT_FUNCTION_INFO
UInt16 g_NumOfStepFcn_a              = 1;
UInt16 g_NumOfRestartFcn_a           = 0;
UInt16 g_NumOfInitFcn_a              = 0;
UInt16 g_NumOfTermFcn_a              = 0;

void (* g_StepFcnTable_a[])(void)    = {(void *)CallFcn_a1};
void (* g_RestartFcnTable_a[])(void) = {0L};
void (* g_InitFcnTable_a[])(void)    = {0L};
void (* g_TermFcnTable_a[])(void)    = {0L};
#endif /* #ifdef TL_FRAME_PROVIDE_ROOT_FUNCTION_INFO */

#ifdef CTC_CODE_COVERAGE
extern void ctc_append_all(void);
#endif /* #ifdef CTC_CODE_COVERAGE */

/**************************************************************************\
   Variables declarations
\**************************************************************************/

#ifdef TL_STACK_MEASUREMENT
/* variables for stack consumption measurement */
UInt32 g_TsStackSize_a;
#endif

#ifdef TL_TIME_MEASUREMENT
/* variables for execution time measurement */
UInt32 g_TsExecTime_a;
#endif



/**************************************************************************\
    Caller function for production code function:  "Task_driver_runnable_Wrapper" 
\**************************************************************************/
void CallFcn_a1(void)
{


#ifdef TL_STACK_MEASUREMENT
   /* setup stack consumption measurement */
   TsInitStack();
#endif

#ifdef TL_TIME_MEASUREMENT
   /* setup execution time measurement */
   TsInitWatch();
   TsStartWatch();
#endif

   /* call the production code function */
   Task_driver_runnable_Wrapper();

#ifdef TL_TIME_MEASUREMENT
   /* stop execution time counter */
   TsStopWatch();
#endif

#ifdef TL_STACK_MEASUREMENT
   /* get stacksize */
   g_TsStackSize_a = TsGetStackSize();
#endif

#ifdef TL_TIME_MEASUREMENT
   /* get execution time */
   g_TsExecTime_a = TsGetWatch() - g_TsExecTimeError;
#endif


} /* CallFcn_a1 */


/**************************************************************************\
   Caller function for CTC code coverage support
\**************************************************************************/
#ifdef CTC_CODE_COVERAGE
void CallCtcAppend_a(void)
{
   /* call the function to saving CTC data */
   ctc_append_all();
}
#endif /* #ifdef CTC_CODE_COVERAGE */

#endif /* #ifndef TL_FRAME */
