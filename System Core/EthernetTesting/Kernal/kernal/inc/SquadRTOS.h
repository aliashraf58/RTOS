/******************************************************************************/
/**
 * @file <file-name>.h
 * @brief <file-short-description>
 *
 * @par Project Name
 * <project-name>
 *
 * @par Code Language
 * C
 *
 * @par Description
 * <file-long-description>
 *
 * @par Author
 * Mahmoud Abou-Hawis
 *
 */
/******************************************************************************/

/******************************************************************************/
/* MULTIPLE INCLUSION GUARD */
/******************************************************************************/
#ifndef SQUADRTOS_H
#define SQUADRTOS_H
/******************************************************************************/

/******************************************************************************/
/* C++ Style GUARD */
/******************************************************************************/
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */
/******************************************************************************/

/******************************************************************************/
/* INCLUDES */
/******************************************************************************/
#include <stddef.h>
#include <stdint.h>
#include <ti/devices/msp432e4/driverlib/driverlib.h>
#include "thread.h"
#include "List.h"
#include "PeridicTask.h"
#include "stdLib.h"
#include "queue.h"
#include "Mutex.h"
#include "mailBox.h"
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include "ti/devices/msp432e4/inc/msp.h"
#include "ti/devices/msp432e4/driverlib/driverlib.h"
#include "uartstdio.h"
#include "ustdlib.h"
#include "pinout.h"
#include "utils/locator.h"
#include "utils/lwiplib.h"
#include "lwip/apps/httpd.h"
#include "SOSConf.h"
/******************************************************************************/

/******************************************************************************/
/* PUBLIC DEFINES */
/******************************************************************************/
#define MEM32_ADDRESS(ADDRESS) (*((volatile unsigned long *)(ADDRESS)))
/******************************************************************************/

/******************************************************************************/
/* PUBLIC MACROS */
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/
/* PUBLIC ENUMS */
/******************************************************************************/
typedef enum
{
    SQUAD_RTOS_OPERATION_FAILD,
    SQUAD_RTOS_OPERATION_SUCCESS
} SquadRTOS_enmReturns;
/******************************************************************************/

/******************************************************************************/
/* PUBLIC TYPES */
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/
/* PUBLIC CONSTANT DECLARATIONS */
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/
/* PUBLIC VARIABLE DECLARATIONS */
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/
/* PUBLIC FUNCTION PROTOTYPES */
/******************************************************************************/
void SquadRTOS_vinit(void);
void SquadRTOS_vschedulerStart(void);
void SquadRTOS_SVC_vSchedulerStart(void);
void SquadRTOS_SVC_vHandler_main(uint32_t * svc_args);
/******************************************************************************/

/******************************************************************************/
/* C++ Style GUARD */
/******************************************************************************/
#ifdef __cplusplus
}
#endif /* __cplusplus */
/******************************************************************************/

/******************************************************************************/
/* MULTIPLE INCLUSION GUARD */
/******************************************************************************/
#endif /* FILE_NAME_H */
/******************************************************************************/