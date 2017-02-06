#include <ImageSearch.au3>

HotKeySet("p", "checkForImage")

global $y = 0, $x = 0

Func checkForImage()
local $search = _ImageSearchArea('test.bmp', 1, 800, 40, 900, 80, $x, $y, 0)
If $search = 1 Then
MouseMove($x, $y, 10)
EndIf
EndFunc
checkForImage()
while 1
sleep(200)
WEnd