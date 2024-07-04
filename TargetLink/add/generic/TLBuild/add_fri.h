/**************************************************************************************************\
 *** 
 *** Simulink model       : add
 *** TargetLink subsystem : add/add
 *** Codefile             : add_fri.h
 ***
 *** Generation date: 2024-06-26 20:12:21
 ***
 *** TargetLink version      : 4.3p6 from 26-Feb-2020
 *** Code generator version  : Build Id 4.3.0.31 from 2020-03-02 18:28:10
\**************************************************************************************************/

#ifndef ADD_FRI_H
#define ADD_FRI_H


#include "tl_basetypes.h"
#include "tl_types.h"
#ifdef TL_FRAME
#include "add_frm.h"
#endif

/**************************************************************************************************\
   SLGlobal: Default storage class for global variables | Width: 16
\**************************************************************************************************/
extern Int16 Sa1_input1;
extern Int16 Sa1_input2;
extern Int16 Sa1_output;

/**************************************************************************************************\
   GlobalStep: Default function class for not static model step functions
\**************************************************************************************************/
extern void add(void);

#endif /* ADD_FRI_H */
/*------------------------------------------------------------------------------------------------*\
  END OF FILE
\*------------------------------------------------------------------------------------------------*/
