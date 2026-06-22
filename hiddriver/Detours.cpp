#include "Detours.h"

BYTE   Detour::TrampolineBuffer[20 * 20] = {};
SIZE_T Detour::TrampolineSize = 0;