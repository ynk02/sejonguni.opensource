#pragma once


#define BOARDLEN 8
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
}oldPoz, KingWhitePoz, KingBlackPoz, transformW, transformB;

int board[8][8] =
{ 2, 3, 4, 5, 6, 4, 3, 2,
  1, 1, 1, 1, 1, 1, 1, 1,
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
 -1,-1,-1,-1,-1,-1,-1,-1,
 -2,-3,-4,-5,-6,-4,-3,-2, };

int  size = 100, move = 0, x, y;

int RookW_Right = 0, RookW_Left = 0, King_W = 0;
int RookB_Right = 0, RookB_Left = 0, King_B = 0;

int Who_turn = 0;

int KingW_Check = 0, KingB_Check = 0;

int PromotionWhite = 0, PromotionBlack = 0;


