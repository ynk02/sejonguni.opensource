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

