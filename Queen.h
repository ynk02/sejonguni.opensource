#pragma once
#include"basic.h"

//정상움직임 return 1 
//불가능 return 0


int QueenWhite(int x, int y, int dx, int dy)
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
	for (int i = x + 1; i <= 7; i++)
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
	int j = x - 1;
	for (int i = y - 1; i >= 0; i--)
	{
		if (board[i][j] >= 0 && (dy == i && dx == j))
		{
			return 1;
		}
		else if (board[i][j] != 0)
		{
			break;
		}
		j--;
	}
	j = x + 1;
	for (int i = y - 1; i >= 0; i--)
	{
		if (board[i][j] >= 0 && (dy == i && dx == j))
		{
			return 1;
		}
		else if (board[i][j] != 0)
		{
			break;
		}
		j++;
	}
	j = x - 1;
	for (int i = y + 1; i <= 7; i++)
	{
		if (board[i][j] >= 0 && (dy == i && dx == j))
		{
			return 1;
		}
		else if (board[i][j] != 0)
		{
			break;
		}
		j--;
	}
	j = x + 1;
	for (int i = y + 1; i <= 7; i++)
	{
		if (board[i][j] >= 0 && (dy == i && dx == j))
		{
			return 1;
		}
		else if (board[i][j] != 0)
		{
			break;
		}
		j++;
	}
	return 0;
}

int QueenBlack(int x, int y, int dx, int dy)
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
	int j = x - 1;
	for (int i = y - 1; i >= 0; i--)
	{
		if (board[i][j] <= 0 && (dy == i && dx == j))
		{
			return 1;
		}
		else if (board[i][j] != 0)
		{
			break;
		}
		j--;
	}
	j = x + 1;
	for (int i = y - 1; i >= 0; i--)
	{
		if (board[i][j] <= 0 && (dy == i && dx == j))
		{
			return 1;
		}
		else if (board[i][j] != 0)
		{
			break;
		}
		j++;
	}
	j = x - 1;
	for (int i = y + 1; i <= 7; i++)
	{
		if (board[i][j] <= 0 && (dy == i && dx == j))
		{
			return 1;
		}
		else if (board[i][j] != 0)
		{
			break;
		}
		j--;
	}
	j = x + 1;
	for (int i = y + 1; i <= 7; i++)
	{
		if (board[i][j] <= 0 && (dy == i && dx == j))
		{
			return 1;
		}
		else if (board[i][j] != 0)
		{
			break;
		}
		j++;
	}
	return 0;
}
