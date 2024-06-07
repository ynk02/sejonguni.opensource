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

int KingBlackCatch(int beforeX, int beforeY, int afterX, int afterY)
{
	if (beforeX - 1 >= 0 && beforeY - 1 >= 0 && afterY == beforeY - 1 && afterX == beforeX - 1 && board[afterY][afterX] >= 0)
	{
		return 1;
	}
	if (beforeY - 1 >= 0 && afterX == beforeX && afterY == beforeY - 1 && board[afterY][afterX] >= 0)
	{
		return 1;
	}
	if (beforeY - 1 >= 0 && beforeX + 1 < BOARDLEN && afterX == beforeX + 1 && afterY == beforeY - 1 && board[afterY][afterX] >= 0)
	{
		return 1;
	}
	if (beforeX + 1 < BOARDLEN && afterY == beforeY && afterX == beforeX + 1 && board[afterY][afterX] >= 0)
	{
		return 1;
	}
	if (beforeX + 1 < BOARDLEN && beforeY + 1 < BOARDLEN && afterY == beforeY + 1 && afterX == beforeX + 1 && board[afterY][afterX] >= 0)
	{
		return 1;
	}
	if (beforeY + 1 < BOARDLEN && afterY == beforeY + 1 && afterX == beforeX && board[afterY][afterX] >= 0)
	{
		return 1;
	}
	if (beforeX - 1 >= 0 && beforeY + 1 < BOARDLEN && afterX == beforeX - 1 && afterY == beforeY + 1 && board[afterY][afterX] >= 0)
	{
		return 1;
	}
	if (beforeX - 1 >= 0 && afterY == beforeY && afterX == beforeX - 1 && board[afterY][afterX] >= 0)
	{
		return 1;
	}
	return 0;
}

//화이트킹 체크 확인
int KingWhiteCheck(int dx, int dy)
{
	int ok = 0;
	for (int i = 0; i < BOARDLEN; i++)
	{
		for (int j = 0; j < BOARDLEN; j++)
		{
			if (board[i][j] > 0)
			{
				if (board[i][j] == PawnB)
				{
					ok = PawnBlackCatch(j, i, dx, dy);
				}
				if (board[i][j] == RookB)
				{
					ok = RookBlackCatch(j, i, dx, dy);
				}
				if (board[i][j] == KnightB)
				{
					ok = KnightBlackCatch(j, i, dx, dy);
				}
				if (board[i][j] == BishopB)
				{
					ok = BishopBlackCatch(j, i, dx, dy);
				}
				if (board[i][j] == QueenB)
				{
					ok = QueenBlackCatch(j, i, dx, dy);
				}
				if (board[i][j] == KingB)
				{
					ok = KingBlackCatch(j, i, dx, dy);
				}
				if (ok == 1)
				{
					//	std::cout << "da" << "\n";
					return 0;
				}
			}
		}
	}
	return 1;
}


//블랙킹 체크 확인
int KingBlackCheck(int dx, int dy)
{
	int ok = 0;
	for (int i = 0; i < BOARDLEN; i++)
	{
		for (int j = 0; j < BOARDLEN; j++)
		{
			if (board[i][j] < 0)
			{
				if (board[i][j] == PawnW)
				{
					ok = PawnWhiteCatch(j, i, dx, dy);
				}
				if (board[i][j] == RookW)
				{
					ok = RookWhiteCatch(j, i, dx, dy);
				}
				if (board[i][j] == KnightW)
				{
					ok = KnightWhiteCatch(j, i, dx, dy);
				}
				if (board[i][j] == BishopW)
				{
					ok = BishopWhiteCatch(j, i, dx, dy);
				}
				if (board[i][j] == QueenW)
				{
					ok = QueenWhiteCatch(j, i, dx, dy);
				}
				if (board[i][j] == KingW)
				{
					ok = KingWhiteCatch(j, i, dx, dy);
				}
				if (ok == 1)
				{
					return 0;
				}
			}
		}
	}
	return 1;
}
