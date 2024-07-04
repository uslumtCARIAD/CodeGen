/**************************************************************************************************\
 *** 
 *** Simulink model       : driver
 *** TargetLink subsystem : driver/driver
 *** Codefile             : driver_ARfrm.c
 ***
 *** Generation date: 2024-06-26 10:26:39
 ***
 *** TargetLink version      : 4.3p6 from 26-Feb-2020
 *** Code generator version  : Build Id 4.3.0.31 from 2020-03-02 18:28:10
\**************************************************************************************************/

#ifndef DRIVER_ARFRM_C
#define DRIVER_ARFRM_C


#include "Rte.h"
#include "driver_ARfrm.h"

/**************************************************************************************************\
 ***  FUNCTION:
 ***      Task_driver_runnable_Wrapper
 *** 
 ***  DESCRIPTION:
 ***      
 *** 
 ***  PARAMETERS:
 ***      Type               Name                Description
 ***      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***
 ***  RETURNS:
 ***      void
 ***
 ***  SETTINGS:
 ***
\**************************************************************************************************/
void Task_driver_runnable_Wrapper(void)
{
   Task_driver_runnable();
}

#endif /* DRIVER_ARFRM_C */
/*------------------------------------------------------------------------------------------------*\
  END OF FILE
\*------------------------------------------------------------------------------------------------*/
