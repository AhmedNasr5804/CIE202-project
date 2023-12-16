#include "game.h"
#include "ball.h"
#include "collidable.h"
#include "gameConfig.h"
//#include "paddle.h"


ball::ball(point r_uprleft, int r_width, int r_height, game* r_pGame)
	:collidable(r_uprleft, r_width, r_height , r_pGame)
{
	imageName = "ball.jpg";
	pos = r_uprleft;
	width = r_width;
	height = r_height;
	PtoGame = r_pGame;

}

void ball::collisionAction()
{

}

void ball::move(ball b)
{
	////getting the old point and game pointer of the ball
	//point prePos = b.getPoint();
	//game* prePtoGame = PtoGame;

	////drawing a rectangle that has the same color as the background
	//prePtoGame->getWind()->SetPen(LAVENDER, 1);
	//prePtoGame->getWind()->SetBrush(LAVENDER);
	//prePtoGame->getWind()->DrawRectangle(prePos.x, prePos.y, prePos.x + b.getWidth(), prePos.y + b.getHeight());

	////deleting the old ball
	//delete = b;

	////creating a new ball at a new position
	//prePos.x = prePos.x - width;

	//b = new ball(prePos, width, height, prePtoGame);

	//b.draw();
}

int ball::getWidth()
{
	return  width;
}

int ball::getHeight()
{
	return height;
}

point ball::getPoint()
{
	return pos;
}

game* ball::getGame()
{
	return PtoGame;
}
