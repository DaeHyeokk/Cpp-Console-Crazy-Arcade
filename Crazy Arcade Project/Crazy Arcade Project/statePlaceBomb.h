#ifndef __STATE_PLACE_BOMB
#define __STATE_PLACE_BOMB

#include <vector>

class Enemy;
class Board;
class Character;

class StatePlaceBomb
{
	Enemy& enemy;
	Board& board;
	Character* player;

public:
	StatePlaceBomb(Enemy& fromEnemy, Board& _board, Character* _player);
	void update();
	bool isSafePlaceBomb() const;
	bool isMoveToSafeSpot(std::vector<std::vector<double>>& dangerMap) const;
};

#endif // !__STATE_PLACE_BOMB

