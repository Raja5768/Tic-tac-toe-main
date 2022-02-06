#include "game_operations.h"

int check_draw(int turn)
{
    if(turn > 9)
    {
        //gotoxy(30,20);
        //textcolor(128+RED);
        printf("\n\n Game Draw");
        getch();
        exit(0);
    }
    return 1;
}