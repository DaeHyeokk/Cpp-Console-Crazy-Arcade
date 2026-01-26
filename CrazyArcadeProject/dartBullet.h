#ifndef __DARTBULLET_H_
#define __DARTBULLET_H_

#include "gameObject.h"
#include "direction.h"

class Board;

class DartBullet : public GameObject
{
	Direction moveDirection;

public:
	DartBullet(Position _position, Board& _board, Direction _moveDirection);
	void move();
	virtual void update() override;
	virtual void explosionDamageAction() override;
	virtual void draw() override;
};

#endif