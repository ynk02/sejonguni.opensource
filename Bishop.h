#pragma once

#include "basic.h"



int BishopWhite(int beforeX, int beforeY, int afterX, int afterY)
{
	int j = beforeX - 1;
	for (int i = beforeY - 1; i >= 0; i--)
	{
		if (board[i][j] >= 0 && (afterY == i && afterX == j))
		{
			return 1;
		}
		else if (board[i][j] != 0)
		{
			break;
		}
		j--;
	}
	j = beforeX + 1;
	for (int i = beforeY - 1; i >= 0; i--)
	{
		if (board[i][j] >= 0 && (afterY == i && afterX == j))
		{
			return 1;
		}
		else if (board[i][j] != 0)
		{
			break;
		}
		j++;
	}
	j = beforeX - 1;
	for (int i = beforeY + 1; i <= 7; i++)
	{
		if (board[i][j] >= 0 && (afterY == i && afterX == j))
		{
			return 1;
		}
		else if (board[i][j] != 0)
		{
			break;
		}
		j--;
	}
	j = beforeX + 1;
	for (int i = beforeY + 1; i <= 7; i++)
	{
		if (board[i][j] >= 0 && (afterY == i && afterX == j))
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

int BishopBlack(int beforeX, int beforeY, int afterX, int afterY)
{
	int j = beforeX - 1;
	for (int i = beforeY - 1; i >= 0; i--)
	{
		if (board[i][j] <= 0 && (afterY == i && afterX == j))
		{
			return 1;
		}
		else if (board[i][j] != 0)
		{
			break;
		}
		j--;
	}
	j = beforeX + 1;
	for (int i = beforeY - 1; i >= 0; i--)
	{
		if (board[i][j] <= 0 && (afterY == i && afterX == j))
		{
			return 1;
		}
		else if (board[i][j] != 0)
		{
			break;
		}
		j++;
	}
	j = beforeX - 1;
	for (int i = beforeY + 1; i <= 7; i++)
	{
		if (board[i][j] <= 0 && (afterY == i && afterX == j))
		{
			return 1;
		}
		else if (board[i][j] != 0)
		{
			break;
		}
		j--;
	}
	j = beforeX + 1;
	for (int i = beforeY + 1; i <= 7; i++)
	{
		if (board[i][j] <= 0 && (afterY == i && afterX == j))
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

int BishopWhiteCatch(int beforeX, int beforeY, int afterX, int afterY)
{
	int j = beforeX - 1;
	for (int i = beforeY - 1; i >= 0; i--)
	{
		if (board[i][j] >= 0 && (afterY == i && afterX == j))
		{
			return 1;
		}
		else if (board[i][j] != 0)
		{
			break;
		}
		j--;
	}
	j = beforeX + 1;
	for (int i = beforeY - 1; i >= 0; i--)
	{
		if (board[i][j] >= 0 && (afterY == i && afterX == j))
		{
			return 1;
		}
		else if (board[i][j] != 0)
		{
			break;
		}
		j++;
	}
	j = beforeX - 1;
	for (int i = beforeY + 1; i <= 7; i++)
	{
		if (board[i][j] >= 0 && (afterY == i && afterX == j))
		{
			return 1;
		}
		else if (board[i][j] != 0)
		{
			break;
		}
		j--;
	}
	j = beforeX + 1;
	for (int i = beforeY + 1; i <= 7; i++)
	{
		if (board[i][j] >= 0 && (afterY == i && afterX == j))
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

int BishopBlackCatch(int beforeX, int beforeY, int afterX, int afterY)
{
	int j = beforeX - 1;
	for (int i = beforeY - 1; i >= 0; i--)
	{
		if (board[i][j] <= 0 && (afterY == i && afterX == j))
		{
			return 1;
		}
		else if (board[i][j] != 0)
		{
			break;
		}
		j--;
	}
	j = beforeX + 1;
	for (int i = beforeY - 1; i >= 0; i--)
	{
		if (board[i][j] <= 0 && (afterY == i && afterX == j))
		{
			return 1;
		}
		else if (board[i][j] != 0)
		{
			break;
		}
		j++;
	}
	j = beforeX - 1;
	for (int i = beforeY + 1; i <= 7; i++)
	{
		if (board[i][j] <= 0 && (afterY == i && afterX == j))
		{
			return 1;
		}
		else if (board[i][j] != 0)
		{
			break;
		}
		j--;
	}
	j = beforeX + 1;
	for (int i = beforeY + 1; i <= 7; i++)
	{
		if (board[i][j] <= 0 && (afterY == i && afterX == j))
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
