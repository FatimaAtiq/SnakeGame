#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
const int width = 40;
const int height = 25;
int x, y, fruit_X, fruit_Y, score;
int tailX[100], tailY[100];
int nTail;
bool gameover;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir;
void Setup()
{
    gameover = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruit_X = rand() % width;
    fruit_Y = rand() % height;
    score = 0;
}
void Draw()
{
    system("cls");
    for (int i = 0; i < width + 2; i++)
    {
        cout << "-";
    }
    cout << endl;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j == 0)
                cout << "|";
            if (i == y && j == x)
                cout << "O";
            else if (i == fruit_Y && j == fruit_X)
                cout << '\4';
            else
            {
                bool print = false;
                for (int k = 0; k < nTail; k++)
                {
                    if (tailX[k] == j && tailY[k] == i)
                    {
                        cout << "-";
                        print = true;
                    }
                }
                if (!print)
                    cout << " ";
            }
            if (j == width - 1)
                cout << "|";
        }
        cout << endl;
    }
    for (int i = 0; i < width + 2; i++)
    {
        cout << "-";
    }
    cout << endl;
    cout << "Score: " << score;
}
void Input()
{
    if (_kbhit()) {
        switch (_getch())
        {
        case 'a':
            dir = LEFT;
            break;
        case 'd':
            dir = RIGHT;
            break;
        case 'w':
            dir = UP;
            break;
        case 's':
            dir = DOWN;
            break;
        case 'x':
            gameover = true;
            break;
        }
    }
}
void Algorithm() {
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;
    for (int i = 1; i < nTail; i++) {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }
    switch (dir) {
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;
    default:
        break;
    }

    if (x >= width)
        x = 0;
    else if (x < 0)
        x = width - 1;

    if (y >= height)
        y = 0;
    else if (y < 0)
        y = height - 1;

    for (int i = 0; i < nTail; i++)
        if (tailX[i] == x && tailY[i] == y)
            gameover = true;
    if (x == fruit_X && y == fruit_Y) {
        score += 10;
        fruit_X = rand() % width;
        fruit_Y = rand() % height;
        nTail++;
    }
}
int main()
{

    cout << "                                                WELCOME TO THE SNAKE GAME                       " << endl;
    cout << "                                                     INSTRUCTIONS                                              " << endl; 
    cout << "                                                  Press 's' --> down                                " << endl;
    cout << "                                                  Press 'w' --> up                                  " << endl;
    cout << "                                                  Press 'a' --> left                                " << endl;
    cout << "                                                  Press 'd' --> right                               " << endl;
    cout << "                                                     ARE YOU READY?                                      " << endl << endl << endl;
    char c;
    cout << "                                           IF you want to play the game, press 'y' and enter" << endl;
    cout << "                                           If not then press any other key " << endl;
    cin >> c;
    switch (c)
    {
    case 'y':
        Setup();
        while (!gameover)
        {
            Draw();
            Input();
            Algorithm();
            Sleep(100); // Optional: Add a delay to control the speed of the snake
        }
        break;
    default:
        break;
    }
    return 0;
}