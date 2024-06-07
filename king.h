#pragma once

#include "basic.h"
#include "Queen.h"
#include "Knight.h"
#include "Rook.h"
#include "Bishop.h"
#include "pawn.h"

int KingWhiteCatch(int beforeX, int beforeY, int afterX, int afterY)
{
	if (beforeX - 1 >= 0 && beforeY - 1 >= 0 && afterY == beforeY - 1 && afterX == beforeX - 1 && board[afterY][afterX] <= 0)
	{
		return 1;
	}
	if (beforeY - 1 >= 0 && afterX == beforeX && afterY == beforeY - 1 && board[afterY][afterX] <= 0)
	{
		return 1;
	}
	if (beforeY - 1 >= 0 && beforeX + 1 < BOARDLEN && afterX == beforeX + 1 && afterY == beforeY - 1 && board[afterY][afterX] <= 0)
	{
		return 1;
	}
	if (beforeX + 1 < BOARDLEN && afterY == beforeY && afterX == beforeX + 1 && board[afterY][afterX] <= 0)
	{
		return 1;
	}
	if (beforeX + 1 < BOARDLEN && beforeY + 1 < BOARDLEN && afterY == beforeY + 1 && afterX == beforeX + 1 && board[afterY][afterX] <= 0)
	{
		return 1;
	}
	if (beforeY + 1 < BOARDLEN && afterY == beforeY + 1 && afterX == beforeX && board[afterY][afterX] <= 0)
	{
		return 1;
	}
	if (beforeX - 1 >= 0 && beforeY + 1 < BOARDLEN && afterX == beforeX - 1 && afterY == beforeY + 1 && board[afterY][afterX] <= 0)
	{
		return 1;
	}
	if (beforeX - 1 >= 0 && afterY == beforeY && afterX == beforeX - 1 && board[afterY][afterX] <= 0)
	{
		return 1;
	}
	return 0;
}