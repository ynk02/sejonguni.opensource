#pragma once
#include "basic.h"

//화이트 폰의 기본적인 움직임 구현
int PawnWhite(int dx, int dy, int dx2, int dy2)
{

	if (oldPoz.y == 6)
	{
		if ((dy2 == dy - 1 && dx2 == dx && board[dy - 1][dx] == 0) || (dy2 == dy - 2 && dx2 == dx && board[dy - 1][dx] == 0 && board[dy - 2][dx] == 0))
		{
			return 1;
		}
	}
	else if (dy2 == dy - 1 && dx2 == dx && board[dy - 1][dx] == 0)
	{
		return 1;
	}
	if (board[dy - 1][dx - 1] > 0)
	{
		if (dy2 == dy - 1 && dx2 == dx - 1)
		{
			return 1;
		}
	}
	if (board[dy - 1][dx + 1] > 0)
	{
		if (dy2 == dy - 1 && dx2 == dx + 1)
		{
			return 1;
		}
	}
	return 0;
}
//블랙 폰의 기본적인 움직임 구현
int PawnBlack(int dx, int dy, int dx2, int dy2)
{
	if (oldPoz.y == 1)
	{
		if ((dy2 == dy + 1 && dx2 == dx && board[dy + 1][dx] == 0) || (dy2 == dy + 2 && dx2 == dx && board[dy + 1][dx] == 0 && board[dy + 2][dx] == 0))
		{
			return 1;
		}
	}
	else if (dy2 == dy + 1 && dx2 == dx && board[dy + 1][dx] == 0)
	{
		return 1;
	}
	if (board[dy + 1][dx - 1] < 0)
	{
		if (dy2 == dy + 1 && dx2 == dx - 1)
		{
			return 1;
		}
	}
	if (board[dy + 1][dx + 1] < 0)
	{
		if (dy2 == dy + 1 && dx2 == dx + 1)
		{
			return 1;
		}
	}
	return 0;
}

//화이트 폰이 다른 기물을 잡을 때
int PawnWhiteCatch(int px, int py, int dx, int dy)
{
	//std::cout << "ox=" << posx << " oy=" << posy << " cx=" << cx << " cy=" << cy << "\n\n\n";
	if (board[py - 1][px - 1] >= 0)
	{
		if (py - 1 == dy && px - 1 == dx)
		{
			return 1;
		}
	}
	if (board[py - 1][px + 1] >= 0)
	{
		//std::cout << "da";
		if (py - 1 == dy && px + 1 == dx)
		{
			return 1;
		}
	}
	return 0;
}

//블랙 폰이 다른 기물을 잡을 때
int PawnBlackCatch(int px, int py, int dx, int dy)
{

	if (board[py + 1][px - 1] <= 0)
	{
		if (dy == py + 1 && dx == px - 1)
		{
			return 1;
		}
	}
	if (board[py + 1][px + 1] <= 0)
	{
		if (dy == py + 1 && dx == px + 1)
		{
			return 1;
		}
	}
	return 0;
}


