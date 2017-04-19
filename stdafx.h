#pragma once

#include "targetver.h"
#define WIN32_LEAN_AND_MEAN             // 거의 사용되지 않는 내용은 Windows 헤더에서 제외합니다.
// Windows 헤더 파일:
#include <windows.h>
#include <stdlib.h>
#include <iostream>
#include <tchar.h>

#include "randomFunction.h"
#include "commonMacroFunction.h"
#include "keyManager.h"

using namespace std;

//====================================
// - 2017. 02. 28 ## 디파인문 ##
//====================================

#define WINNAME (LPTSTR)(TEXT("BLUE Team"))
#define WINSTARTX 10
#define WINSTARTY 10
#define WINSIZEX 800	
#define WINSIZEY 600
#define WINSTYLE WS_CAPTION | WS_SYSMENU

#define RND randomFunction::getSingleton()
#define KEYMANAGER keyManager::getSingleton()
#define IMAGEMANAGER imageManager::getSingleton()
#define TIMEMANAGER timeManager::getSingleton()
#define SOUNDMANAGER soundManager::getSingleton()
#define EFFECTMANAGER effectManager::getSingleton()
#define TXTDATA txtData::getSingleton()

//======================================
// - 2017. 02. 28 ## 매크로 함수 ##
//======================================

#define SAFE_DELETE(p)		{if(p) { delete(p); (p) = NULL;}}
#define SAFE_DELETE_ARRAY(p) {if(p) { delete[](p); (p) = NULL;}}
#define SAFE_RELEASE(p)		{if(p) { (p)->Release(); (p) = NULL;}}

//========================================
// - 2017. 02. 28 ## 전역 변수 ##
//========================================

extern HWND _hWnd;
extern HINSTANCE _hInstance;

extern POINT _ptMouse;
