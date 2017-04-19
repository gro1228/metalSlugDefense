#pragma once
#include "gameNode.h"

class mainGame : public gameNode
{

public:
	virtual HRESULT init(void);
	virtual void release(void);
	virtual void update(void);
	virtual void render(HDC hdc);

	mainGame();
	~mainGame();
};

