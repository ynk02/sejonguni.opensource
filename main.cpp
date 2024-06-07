#include <SFML/Graphics.hpp>
#include <iostream>

#include "king.h"
using namespace sf;
int main()
{
    RenderWindow window(VideoMode(800, 800), "Open Source assignment Chess game"); /* 800*800 ũ���� SFMLâ�� ����, ������ " "*/
    Texture t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15; /* �ؽ��� ��ü���� ����. �ؽ�ó�� �׷��� �̹����� �޸𸮿� ���� */

    // �� �ؽ�ó ��ü�� �̹��� ������ �ε�. 'loadFromFIle()'�Լ��� ���� ��θ� �μ��� �޾� �ؽ�ó�� �ʱ�ȭ 
    t1.loadFromFile("images/board.png");
    t2.loadFromFile("images/PawnB.png");
    t3.loadFromFile("images/PawnW.png");
    t4.loadFromFile("images/RookB.png");
    t5.loadFromFile("images/RookW.png");
    t6.loadFromFile("images/KnightW.png");
    t7.loadFromFile("images/KnightB.png");
    t8.loadFromFile("images/BishopB.png");
    t9.loadFromFile("images/BishopW.png");
    t10.loadFromFile("images/QueenW.png");
    t11.loadFromFile("images/QueenB.png");
    t12.loadFromFile("images/KingB.png");
    t13.loadFromFile("images/KingW.png");
    t14.loadFromFile("images/PromotionWhite.png");
    t15.loadFromFile("images/PromotionBlack.png");

    // Sprite��ü���� �����ϰ�, �ռ� �ε��� �ؽ�ó�� ����� �ʱ�ȭ. ��������Ʈ�� �ؽ�ó�� ȭ�鿡 �׸��� ���� ��.
    Sprite ChessBoard(t1);
    Sprite Pawnb(t2);
    Sprite Pawnw(t3);
    Sprite Rookb(t4);
    Sprite Rookw(t5);
    Sprite Knightw(t6);
    Sprite Knightb(t7);
    Sprite Bishopb(t8);
    Sprite Bishopw(t9);
    Sprite Queenw(t10);
    Sprite Queenb(t11);
    Sprite Kingb(t12);
    Sprite Kingw(t13);
    Sprite who_turn;
    Sprite Promotionwhite(t14);
    Sprite Promotionblack(t15);

    float dx = 0, dy = 0; /* ���콺 Ŭ�� ��ġ�� �����ϴ� ���� �ʱ�ȭ */
    int Movingpiece = 0; /* �̵����� ü������ ��ȣ�� �����ϴ� ���� �ʱ�ȭ */

    // �����찡 �����ִµ��� ���ӷ��� ����
    while (window.isOpen())
    {
        Vector2i pos = Mouse::getPosition(window); /* ���콺�� ���� ��ġ �������� */
        x = pos.x / size;
        y = pos.y / size; /* x�� y�� ���콺 ��ǥ�� ü���� ũ�⿡ �°� ��ȯ�� �� */
        Event e; /* �̺�Ʈ ��ü ����, �����쿡�� �߻��ϴ� �̺�Ʈ ó�� */


        //�̺�Ʈ�� �߻��� ��
        while (window.pollEvent(e))
        {
            // â�� ������ �̺�Ʈ�� �߻��ϸ�
            if (e.type == Event::Closed)
            {
                window.close(); /* â�� ���� */
            }
            window.clear(); /* ȭ�� ���� ��ħ */

            // ���콺 ��ư�� ������ ���� �̺�Ʈ ó��
            if (e.type == Event::MouseButtonPressed)
            {
                printf("����: %d\n", Who_turn);
                if (e.key.code == Mouse::Left) /* ���콺 ���� ��ư�� ������ �� */
                {


                    // ������ ��ġ�� ü������ �̵����� ���·� ����
                    if (board[y][x] != 0)  /* ������ ��ġ�� ü������ �ִٸ� */
                    {
                        dx = pos.x - x * 100;
                        dy = pos.y - y * 100; /* ������ ��ġ�� Ŭ���� ��ġ�� ���� ��� */

                        if (board[y][x] == PawnB && Who_turn == 1) /* ������ ��ġ�� ü������ ��� ���̰�, ����� ���� �� */
                        {
                            Movingpiece = PawnB; /* �̵� ���� ü������ ��� ������ ���� */
                            who_turn = Pawnb; /* ���� �̵����� ü������ ��� ������ ǥ�� */
                            board[y][x] = 0; /* �ش���ġ�� ��ĭ���� */
                        }
                        if (board[y][x] == PawnW && Who_turn == 0) /* ������ ��ġ�� ü������ ��� ���̰�, ����� ���� �� */
                        {
                            Movingpiece = PawnW;
                            who_turn = Pawnw;
                            board[y][x] = 0;
                        }
                        if (board[y][x] == RookB && Who_turn == 1)
                        {
                            Movingpiece = RookB;
                            who_turn = Rookb;
                            board[y][x] = 0;

                        }
                        if (board[y][x] == RookW && Who_turn == 0)
                        {
                            Movingpiece = RookW;
                            who_turn = Rookw;
                            board[y][x] = 0;

                        }
                        if (board[y][x] == KnightW && Who_turn == 0)
                        {
                            Movingpiece = KnightW;
                            who_turn = Knightw;
                            board[y][x] = 0;
                        }
                        if (board[y][x] == KnightB && Who_turn == 1)
                        {
                            Movingpiece = KnightB;
                            who_turn = Knightb;
                            board[y][x] = 0;
                        }
                        if (board[y][x] == BishopB && Who_turn == 1)
                        {
                            Movingpiece = BishopB;
                            who_turn = Bishopb;
                            board[y][x] = 0;
                        }
                        if (board[y][x] == BishopW && Who_turn == 0)
                        {
                            Movingpiece = BishopW;
                            who_turn = Bishopw;
                            board[y][x] = 0;
                        }
                        if (board[y][x] == QueenW && Who_turn == 0)
                        {
                            Movingpiece = QueenW;
                            who_turn = Queenw;
                            board[y][x] = 0;
                        }
                        if (board[y][x] == QueenB && Who_turn == 1)
                        {
                            Movingpiece = QueenB;
                            who_turn = Queenb;
                            board[y][x] = 0;
                        }
                        if (board[y][x] == KingB && Who_turn == 1)
                        {
                            Movingpiece = KingB;
                            who_turn = Kingb;
                            board[y][x] = 0;
                        }
                        if (board[y][x] == KingW && Who_turn == 0)
                        {
                            Movingpiece = KingW;
                            who_turn = Kingw;
                            board[y][x] = 0;
                        }
                        // ������ ��ġ�� �� ĭ�� ��
                        if (board[y][x] == 0)
                        {
                            move = 1;
                            oldPoz.x = x;
                            oldPoz.y = y; /* ������ġ ���� */
                        }
                    }
                }
            }

            // ü�� ���� �̵���Ų �� ���콺 ��ư�� ������ ���� �̺�Ʈ�� ó��
            if (e.type == Event::MouseButtonReleased)
            {
                if (e.key.code == Mouse::Left) /* ���콺 ���� ��ư�� ������ �� */
                {
                    int ok = 2; /* ü������ �̵� ���� ���θ� Ȯ���ϴ� ���� �ʱ�ȭ */

                    // �̵��� ������ ü������ �̵� ���� ���� �Ǵ�
                    if (Movingpiece == PawnW && move == 1) /* �̵� ���� ���� ��� ���� �� */
                    {
                        ok = PawnWhite(oldPoz.x, oldPoz.y, x, y); /* �̵� ���� ���� Ȯ�� (�̵������ϸ� 1�� ��ȯ) */
                    }
                    if (Movingpiece == PawnB && move == 1)
                    {
                        ok = PawnBlack(oldPoz.x, oldPoz.y, x, y);
                    }
                    if (Movingpiece == RookW && move == 1)
                    {
                        ok = RookWhite(oldPoz.x, oldPoz.y, x, y);
                        if (ok == 1 && RookW_Left == 0 && oldPoz.y == 7 && oldPoz.x == 0)
                        {
                            RookW_Left = 1;
                            //std::cout << RookW_Left << "\n";
                        }
                        if (ok == 1 && RookW_Right == 0 && oldPoz.y == 7 && oldPoz.x == 7)
                        {
                            RookW_Right = 1;
                            //std::cout << RookW_Right << "\n";
                        }
                    }
                    if (Movingpiece == RookB && move == 1)
                    {
                        ok = RookBlack(oldPoz.x, oldPoz.y, x, y);
                        if (ok == 1 && RookB_Right == 0 && oldPoz.y == 0 && oldPoz.x == 7)
                        {
                            RookB_Right = 1;
                            //std::cout << RookB_Right<< "\n";
                        }
                        if (ok == 1 && RookB_Left == 0 && oldPoz.y == 0 && oldPoz.x == 0)
                        {
                            RookB_Left = 1;
                            //std::cout << RookB_Left << "\n";
                        }
                    }
                    if (Movingpiece == BishopW && move == 1)
                    {
                        ok = BishopWhite(oldPoz.x, oldPoz.y, x, y);
                    }
                    if (Movingpiece == BishopB && move == 1)
                    {
                        ok = BishopBlack(oldPoz.x, oldPoz.y, x, y);
                    }
                    if (Movingpiece == QueenW && move == 1)
                    {
                        ok = QueenWhite(oldPoz.x, oldPoz.y, x, y);
                    }
                    if (Movingpiece == QueenB && move == 1)
                    {
                        ok = QueenBlack(oldPoz.x, oldPoz.y, x, y);
                    }
                    if (Movingpiece == KnightW && move == 1)
                    {
                        ok = KnightWhite(oldPoz.x, oldPoz.y, x, y);
                    }
                    if (Movingpiece == KnightB && move == 1)
                    {
                        ok = KnightBlack(oldPoz.x, oldPoz.y, x, y);
                    }
                    if (Movingpiece == KingB && move == 1)
                    {
                        ok = KingBlackMove(oldPoz.x, oldPoz.y, x, y);
                        if (ok == 1 && KingB == 0)
                        {
                            King_B = 1;
                            //   std::cout << KingB << "\n";
                        }
                    }
                    if (Movingpiece == KingW && move == 1)
                    {
                        ok = KingWhiteMove(oldPoz.x, oldPoz.y, x, y);
                        if (ok == 1 && KingW == 0)
                        {
                            King_W = 1;
                            //std::cout << "primaWho_turnKingW=" << KingW << "\n";
                        }
                    }

                    // �̵��� ������ ���
                    if (ok == 1)
                    {
                        printf("%d", Who_turn);
                        int nr = board[y][x]; /* �̵��Ϸ��� ��ġ�� ���� �ִ� ü������ ��ȣ�� ���� */
                        board[y][x] = Movingpiece; /* ���� �̵� ���� ü������ ����ġ�� ��ġ */


                        // üũ �� üũ����Ʈó��
                        if (Who_turn == 0) // üũ����Ʈ �߰�
                        {
                            if (KingW_Check == 1)
                            {
                                pozKingW();
                                int s = KingWhiteCheck(KingWhitePoz.x, KingWhitePoz.y);
                                if (s == 0)
                                {
                                    board[oldPoz.y][oldPoz.x] = Movingpiece;
                                    board[y][x] = nr;
                                }
                                else
                                {
                                    KingW_Check = 0;
                                    pozKingB();
                                    int sah = KingBlackCheck(KingBlackPoz.x, KingBlackPoz.y);
                                    if (sah == 0)
                                    {
                                        KingB_Check = 1;
                                    }
                                    Who_turn = 1;
                                }
                            }
                            else
                            {
                                pozKingW();
                                int sa = KingWhiteCheck(KingWhitePoz.x, KingWhitePoz.y);
                                if (sa == 0)
                                {
                                    board[oldPoz.y][oldPoz.x] = Movingpiece;
                                    board[y][x] = nr;
                                }
                                else
                                {
                                    pozKingB();
                                    int sah = KingBlackCheck(KingBlackPoz.x, KingBlackPoz.y);
                                    if (sah == 0)
                                    {
                                        KingB_Check = 1;
                                    }
                                    Who_turn = 1;
                                }
                            }
                        }
                        else
                        {
                            //std::cout << "���������";
                            if (KingB_Check == 1)
                            {
                                pozKingB();
                                int s = KingBlackCheck(KingBlackPoz.x, KingBlackPoz.y);
                                if (s == 0)
                                {
                                    board[oldPoz.y][oldPoz.x] = Movingpiece;
                                    board[y][x] = nr;
                                }
                                else
                                {
                                    KingB_Check = 0;
                                    pozKingW();
                                    int sah = KingWhiteCheck(KingWhitePoz.x, KingWhitePoz.y);
                                    if (sah == 0)
                                    {
                                        KingW_Check = 1;
                                    }
                                    Who_turn = 0;
                                }
                            }
                            else
                            {
                                pozKingB();
                                int sa = KingBlackCheck(KingBlackPoz.x, KingBlackPoz.y);
                                if (sa == 0)
                                {
                                    board[oldPoz.y][oldPoz.x] = Movingpiece;
                                    board[y][x] = nr;
                                }
                                else
                                {
                                    pozKingW();
                                    int sah = KingWhiteCheck(KingWhitePoz.x, KingWhitePoz.y);
                                    if (sah == 0)
                                    {
                                        KingW_Check = 1;
                                    }
                                    Who_turn = 0;
                                }
                            }
                        }
                    }

                    // �̵��� �Ұ����� ���
                    else if (ok == 0)

                    {
                        board[oldPoz.y][oldPoz.x] = Movingpiece; /* ���� ���� ��ġ�� �ǵ��� */
                    }
                    move = 0; /* �̵� ���� �ʱ�ȭ */
                }
            }
        }


        // ȭ�鿡 �׸���
        window.clear(); /* ȭ�� ����� */
        window.draw(ChessBoard); /* ü���� �׸��� */

        if (move == 1)
        {
            who_turn.setPosition(pos.x - dx, pos.y - dy);
            window.draw(who_turn);
        }
        for (int i = 0; i < LUNGIME; i++) /* ü������ ��� ��ġ�� ��ȸ�ϸ� ü������ �׸� */
        {
            for (int j = 0; j < LUNGIME; j++)
            {

                if (board[i][j] != 0)
                {
                    if (board[i][j] == PawnB)
                    {
                        Pawnb.setPosition(j * size, i * size);
                        window.draw(Pawnb);
                    }
                    if (board[i][j] == PawnW)
                    {
                        Pawnw.setPosition(j * size, i * size);
                        window.draw(Pawnw);
                    }
                    if (board[i][j] == RookB)
                    {
                        Rookb.setPosition(j * size, i * size);
                        window.draw(Rookb);

                    }
                    if (board[i][j] == RookW)
                    {
                        Rookw.setPosition(j * size, i * size);
                        window.draw(Rookw);

                    }
                    if (board[i][j] == KnightW)
                    {
                        Knightw.setPosition(j * size, i * size);
                        window.draw(Knightw);
                    }
                    if (board[i][j] == KnightB)
                    {
                        Knightb.setPosition(j * size, i * size);
                        window.draw(Knightb);
                    }
                    if (board[i][j] == BishopB)
                    {
                        Bishopb.setPosition(j * size, i * size);
                        window.draw(Bishopb);
                    }
                    if (board[i][j] == BishopW)
                    {
                        Bishopw.setPosition(j * size, i * size);
                        window.draw(Bishopw);
                    }
                    if (board[i][j] == QueenW)
                    {
                        Queenw.setPosition(j * size, i * size);
                        window.draw(Queenw);
                    }
                    if (board[i][j] == QueenB)
                    {
                        Queenb.setPosition(j * size, i * size);
                        window.draw(Queenb);
                    }
                    if (board[i][j] == KingB)
                    {
                        Kingb.setPosition(j * size, i * size);
                        window.draw(Kingb);
                    }
                    if (board[i][j] == KingW)
                    {
                        Kingw.setPosition(j * size, i * size);
                        window.draw(Kingw);
                    }
                }
            }
        }
        window.display(); /* ȭ�鿡 �׸� ������ ǥ�� */
    }
    return 0;
}

