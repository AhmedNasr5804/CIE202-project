#include "paddle.h"
#include "collidable.h"
#include "game.h"

paddle::paddle(point r_uprleft, int r_width, int r_height, game* r_pGame) :
	collidable(r_uprleft, r_width, r_height, r_pGame)
{
	imageName = "images\\paddle.jpg";
	position = r_uprleft;
	pga = r_pGame;
	width = r_width;
	height = r_height;
}

void paddle::move_paddle_right(paddle* p)
{
	point prePos = p->get_position();
	game* preGame = p->getGame();
	float width = p->get_width();
	float height = p->get_height();

	preGame->getWind()->SetPen(LAVENDER, 1);
	preGame->getWind()->SetBrush(LAVENDER);
	preGame->getWind()->DrawRectangle(prePos.x, prePos.y, prePos.x + width, prePos.y + height);
	delete p;

	prePos.x = prePos.x - width;
	p = new paddle(prePos, width, height, preGame);
	p->draw();
}

void paddle::move_paddle_left(paddle* p)
{
	point prePos = p->get_position();
	game* preGame = p->getGame();
	float width = p->get_width();
	float height = p->get_height();

	preGame->getWind()->SetPen(LAVENDER, 1);
	preGame->getWind()->SetBrush(LAVENDER);
	preGame->getWind()->DrawRectangle(prePos.x, prePos.y, prePos.x + width, prePos.y + height);
	delete p;

	prePos.x = prePos.x + width;
	p = new paddle(prePos, width, height, preGame);
	p->draw();
}

point paddle::get_position()
{
	return position;
}

game* paddle::getGame()
{
	return pga;
}

float paddle::get_width()
{
	return width;
}

float paddle::get_height()
{
	return height;
}
