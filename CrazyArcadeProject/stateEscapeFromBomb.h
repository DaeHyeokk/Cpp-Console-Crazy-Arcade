#ifndef __STATE_ESCAPE_FROM_BOMB_H_
#define __STATE_ESCAPE_FROM_BOMB_H_

class Enemy;
class Board;
class Character;

class StateEscapeFromBomb
{
	Enemy& enemy;
	Board& board;
	Character* player;

public:
	StateEscapeFromBomb(Enemy& fromEnemy, Board& _board, Character* _player);
	void update() const;
	void moveToSafeSpot() const;
};
#endif // !__STATE_ESCAPE_FROM_BOMB_H_
