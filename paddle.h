#pragma once
#include "collidable.h"


class paddle : public collidable
{
	point position;
	game* pga;
	float width;
	float height;
public:
	paddle(point r_uprleft, int r_width, int r_height, game* r_pGame);
	void collisionAction() override;

	static void move_paddle_right(paddle* p);
	static void move_paddle_left(paddle* p);

	point get_position();
	game* getGame();
	float get_width();
	float get_height();

};

