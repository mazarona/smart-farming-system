/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *       Author:  Musa Mahmoud
 *	   	   File:  Pump_Types.h
 *		  Layer:  Hal
 *       Module:  Pump (Mini Water Pump)
 *		Version:  1.0
 *	
 *  Description:  A header file that contains the types used to configure pump
 *  
 *********************************************************************************************************************/

#ifndef PUMP_TYPES_H
#define PUMP_TYPES_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "Gpio_Types.h"

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/* Pump current state value */
typedef enum
{
    PUMP_TURNED_OFF=0,
    PUMP_TURNED_ON
} Pump_State_t;

/* Switch Activation Value */
typedef enum
{
    PUMP_ACTIVE_LOW=0,
    PUMP_ACTIVE_HIGH
} Pump_Activation_t;

/* Pump configuration structure */
typedef struct
{
    Gpio_PinId_t PinId;
    Pump_Activation_t ActivationType;
} Pump_Config_t;

#endif  /* PUMP_TYPES_H */

/**********************************************************************************************************************
 *  END OF FILE: Pump_Types.h
 *********************************************************************************************************************/
