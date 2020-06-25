//
// Beacon Object File ( Format ) Includes
// Youtube Video Discussing The Object File
// Format: youtube.com/watch?v=gfYswA_Ronw
//
#include "common.h"

//
// Go() Function EntryPoint. Used to call
// code when run with inline-execute command
//
VOID go( 
	IN PCHAR Buffer, 
	IN ULONG Length 
) 
{
	BeaconPrintf( CALLBACK_OUTPUT, " SUCCESS_MSG " );
	BeaconPrintf( CALLBACK_ERROR, " FAILURE_MSG " );
};
