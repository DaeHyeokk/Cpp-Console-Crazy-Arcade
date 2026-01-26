#ifndef __STATE_GET_ITEM_H_
#define __STATE_GET_ITEM_H_

#define GET_ITEM_DISTANCE 4

class Enemy;
class Board;
class Character;

class StateGetItem
{
	Enemy& enemy;
	Board& board;
	Character* player;

public:
	StateGetItem(Enemy& fromEnemy, Board& _board, Character* _player);
	void update();
	bool isNearItem() const;
	void moveToNearItem() const;
};

#endif // !__STATE_GET_ITEM_H_
