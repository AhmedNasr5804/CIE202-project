#pragma once
#include "collidable.h"

class paddle : public collidable
{
	float width;
	float height;
	point pos;
	game* PtoGame;

public:
	paddle(point r_uprleft, int r_width, int r_height, game* r_pGame);

	void collisionAction() override;

	/*void moveLeft(paddle* p);
	void moveRight(paddle* p);*/

	float getWidth();
	float getHeigth();
	point getPoint();
	game* getGame();

	void OnClick(window* w, paddle* p);
};

