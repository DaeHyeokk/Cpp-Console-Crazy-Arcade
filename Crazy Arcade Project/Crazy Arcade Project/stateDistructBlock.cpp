#include "stateDistructBlock.h"
#include "block.h"
#include "enemy.h"
#include "character.h"
#include "board.h"
using namespace std;

StateDistructBlock::StateDistructBlock(Enemy& fromEnemy, Board& _board, Character* _player)
	: enemy(fromEnemy), board(_board), player(_player)
{
}

void StateDistructBlock::update() const
{
	if (canPlaceBomb())
		enemy.changeState(EnemyState::PLACE_BOMB);
	else
		enemy.changeState(EnemyState::IDLE);

}

bool StateDistructBlock::canPlaceBomb() const
{
	return enemy.isCanPlaceBomb();
}

