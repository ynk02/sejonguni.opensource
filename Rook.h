#pragma once
#include"basic.h"

//정상움직임 return 1 
//불가능 return 0


int RookBlack(int x, int y, int dx, int dy)
{
	for (int i = x - 1; i >= 0; i--)
	{
		if (board[y][i] <= 0 && (dx == i && dy == y))
		{
			return 1;
		}
		else if (board[y][i] != 0)
		{
			break;
		}
	}
	for (int i = x + 1; i <= 7; i++)
	{
		if (board[y][i] <= 0 && (dy == y && dx == i))
		{
			return 1;
		}
		else if (board[y][i] != 0)
		{
			break;
		}
	}
	for (int i = y - 1; i >= 0; i--)
	{
		if (board[i][x] <= 0 && (dy == i && dx == x))
		{
			return 1;
		}
		else if (board[i][x] != 0)
		{
			break;
		}
	}
	for (int i = y + 1; i <= 7; i++)
	{
		if (board[i][x] <= 0 && (dy == i && dx == x))
		{
			return 1;
		}
		else if (board[i][x] != 0)
		{
			break;
		}
	}
	return 0;
}


int RookWhite(int x, int y, int dx, int dy)
{
	for (int i = x - 1; i >= 0; i--) //왼족 체크
	{
		if (board[y][i] >= 0 && (dx == i && dy == y))
		{
			return 1;
		}

		else if (board[y][i] != 0)
		{
			break;
		}
	}
	for (int i = x + 1; i <= 7; i++) //오른쪽 체크
	{
		if (board[y][i] >= 0 && (dy == y && dx == i))
		{
			return 1;
		}
		else if (board[y][i] != 0)
		{
			break;
		}
	}
	for (int i = y - 1; i >= 0; i--)
	{
		if (board[i][x] >= 0 && (dy == i && dx == x))
		{
			return 1;
		}
		else if (board[i][x] != 0)
		{
			break;
		}
	}

	for (int i = y + 1; i <= 7; i++)
	{
		if (board[i][x] >= 0 && (dy == i && dx == x))
		{
			return 1;
		}
		else if (board[i][x] != 0)
		{
			break;
		}
	}
	return 0;


}


int RookWhiteCatch(int x, int y, int dx, int dy) //rook이 잡았을때 정상:return 1
{
	for (int i = x - 1; i >= 0; i--)
	{
		if (board[y][i] >= 0 && (dx == i && dy == y))
		{
			return 1;
		}
		else if (board[y][i] != 0)
		{
			break;
		}
	}
	for (int i = y - 1; i >= 0; i--)
	{
		if (board[i][x] >= 0 && (dy == i && dx == x))
		{
			return 1;
		}
		else if (board[i][x] != 0)
		{
			break;
		}
	}
	for (int i = x + 1; i < BOARDLEN; i++)
	{
		if (board[y][i] >= 0 && (dy == y && dx == i))
		{
			return 1;
		}
		else if (board[y][i] != 0)
		{
			break;
		}
	}
	for (int i = y + 1; i < BOARDLEN; i++)
	{
		if (board[i][x] >= 0 && (dy == i && dx == x))
		{
			return 1;
		}
		else if (board[i][x] != 0)
		{
			break;
		}
	}
	return 0;
}


int RookBlackCatch(int x, int y, int dx, int dy)
{
	for (int i = x - 1; i >= 0; i--)
	{
		if (board[y][i] <= 0 && (dx == i && dy == y))
		{
			return 1;
		}
		else if (board[y][i] != 0)
		{
			break;
		}
	}
	for (int i = y - 1; i >= 0; i--)
	{
		if (board[i][x] <= 0 && (dy == i && dx == x))
		{
			return 1;
		}
		else if (board[i][x] != 0)
		{
			break;
		}
	}
	for (int i = x + 1; i < BOARDLEN; i++)
	{
		if (board[y][i] <= 0 && (dy == y && dx == i))
		{
			return 1;
		}
		else if (board[y][i] != 0)
		{
			break;
		}
	}
	for (int i = y + 1; i < BOARDLEN; i++)
	{
		if (board[i][x] <= 0 && (dy == i && dx == x))
		{
			return 1;
		}
		else if (board[i][x] != 0)
		{
			break;
		}
	}
	return 0;
}