//
// Beacon Object File ( Format ) Includes
// Youtube Video Discussing The Object File
// Format: youtube.com/watch?v=gfYswA_Ronw
//
#include "common.h"

//
// Beacon Object File ( BOF ) asks that the
// object file have a "go" symbol, which 
// will act as its "entrypoint" function for
// Beacon to call.
//
VOID beacon_entry( IN PCHAR Buffer, IN ULONG Length ) {
	//
	// Code either 1) calling any additional code
	// or 2) ending here should be put here, so
	// that it can pass messages back to beacon.
	// safely.
	//

};
