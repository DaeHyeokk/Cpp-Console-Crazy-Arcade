#ifndef __STATE_DISTRUCT_BLOCK_H_
#define __STATE_DISTRUCT_BLOCK_H_

class Enemy;
class Board;
class Character;

class StateDistructBlock
{
	Enemy& enemy;
	Board& board;
	Character* player;

public:
	StateDistructBlock(Enemy& fromEnemy, Board& _board, Character* _player);
	void update() const;
	bool canPlaceBomb() const;
};

#endif // !__STATE_DISTRUCT_BLOCK_H_
