#ifndef __POSITION_H_
#define __POSITION_H_

struct Position
{
	int y;
	int x;

    bool operator == (const Position& rPos) const
    {
        return this->y == rPos.y && this->x == rPos.x;
    }

    Position operator+(const Position& rPos) const
    {
        Position temp;
        temp.y = y + rPos.y;
        temp.x = x + rPos.x;
        return temp;
    }

    Position operator-(const Position& rPos) const
    {
        Position temp;
        temp.y = y - rPos.y;
        temp.x = x - rPos.x;
        return temp;
    }
};

#endif