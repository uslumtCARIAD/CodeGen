/**************************************************************************************************\
 *** 
 *** Simulink model       : driver
 *** TargetLink subsystem : driver/driver
 *** Codefile             : driver_fri.h
 ***
 *** Generation date: 2024-06-26 10:26:39
 ***
 *** TargetLink version      : 4.3p6 from 26-Feb-2020
 *** Code generator version  : Build Id 4.3.0.31 from 2020-03-02 18:28:10
\**************************************************************************************************/

#ifndef DRIVER_FRI_H
#define DRIVER_FRI_H


#include "Rte_Type.h"
#ifdef TL_FRAME
#include "driver_frm.h"
#endif

/**************************************************************************************************\
   ARRteRteVariable: Default storage class for AUTOSAR RTE variables | Width: 16
\**************************************************************************************************/
extern sint16 Rte_driver_SoftwareComponent_Out1_new_DataElement;
extern sint16 Rte_driver_SoftwareComponent_Out2_new_DataElement;

/**************************************************************************************************\
   TL_CG_FCNCL_GLOBAL_NOINLINE_NOTMOVABLE: Default function class which have not 'static' extent and
    is not movable
\**************************************************************************************************/
extern void Task_driver_runnable_Wrapper(void);

#endif /* DRIVER_FRI_H */
/*------------------------------------------------------------------------------------------------*\
  END OF FILE
\*------------------------------------------------------------------------------------------------*/
