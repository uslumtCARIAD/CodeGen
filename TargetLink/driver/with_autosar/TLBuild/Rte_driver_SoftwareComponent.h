/**************************************************************************************************\
 *** 
 *** System              : TargetLink Simulation RTE
 *** ECU                 : TL_ECU
 *** Configuration       : NONE
 *** Codefile            : Rte_driver_SoftwareComponent.h
 ***
 *** Generated by the SystemDesk RTE code generator
 *** Generation date: 2024-06-26 10:27:02
 ***
 *** SystemDesk version  : 4.3.0.314576
 *** Copyright (c) 2016 dSPACE GmbH
\**************************************************************************************************/

#ifndef RTE_DRIVER_SOFTWARECOMPONENT_H
#define RTE_DRIVER_SOFTWARECOMPONENT_H

/*----------------------------------------------------------------------------*\
  DEFINES (OPT)
\*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*\
  INCLUDES
\*----------------------------------------------------------------------------*/

#include "Rte.h"
/*----------------------------------------------------------------------------*\
  DEFINES
\*----------------------------------------------------------------------------*/

#ifndef RTE_C
#ifndef RTE_DRIVER_SOFTWARECOMPONENT_C

/* Init value(s). */
#define Rte_InitValue_Out1_new_DataElement 0 
#define Rte_InitValue_Out2_new_DataElement 0 
#endif 
#endif 
/*----------------------------------------------------------------------------*\
  TYPEDEFS
\*----------------------------------------------------------------------------*/

#ifndef RTE_C
#ifndef RTE_DRIVER_SOFTWARECOMPONENT_C
typedef const Rte_CDS_driver_SoftwareComponent * const Rte_Instance;
#endif 
#endif 
/*----------------------------------------------------------------------------*\
  ENUMS
\*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*\
  VARIABLES
\*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*----------------------------------------------------------------------------*/

#ifndef RTE_C
#ifndef RTE_DRIVER_SOFTWARECOMPONENT_C

/*************************************************************************************************\
 ***  PARAMETERIZED MACRO:
 ***      Rte_IWrite_driver_runnable_Out1_new_DataElement
 ***
 ***  DESCRIPTION:
 ***      Performs an "implicit" write on a sender-receiver communication data with "data" semantics
 ***
 ***  PARAMETERS:
 ***      Type               Name                Description
 ***      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
 ***      sint16             new_DataElement     
 ***
 ***  RETURNS:
 ***      void
 ***
 ***  SETTINGS:
 ***
\*************************************************************************************************/
#define Rte_IWrite_driver_runnable_Out1_new_DataElement(new_DataElement) \
(\
   (Rte_Inst_driver_SoftwareComponent->driver_runnable_Out1_new_DataElement->value) =\
 (new_DataElement)\
)

/*************************************************************************************************\
 ***  PARAMETERIZED MACRO:
 ***      Rte_IWriteRef_driver_runnable_Out1_new_DataElement
 ***
 ***  DESCRIPTION:
 ***      Performs an implicit write on a sender-receiver communication data item with data semantic
 s.
 ***
 ***  PARAMETERS:
 ***      Type               Name                Description
 ***      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
 ***
 ***  RETURNS:
 ***      sint16 *
 ***
 ***  SETTINGS:
 ***
\*************************************************************************************************/
#define Rte_IWriteRef_driver_runnable_Out1_new_DataElement() \
(\
   ((sint16 *) (&(Rte_Inst_driver_SoftwareComponent->driver_runnable_Out1_new_DataElement->value)))\
)

/*************************************************************************************************\
 ***  PARAMETERIZED MACRO:
 ***      Rte_IWrite_driver_runnable_Out2_new_DataElement
 ***
 ***  DESCRIPTION:
 ***      Performs an "implicit" write on a sender-receiver communication data with "data" semantics
 ***
 ***  PARAMETERS:
 ***      Type               Name                Description
 ***      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
 ***      sint16             new_DataElement     
 ***
 ***  RETURNS:
 ***      void
 ***
 ***  SETTINGS:
 ***
\*************************************************************************************************/
#define Rte_IWrite_driver_runnable_Out2_new_DataElement(new_DataElement) \
(\
   (Rte_Inst_driver_SoftwareComponent->driver_runnable_Out2_new_DataElement->value) =\
 (new_DataElement)\
)

/*************************************************************************************************\
 ***  PARAMETERIZED MACRO:
 ***      Rte_IWriteRef_driver_runnable_Out2_new_DataElement
 ***
 ***  DESCRIPTION:
 ***      Performs an implicit write on a sender-receiver communication data item with data semantic
 s.
 ***
 ***  PARAMETERS:
 ***      Type               Name                Description
 ***      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
 ***
 ***  RETURNS:
 ***      sint16 *
 ***
 ***  SETTINGS:
 ***
\*************************************************************************************************/
#define Rte_IWriteRef_driver_runnable_Out2_new_DataElement() \
(\
   ((sint16 *) (&(Rte_Inst_driver_SoftwareComponent->driver_runnable_Out2_new_DataElement->value)))\
)

#endif 
#endif 
/*----------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*----------------------------------------------------------------------------*/


/* runnables */
#ifdef __cplusplus
 extern "C" {
#endif /* __cplusplus */ 

extern void driver_runnable(void);
#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */ 


#endif/*RTE_DRIVER_SOFTWARECOMPONENT_H */
/*----------------------------------------------------------------------------*\
 END OF FILE
\*----------------------------------------------------------------------------*/
