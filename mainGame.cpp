#include "stdafx.h"
#include "mainGame.h"


mainGame::mainGame()
{
}


mainGame::~mainGame()
{
}
////////////////////////////////////
//생성자 소멸자 빠이빠이
////////////////////////////////////

//초기화 해주는 함수
HRESULT mainGame::init(void)
{
	gameNode::init();

	return S_OK;
}

//메모리 해제함수
void mainGame::release(void)
{
	gameNode::release();

}

//연산 하는 곳
void mainGame::update(void)
{
	gameNode::update();

}

//그려주는 곳
void mainGame::render(HDC hdc)
{

}
