/**************************************************************************************************\
 *** 
 *** Simulink model       : driver
 *** TargetLink subsystem : driver/driver
 *** Codefile             : driver_fri.h
 ***
 *** Generation date: 2024-07-04 08:56:42
 ***
 *** TargetLink version      : 4.3p6 from 26-Feb-2020
 *** Code generator version  : Build Id 4.3.0.31 from 2020-03-02 18:28:10
\**************************************************************************************************/

#ifndef DRIVER_FRI_H
#define DRIVER_FRI_H


#include "tl_basetypes.h"
#include "tl_types.h"
#ifdef TL_FRAME
#include "driver_frm.h"
#endif

/**************************************************************************************************\
   SLGlobal: Default storage class for global variables | Width: 16
\**************************************************************************************************/
extern Int16 Sa1_Out1;
extern Int16 Sa1_Out2;

/**************************************************************************************************\
   GlobalStep: Default function class for not static model step functions
\**************************************************************************************************/
extern void driver(void);

#endif /* DRIVER_FRI_H */
/*------------------------------------------------------------------------------------------------*\
  END OF FILE
\*------------------------------------------------------------------------------------------------*/
