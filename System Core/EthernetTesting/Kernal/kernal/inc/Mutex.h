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
#ifndef MUTEX_H
#define MUTEX_H
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
#include <stdbool.h>
#include "List.h"
/******************************************************************************/

/******************************************************************************/
/* PUBLIC DEFINES */
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/
/* PUBLIC MACROS */
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/
/* PUBLIC ENUMS */
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/
/* PUBLIC TYPES */
/******************************************************************************/
typedef struct
{
    uint32_t bKey;
    SquadRTOS_tstList NeedAccesThisMutex;
} SquadRTOS_tstMutex;
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
void SquadRTOS_SVC_vCreateMutex(SquadRTOS_tstMutex * pstMutex , uint32_t u32InitialValue);
void SquadRTOS_SVC_vTakeMutex(SquadRTOS_tstMutex * pstMutex , uint32_t u32WaitFlag);
void SquadRTOS_SVC_vReleaseMutex(SquadRTOS_tstMutex * pstMutex);
void SquadRTOS_vCreateMutex(SquadRTOS_tstMutex * pstMutex , uint32_t u32InitialValue);
uint32_t SquadRTOS_vTakeMutex(SquadRTOS_tstMutex * pstMutex , uint32_t u32WaitFlag);
void SquadRTOS_vReleaseMutex(SquadRTOS_tstMutex * pstMutex);


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