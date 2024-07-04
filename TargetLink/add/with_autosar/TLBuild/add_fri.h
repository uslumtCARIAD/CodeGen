/**************************************************************************************************\
 *** 
 *** Simulink model       : add
 *** TargetLink subsystem : add/add
 *** Codefile             : add_fri.h
 ***
 *** Generation date: 2024-07-04 07:50:43
 ***
 *** TargetLink version      : 4.3p6 from 26-Feb-2020
 *** Code generator version  : Build Id 4.3.0.31 from 2020-03-02 18:28:10
\**************************************************************************************************/

#ifndef ADD_FRI_H
#define ADD_FRI_H


#include "Rte_Type.h"
#ifdef TL_FRAME
#include "add_frm.h"
#endif

/**************************************************************************************************\
   ARRteRteVariable: Default storage class for AUTOSAR RTE variables | Width: 16
\**************************************************************************************************/
extern sint16 Rte_add_SoftwareComponent_input1_new_DataElement;
extern sint16 Rte_add_SoftwareComponent_input2_new_DataElement;
extern sint16 Rte_add_SoftwareComponent_output_new_DataElement;

/**************************************************************************************************\
   TL_CG_FCNCL_GLOBAL_NOINLINE_NOTMOVABLE: Default function class which have not 'static' extent and
    is not movable
\**************************************************************************************************/
extern void Task_add_runnable_Wrapper(void);

#endif /* ADD_FRI_H */
/*------------------------------------------------------------------------------------------------*\
  END OF FILE
\*------------------------------------------------------------------------------------------------*/
