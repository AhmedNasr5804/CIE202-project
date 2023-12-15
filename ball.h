#pragma once
#include  "collidable.h" ;

class ball : public collidable 
{

private :

	int width;
	int height;
	point pos;
	game* PtoGame;

public :

	ball(point r_uprleft, int r_width, int r_height, game* r_pGame);
	
	// ball constructor

	void collisionAction() ;
	void move(ball b);

	int getWidth();
	int getHeight();
	point getPoint();
	game* getGame();

};

