/*********************************************************************
 * main.h
 ********************************************************************/
#include <stdbool.h>

//***********************************************************
//* External defines
//***********************************************************

#define	PBUFFER_SIZE 16 // Print buffer
#define	SBUFFER_SIZE 25 // Serial input buffer (25 for S-Bus)

//***********************************************************
//* Externals
//***********************************************************

// Buffers
extern char pBuffer[PBUFFER_SIZE];
extern uint8_t	buffer[];
extern char sBuffer[SBUFFER_SIZE];

extern bool	RefreshStatus;
extern uint32_t ticker_32;	
extern int16_t	transition_counter;	
extern uint8_t	Transition_state;
extern int16_t	transition;

// Flags
extern uint8_t	General_error;
extern uint8_t	Flight_flags;
extern uint8_t	Alarm_flags;

// Misc
extern uint16_t InterruptCount;
extern uint16_t LoopStartTCNT1;
extern bool Overdue;
extern uint8_t	LoopCount;
