// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

// Modify the following defines if you have to target a platform prior to the ones specified below.
// Refer to MSDN for the latest info on corresponding values for different platforms.
#ifndef WINVER				// Allow use of features specific to Windows XP or later.
#define WINVER 0x0501		// Change this to the appropriate value to target other versions of Windows.
#endif

#ifndef _WIN32_WINNT		// Allow use of features specific to Windows XP or later.
#define _WIN32_WINNT 0x0501	// Change this to the appropriate value to target other versions of Windows.
#endif

#ifndef _WIN32_WINDOWS		// Allow use of features specific to Windows 98 or later.
#define _WIN32_WINDOWS 0x0410 // Change this to the appropriate value to target Windows Me or later.
#endif

#ifndef _WIN32_IE			// Allow use of features specific to IE 6.0 or later.
#define _WIN32_IE 0x0600	// Change this to the appropriate value to target other versions of IE.
#endif

#define WIN32_LEAN_AND_MEAN		// Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>
#include <stdio.h>
#include <tchar.h>




#include <ctype.h>
#include <olectl.h>

#define __forceinline
#define LLMHF_INJECTED 0x00000001
#define IDCONTINUE 11
#define IDTRYAGAIN 10
#define MIXERCONTROL_CONTROLTYPE_BASS_BOOST     (MIXERCONTROL_CONTROLTYPE_BOOLEAN + 0x00002277)
#define LPLVITEM LPLVITEMW
#define CF_DIBV5 17
#define TreeView_GetCheckState(hwndTV, hti) \
   ((((UINT)(SendMessageA((hwndTV), TVM_GETITEMSTATE, (WPARAM)(hti),  \
                     TVIS_STATEIMAGEMASK))) >> 12) -1)
#define SBARS_TOOLTIPS 0x0800
#define BS_TYPEMASK 0x0000000FL
#define LV_VIEW_TILE 0x0004
#define LVN_HOTTRACK (LVN_FIRST-21)
#define LVN_BEGINSCROLL (LVN_FIRST-80)
#define LVN_ENDSCROLL (LVN_FIRST-81)
#define LVN_MARQUEEBEGIN (LVN_FIRST-56)
//#define MIM_BACKGROUND 2
//#define MIM_APPLYTOSUBMENUS 0x80000000L

typedef struct tagTVKEYDOWN {
    NMHDR hdr;
    WORD wVKey;
    UINT flags;
} NMTVKEYDOWN, *LPNMTVKEYDOWN;


typedef DWORD *LPCOLORREF;

extern __int64 _strtoi64(const char*, char**, int);
extern unsigned __int64 _strtoui64(const char*, char**, int);
// TODO: reference additional headers your program requires here
