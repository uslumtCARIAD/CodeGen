/************************************************************************************\
 ***
 *** Simulation frame file :  driver_frm.h
 *** Code generation unit  :  driver/driver/Subsystem/driver
 ***
 *** Generated by dSPACE TargetLink Version 4.3p6 from 26-Feb-2020
 *** Generation date:  04-Jul-2024 08:56:43
\***********************************************************************************/

#ifndef _DRIVER_FRM_H_
#define _DRIVER_FRM_H_

/**************************************************************************\
   definitions and includes
\**************************************************************************/

#ifndef TL_CODE_SFCN
#include "tl_types.h"                /* base data types       */
#include "ts_frame.h"                /* errCode handling        */
#endif


/**************************************************************************\
  definitions for external simulation
\**************************************************************************/

#ifdef LOG_VARS


  #ifndef LOG_VAR
  /* macro to store a single variable into the log structure */
  #define LOG_VAR(_subId,_name,_expr)              \
     log_struct_##_subId._name[0] = _expr;    \
     log_struct_##_subId.flags._name = 1
  #endif

  #ifndef LOG_VEC
  /* macro to store a vector variable into the log structure */
  #define LOG_VEC(_subId,_name,_width,_expr)       \
     {int i; for (i=0; i<_width; i++)       \
        log_struct_##_subId._name[i] = _expr[i]; }\
     log_struct_##_subId.flags._name = 1
  #endif

  #ifndef LOG_MATRIX
  /* macro to store a matrix variable into the log structure */
  #define LOG_MATRIX(_subId,_name,_row,_col,_expr)         \
     {int i,j;                                             \
     for (i=0; i<_row; i++)                                \
        for (j=0; j<_col; j++)                             \
           log_struct_##_subId._name[i][j] = _expr[i][j]; }\
     log_struct_##_subId.flags._name = 1
  #endif

  #ifndef LOG_BIT
  /* macro to store a single bitfield element into the log structure */
  #define LOG_BIT(_subId,_name,_expr)              \
     log_struct_##_subId._name[0] = _expr?1:0;\
     log_struct_##_subId.flags._name = 1
  #endif

#else /* LOG_VARS */


  /* define empty log macros */

  #ifndef LOG_VAR
  /* macro to store a single variable into the log structure */
  #define LOG_VAR(_subId,_name,_expr)              
  #endif

  #ifndef LOG_VEC
  /* macro to store a vector variable into the log structure */
  #define LOG_VEC(_subId,_name,_width,_expr)       
  #endif

  #ifndef LOG_MATRIX
  /* macro to store a matrix variable into the log structure */
  #define LOG_MATRIX(_subId,_name,_row,_col,_expr)       
  #endif

  #ifndef LOG_BIT
  /* macro to store a single bitfield element into the log structure */
  #define LOG_BIT(_subId,_name,_expr)              
  #endif


#endif /* LOG_VARS */


#endif /* _DRIVER_FRM_H_ */
