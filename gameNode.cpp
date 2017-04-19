#include "stdafx.h"
#include "gameNode.h"


gameNode::gameNode()
{
}


gameNode::~gameNode()
{
}

//초기화 하는 함수
HRESULT gameNode::init(void)
{
	SetTimer(_hWnd, 1, 10, NULL);

	KEYMANAGER->init();

	return S_OK;
}

//메모리 해제 함수
void gameNode::release(void)
{
	KillTimer(_hWnd, 1);

	KEYMANAGER->releaseSingleton();
}

//갱신해주는 함수
void gameNode::update(void)
{
	InvalidateRect(_hWnd, NULL, true);
}

//그려주는 함수
void gameNode::render(HDC hdc)
{

}

LRESULT gameNode::MainProc(HWND hWnd, UINT iMessage, WPARAM wParam, LPARAM lParam)
{
	HDC hdc;
	PAINTSTRUCT ps;

	switch (iMessage)
	{
	case WM_TIMER:
		this->update();
		break;
	case WM_PAINT:
	{
		hdc = BeginPaint(hWnd, &ps);

		this->render(hdc);

		EndPaint(hWnd, &ps);
	}
	break;

	case WM_MOUSEMOVE:
		_ptMouse.x = static_cast<float>LOWORD(lParam);
		_ptMouse.y = static_cast<float>HIWORD(lParam);

		break;

	case WM_KEYDOWN:
		switch (wParam)
		{
		case VK_ESCAPE:
			PostMessage(hWnd, WM_DESTROY, 0, 0);
			break;
		}
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	}

	return (DefWindowProc(hWnd, iMessage, wParam, lParam));
}