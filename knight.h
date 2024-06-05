#include "basic.h"

int KnightWhite(int oldx, int oldy, int newx, int newy)
{
	if (oldy - 2 >= 0 && oldx - 1 >= 0 && newy == oldy - 2 && newx == oldx - 1 && board[newy][newx] >= 0)
	{
		return 1; 
	}
	if (oldy - 2 >= 0 && oldx + 1 <BOARDLEN && newy == oldy - 2 && newx == oldx + 1 && board[newy][newx] >= 0)
	{
		return 1; 
	}
	if (oldy - 1 >= 0 && oldx + 2 < BOARDLEN && newy==oldy-1 && newx==oldx+2 && board[newy][newx]>=0)
	{
		return 1; 
	}
	if (oldy + 1 >= 0 && oldx + 2 < BOARDLEN && newy == oldy + 1 && newx == oldx + 2 && board[newy][newx] >= 0)
	{
		return 1; 
	}
	if (oldy+2<BOARDLEN && oldx+1<BOARDLEN && newy==oldy+2 && newx==oldx+1 && board[newy][newx]>=0)
	{
		return 1; 
	}
	if (oldy + 2 < BOARDLEN && oldx - 1 >= 0 && newy == oldy + 2 && newx == oldx - 1 && board[newy][newx] >= 0)
	{
		return 1; 
	}
	if (oldy+1<BOARDLEN && oldx-2>=0 && newy==oldy+1 && newx==oldx-2 && board[newy][newx]>=0 )
	{
		return 1; 
	}
	if (oldy - 1 >= 0 && oldx - 2 >= 0 && newy == oldy - 1 && newx == oldx - 2 && board[newy][newx] >= 0)
	{
		return 1;
	}
	return 0;
}

int KnightBlack(int oldx, int oldy, int newx, int newy)
{
	if (oldy - 2 >= 0 && oldx - 1 >= 0 && newy == oldy - 2 && newx == oldx - 1 && board[newy][newx] <= 0)
	{
		return 1; 
	}
	if (oldy - 2 >= 0 && oldx + 1 < BOARDLEN && newy == oldy - 2 && newx == oldx + 1 && board[newy][newx] <= 0)
	{
		return 1; 
	}
	if (oldy - 1 >= 0 && oldx + 2 < BOARDLEN && newy == oldy - 1 && newx == oldx + 2 && board[newy][newx] <= 0)
	{
		return 1; 
	}
	if (oldy + 1 >= 0 && oldx + 2 < BOARDLEN && newy == oldy + 1 && newx == oldx + 2 && board[newy][newx] <= 0)
	{
		return 1; 
	}
	if (oldy + 2 < BOARDLEN && oldx + 1 < BOARDLEN && newy == oldy + 2 && newx == oldx + 1 && board[newy][newx] <= 0)
	{
		return 1; 
	}
	if (oldy + 2 < BOARDLEN && oldx - 1 >= 0 && newy == oldy + 2 && newx == oldx - 1 && board[newy][newx] <= 0)
	{
		return 1; 
	}
	if (oldy + 1 < BOARDLEN && oldx - 2 >= 0 && newy == oldy + 1 && newx == oldx - 2 && board[newy][newx] <= 0)
	{
		return 1; 
	}
	if (oldy - 1 >= 0 && oldx - 2 >= 0 && newy == oldy - 1 && newx == oldx - 2 && board[newy][newx] <= 0)
	{
		return 1;
	}
	return 0;
}

int KnightWhiteCatch(int oldx, int oldy, int catchx, int catchy)
{
	if (oldy - 2 >= 0 && oldx - 1 >= 0 && catchy == oldy - 2 && catchx == oldx - 1 && board[catchy][catchx] >= 0)
	{
		return 1; 
	}
	if (oldy - 2 >= 0 && oldx + 1 < BOARDLEN && catchy == oldy - 2 && catchx == oldx + 1 && board[catchy][catchx] >= 0)
	{
		return 1; 
	}
	if (oldy - 1 >= 0 && oldx + 2 < BOARDLEN && catchy == oldy - 1 && catchx == oldx + 2 && board[catchy][catchx] >= 0)
	{
		return 1; 
	}
	if (oldy + 1 >= 0 && oldx + 2 < BOARDLEN && catchy == oldy + 1 && catchx == oldx + 2 && board[catchy][catchx] >= 0)
	{
		return 1; 
	}
	if (oldy + 2 < BOARDLEN && oldx + 1 < BOARDLEN && catchy == oldy + 2 && catchx == oldx + 1 && board[catchy][catchx] >= 0)
	{
		return 1; 
	}
	if (oldy + 2 < BOARDLEN && oldx - 1 >= 0 && catchy == oldy + 2 && catchx == oldx - 1 && board[catchy][catchx] >= 0)
	{
		return 1; 
	}
	if (oldy + 1 < BOARDLEN && oldx - 2 >= 0 && catchy == oldy + 1 && catchx == oldx - 2 && board[catchy][catchx] >= 0)
	{
		return 1; 
	}
	if (oldy - 1 >= 0 && oldx - 2 >= 0 && catchy == oldy - 1 && catchx == oldx - 2 && board[catchy][catchx] >= 0)
	{
		return 1;
	}
	return 0;
}

int KnightBlackCatch(int oldx, int oldy, int catchx, int catchy)
{
	if (oldy - 2 >= 0 && oldx - 1 >= 0 && catchy == oldy - 2 && catchx == oldx - 1 && board[catchy][catchx] <= 0)
	{
		return 1;
	}
	if (oldy - 2 >= 0 && oldx + 1 < BOARDLEN && catchy == oldy - 2 && catchx == oldx + 1 && board[catchy][catchx] <= 0)
	{
		return 1; 
	}
	if (oldy - 1 >= 0 && oldx + 2 < BOARDLEN && catchy == oldy - 1 && catchx == oldx + 2 && board[catchy][catchx] <= 0)
	{
		return 1; 
	}
	if (oldy + 1 >= 0 && oldx + 2 < BOARDLEN && catchy == oldy + 1 && catchx == oldx + 2 && board[catchy][catchx] <= 0)
	{
		return 1; 
	}
	if (oldy + 2 < BOARDLEN && oldx + 1 < BOARDLEN && catchy == oldy + 2 && catchx == oldx + 1 && board[catchy][catchx] <= 0)
	{
		return 1; 
	}
	if (oldy + 2 < BOARDLEN && oldx - 1 >= 0 && catchy == oldy + 2 && catchx == oldx - 1 && board[catchy][catchx] <= 0)
	{
		return 1; 
	}
	if (oldy + 1 < BOARDLEN && oldx - 2 >= 0 && catchy == oldy + 1 && catchx == oldx - 2 && board[catchy][catchx] <= 0)
	{
		return 1; 
	}
	if (oldy - 1 >= 0 && oldx - 2 >= 0 && catchy == oldy - 1 && catchx == oldx - 2 && board[catchy][catchx] <= 0)
	{
		return 1;
	}
	return 0;
}
