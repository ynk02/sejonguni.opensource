#pragma once


#define LUNGIME 8
#define PawnB 1
#define PawnW -1
#define RookB 2
#define RookW -2
#define KnightW -3
#define KnightB 3
#define BishopB 4
#define BishopW -4
#define QueenW -5
#define QueenB 5
#define KingB 6
#define KingW -6

struct poz
{
	int x, y;
}oldPoz;

int board[8][8] =
{ 2, 3, 4, 5, 6, 4, 3, 2,
  1, 1, 1, 1, 1, 1, 1, 1,
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
 -1,-1,-1,-1,-1,-1,-1,-1,
 -2,-3,-4,-5,-6,-4,-3,-2, };


