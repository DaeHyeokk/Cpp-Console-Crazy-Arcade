#include "item.h"
#include "character.h"

Item::Item(Position _position, Board& _board)
	: GameObject(_position, ObjectType::ITEM, _board)
{
}

void Item::explosionDamageAction()
{
	setActive(false);
}

void Item::pickupAction()
{
	setActive(false);
}
