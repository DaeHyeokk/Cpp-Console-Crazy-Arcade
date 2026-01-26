#include "instantItem.h"
#include "character.h"

InstantItem::InstantItem(Position _position, Board& _board)
	: Item(_position, _board)
{
}

ItemCategory InstantItem::getItemCategory()
{
	return ItemCategory::INSTANT;
}