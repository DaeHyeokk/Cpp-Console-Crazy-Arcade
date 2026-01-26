#ifndef __STATE_IDLE_H_
#define __STATE_IDLE_H_

class Enemy;
class Board;
class Character;

class StateIdle
{
	Enemy& enemy;
	Board& board;
	Character* player;

public:
	StateIdle(Enemy& fromEnemy, Board& _board, Character* _player);
	void update();
	void roamRandomly() const;
	bool isNearPlayer() const;
	bool isNearItem() const;
	bool isNearDistructibleBlock() const;
};

#endif // !__STATE_IDLE_H_
