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



int KingBlackMove(int oldx, int oldy, int newx, int newy)
{
	if (oldx - 1 >= 0 && oldy - 1 >= 0 && newy == oldy - 1 && newx == oldx - 1 && board[newy][newx] <= 0)
	{
		int ok = KingBlackCheck(oldx - 1, oldy - 1);
		if (ok == 1)
		{
			return 1;  
		}
	}
	if (oldy - 1 >= 0 && newx == oldx && newy == oldy-1 && board[newy][newx] <= 0)
	{
		int ok = KingBlackCheck(oldx, oldy-1);
		if (ok == 1)
		{
			return 1; 
		}
	}
	if (oldy - 1 >= 0 && oldx + 1 < BOARDLEN && newx == oldx + 1 && newy == oldy - 1 && board[newy][newx] <= 0)
	{
		int ok = KingBlackCheck(oldx+ 1, oldy- 1);
		if (ok == 1)
		{
			return 1; 
		}
	}
	if (oldx + 1 < BOARDLEN && newy == oldy && newx == oldx+1 && board[newy][newx] <= 0)
	{
		int ok = KingBlackCheck(oldx+1, oldy);
		if (ok == 1)
		{
			return 1; 
		}
	}
	if (oldx + 1 < BOARDLEN && oldy + 1 < BOARDLEN && newy == oldy + 1 && newx == oldx + 1 && board[newy][newx] <= 0)
	{
		int ok = KingBlackCheck(oldx + 1, oldy + 1);
		if (ok == 1)
		{
			return 1; 
		}
	}
	if (oldy + 1 < BOARDLEN && newy == oldy+1 && newx == oldx && board[newy][newx] <= 0)
	{
		int ok = KingBlackCheck(oldx, oldy+1);
		if (ok == 1)
		{
			return 1;
		}
	}
	if (oldx - 1 >=0 && oldy + 1 <BOARDLEN && newx == oldx - 1 && newy == oldy + 1 && board[newy][newx] <= 0)
	{
		int ok = KingBlackCheck(oldx-1, oldy+ 1);
		if (ok == 1)
		{
			return 1; 
		}
	}
	if (oldx - 1 >= 0 && newy == oldy && newx == oldx-1 && board[newy][newx] <= 0)
	{
		int ok = KingBlackCheck(oldx-1, oldy);
		if (ok == 1)
		{
			return 1; 
		}
	}

	if (RookB_Right==0 && King_B==0 && board[0][5]==0 && board[0][6]==0 && newx==0 && newy==6)
	{
		int ok = KingBlackCheck(4, 0);
		if (ok == 1)
		{
			ok = KingBlackCheck(5, 0);
			if (ok == 1)
			{
				ok = KingBlackCheck(6, 0);
				if (ok == 1)
				{
					King_B = 1;
					RookB_Right = 1;
					board[0][7] = 0;
					board[0][5] = RookB;
					return 1;
				}
			}
		}
	}
	if (RookB_Left == 0 && King_B == 0 && board[0][3] == 0 && board[0][2] == 0 && board[0][1] == 0 && newx == 0 && newy == 2)
	{
		int ok = KingBlackCheck(4, 0);
		if (ok == 1)
		{
			ok = KingBlackCheck(3, 0);
			if (ok == 1)
			{
				ok = KingBlackCheck(2, 0);
				if (ok == 1)
				{
					ok = KingBlackCheck(1, 0);
					if (ok == 1)
					{
						King_B = 1;
						RookB_Left = 1;
						board[0][0] = 0;
						board[0][3] = RookB;
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int KingWhiteMove(int oldx, int oldy, int newx, int newy)
{
	if (oldx - 1 >= 0 && oldy - 1 >= 0 && newy == oldy - 1 && newx == oldx - 1 && board[newy][newx] >= 0)
	{
		int ok = KingWhiteCheck(oldx - 1, oldy - 1);
		if (ok == 1)
		{
			return 1;  
		}
	}
	if (oldy - 1 >= 0 && newx == oldx && newy == oldy - 1 && board[newy][newx] >= 0)
	{
		int ok = KingWhiteCheck(oldx, oldy - 1);
		if (ok == 1)
		{
			return 1; 
		}
	}
	if (oldy - 1 >= 0 && oldx + 1 < BOARDLEN && newx == oldx + 1 && newy == oldy - 1 && board[newy][newx] >= 0)
	{
		int ok = KingWhiteCheck(oldx + 1, oldy - 1);
		if (ok == 1)
		{
			return 1; 
		}
	}
	if (oldx + 1 < BOARDLEN && newy == oldy && newx == oldx + 1 && board[newy][newx] >= 0)
	{
		int ok = KingWhiteCheck(oldx + 1, oldy);
		if (ok == 1)
		{
			return 1; 
		}
	}
	if (oldx + 1 < BOARDLEN && oldy + 1 < BOARDLEN && newy == oldy + 1 && newx == oldx + 1 && board[newy][newx] >= 0)
	{
		int ok = KingWhiteCheck(oldx + 1, oldy + 1);
		if (ok == 1)
		{
			return 1; 
		}
	}
	if (oldy + 1 < BOARDLEN && newy == oldy + 1 && newx == oldx && board[newy][newx] >= 0)
	{
		int ok = KingWhiteCheck(oldx, oldy + 1);
		if (ok == 1)
		{
			return 1; 
		}
	}
	if (oldx - 1 >= 0 && oldy + 1 < BOARDLEN && newx == oldx - 1 && newy == oldy + 1 && board[newy][newx] >= 0)
	{
		int ok = KingWhiteCheck(oldx - 1, oldy + 1);
		if (ok == 1)
		{
			return 1; 
		}
	}
	if (oldx - 1 >= 0 && newy == oldy && newx == oldx - 1 && board[newy][newx] >= 0)
	{
		int ok = KingWhiteCheck(oldx - 1, oldy);
		if (ok == 1)
		{
			return 1; 
		}
	}
}




