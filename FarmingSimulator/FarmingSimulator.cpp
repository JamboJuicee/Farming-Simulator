#include <iostream>
#include <conio.h>
#include <windows.h>

void setcolor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
//X -->
int map[21][26]{
    { 5,5,5,5,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,9,9 },//1   //Y |
    { 5,5,5,5,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,9,9 },//2   //  \/
    { 5,5,5,5,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,9,9 },//3
    { 5,5,5,5,5,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,9,9,9 },//4
    { 0,7,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,9,9,9 },//5
    { 0,7,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,9,9,9 },//6
    { 0,7,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,9,9,9 },//7
    { 0,0,7,7,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,8,8,8,0,9,9,9 },//8
    { 6,6,0,0,7,0,0,1,1,1,1,1,1,1,1,1,1,0,0,8,8,8,0,9,9,9 },//9
    { 0,0,0,0,7,0,0,1,1,1,1,1,1,1,1,1,1,0,0,8,8,8,0,9,9,9 },//10
    { 11,0,0,0,7,0,0,1,1,1,1,1,1,1,1,1,1,0,0,8,8,8,0,9,9,9 },//11
    { 0,0,0,0,7,0,0,1,1,1,1,1,1,1,1,1,1,0,0,8,8,8,0,9,9,9 },//12
    { 14,0,0,0,7,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,7,0,0,9,9,9 },//13
    { 0,0,0,0,7,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,7,0,0,9,9,9 },//14
    { 13,0,0,0,7,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,7,0,0,9,9,9 },//15
    { 0,0,0,0,7,0,0,7,0,0,0,0,0,0,0,0,0,0,0,0,7,0,0,9,9,9 },//16
    { 12,0,0,0,7,0,0,7,0,0,0,0,0,0,0,0,0,0,0,0,7,0,0,9,9,9 },//17
    { 0,0,0,0,0,7,7,7,7,0,0,0,0,0,0,0,0,0,0,7,0,0,0,9,9,9 },//18
    { 10,0,0,0,0,0,0,7,7,7,0,0,0,0,0,0,0,7,7,0,0,0,0,9,9,9 },//19
    { 0,0,0,0,0,0,0,0,0,0,7,7,7,7,7,7,7,0,0,0,0,0,0,9,9,9 },//20
    { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,9,9 },//21
    /* 1    Field          можна заїзджати
    *  2    ---
    *  3    ---
    *  4    ---
    *  5    Shop           можна заїзджати
    *  6    Gas station    можна заїзджати
    *  7    Road            можна заїзджати
    *  8    Sell point      можна заїзджати
    *  9    River           можна ВТОПИТИСЯ
    *  10   Trailer
    *  12   Cultivator
    *  13   Seeder
    *  14   Tractor
    *  11 - Combine
    */
};

int combineX = 0, combineY = 10;
int tracorX = 0, tractorY = 12;
int seederX = 0, seederY = 14;
int cultivatorX = 0, cultivatorY = 16;
int trailerX = 0, trailerY = 18;

void print_map()
{
    for (int i = 0; i < 21; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (map[i][j] == 0)
            {
                setcolor(2);
                std::cout << (char)219 << (char)219;
            }
            else if (map[i][j] == 1)
            {
                setcolor(6);
                std:: cout << (char)178 << (char)178;
            }
            else if (map[i][j] == 5)
            {
                setcolor(7);
                std::cout << (char)178 << (char)178;
            }
            else if (map[i][j] == 6)
            {
                setcolor(2);
                std::cout << (char)219 << (char)219;
            }
            else if (map[i][j] == 7)
            {
                setcolor(8);
                std::cout << (char)219 << (char)219;
            }
            else if (map[i][j] == 8)
            {
                setcolor(9);
                std::cout << (char)219 << (char)219;
            }
            else if (map[i][j] == 9)
            {
                setcolor(3);
                std::cout << (char)158 << (char)158;
            }
            else if (map[i][j] == 10)
            {
                setcolor(6);
                std::cout << (char)'T' << (char)'R';
            }
            else if (map[i][j] == 11)
            {
                setcolor(3);
                std::cout << (char)'C' << (char)'O';
            }
            else if (map[i][j] == 12)
            {
                setcolor(6);
                std::cout << (char)'C' << (char)'U';
            }
            else if (map[i][j] == 13)
            {
                setcolor(6);
                std::cout << (char)'S' << (char)'E';
            }
            else if (map[i][j] == 14)
            {
                setcolor(3);
                std::cout << (char)'T' << (char)'R';
            }
        }
        std::cout << std::endl;
    }
    setcolor(7);
}

int main()
{
    map[combineY][combineX] = 1;
    print_map();

    char button;
    char temp;

    while (true)
    {
        button = _getch();

        switch (button)
        {
        case 'W':
        case 'w':
            if (combineY > 0 && map[combineY + 1][combineX] == 0)
            {
                combineY -= 1;
                temp = (combineY + 1);
                map[combineY][combineX] = 11;
                map[combineY + 1][combineX] = temp;
                system("cls");
                print_map();
            }
            break;

        case 'S':
        case 's':
            if (combineY < 20 && map[combineY - 1][combineX] == 0)
            {
                combineY += 1;
                temp = (combineY - 1);
                map[combineY][combineX] = 11;
                map[combineY - 1][combineX] = temp;
                system("cls");
                print_map();
            }
            break;
        case 'D':
        case 'd':
            if (combineX < 25 && map[combineY][combineX+1] == 0)
            {
                combineX += 1;
                temp = (combineX - 1);
                map[combineY][combineX] = 11;
                map[combineY][combineX-1] = temp;
                system("cls");
                print_map();
            }
            break;
        case 'A':
        case 'a':
            if (combineX > 0 && map[combineY][combineX - 1 ] == 0)
            {
                combineX -= 1;
                temp = (combineX + 1);
                map[combineY][combineX] = 11;
                map[combineY][combineX+1] = temp;
                system("cls");
                print_map();
            }
            break;

        case VK_MBUTTON:
            std::cout << "MENU" << std::endl;
            break;

        case VK_BACK:
            std::cout << "EXIT" << std::endl;
            return 0;

        default:
            break;
        }
    }

}