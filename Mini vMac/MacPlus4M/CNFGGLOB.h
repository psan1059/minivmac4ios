#define RomFileName "vMac.ROM"

#define WantInitSpeedValue 2
#define WantInitNotAutoSlow 0
#define EnableAutoSlow 1

#define MySoundEnabled 1
#define MySoundRecenterSilence 0
#define kLn2SoundSampSz 3

#define NumDrives 6

#define vMacScreenHeight 342
#define vMacScreenWidth 512
#define vMacScreenDepth 0

#define kROM_Size 0x00020000

#ifdef PLIST_PREPROCESSOR
#define MNVMBundleDisplayName Mac Plus
#define MNVMBundleGetInfoString 4M, 512×342
#else
#include "../CNFGGLOB.h"
#endif
