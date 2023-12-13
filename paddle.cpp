#include "paddle.h"
#include "collidable.h"
#include "gameConfig.h"
#include "game.h"


paddle::paddle(point r_uprleft, int r_width, int r_height, game* r_pGame) :
	collidable(r_uprleft, r_width, r_height, r_pGame)
{
	imageName = "images\\paddle.jpg";
	pos = r_uprleft;
	width = r_width;
	height = r_height;
	PtoGame = r_pGame;
}

void paddle::collisionAction()
{
}

/*void paddle::moveLeft(paddle* p)
{
	//getting the old point and game pointer of the paddle
	point prePos = p->getPoint();
	game* prePtoGame = PtoGame;

	//drawing a rectangle that has the same color as the background
	prePtoGame->getWind()->SetPen(LAVENDER, 1);
	prePtoGame->getWind()->SetBrush(LAVENDER);
	prePtoGame->getWind()->DrawRectangle(prePos.x, prePos.y, prePos.x + p->getWidth(), prePos.y + p->getHeigth());

	//deleting the old paddle
	delete p;

	//creating a new paddle at a new position
	prePos.x = prePos.x - width;

	p = new paddle(prePos, width, height, prePtoGame);

	p->draw();
}

void paddle::moveRight(paddle* p)
{
	//getting the old point and game pointer of the paddle
	point prePos = p->getPoint();
	game* prePtoGame = PtoGame;

	//drawing a rectangle that has the same color as the background
	prePtoGame->getWind()->SetPen(LAVENDER, 1);
	prePtoGame->getWind()->SetBrush(LAVENDER);
	prePtoGame->getWind()->DrawRectangle(prePos.x, prePos.y, prePos.x + p->getWidth(), prePos.y + p->getHeigth());

	//deleting the old paddle
	delete p;

	//creating a new paddle at a new position
	prePos.x = prePos.x + width;

	p = new paddle(prePos, width, height, prePtoGame);

	p->draw();
}*/

float paddle::getWidth()
{
	return width;
}

float paddle::getHeigth()
{
	return height;
}

point paddle::getPoint()
{
	return pos;
}

game* paddle::getGame()
{
	return PtoGame;
}

void paddle::OnClick(window* w, paddle* p)
{
	char cKeyData;
	keytype kType;

	// Loop until there escape is pressed
	do
	{
		w = PtoGame->getWind();
		w->GetKeyPress(cKeyData);
		kType = w->GetKeyPress(cKeyData);

		//getting the old point and game pointer of the paddle
		point prePos = p->getPoint();
		game* prePtoGame = PtoGame;

		if (kType == ARROW)
		{
			switch (cKeyData)
			{
			case 4:	//left Arrow
				uprLft.x -= 5;

				//drawing a rectangle that has the same color as the background
				prePtoGame->getWind()->SetPen(LAVENDER, 1);
				prePtoGame->getWind()->SetBrush(LAVENDER);
				prePtoGame->getWind()->DrawRectangle(prePos.x, prePos.y, config.windWidth, prePos.y + p->getHeigth());

				p->draw();
				break;
			case 6:	//right Arrow
				uprLft.x += 5;

				//drawing a rectangle that has the same color as the background
				prePtoGame->getWind()->SetPen(LAVENDER, 1);
				prePtoGame->getWind()->SetBrush(LAVENDER);
				prePtoGame->getWind()->DrawRectangle(prePos.x, prePos.y, config.windWidth, prePos.y + p->getHeigth());

				p->draw();
				break;
			}

		}
	} while (kType != ESCAPE);
}