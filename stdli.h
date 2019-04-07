#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int i;
COORD coord={0,0};
void gotoxy(int x,int y){
   coord.X=x;coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }
void mainmenu(){
    system("color e5");
    system("cls");
    for(i=0;i<=38;i++)i==20 ? printf(" NET WAGE CALCULATOR ") : printf("\xDB");
    printf("\n\n\t");
	for(i=0;i<=45;i++)printf("\xDB");
	for(i=0;i<=12;i++)printf("\n\t\xDB%44c\xDB",0);
	printf("\n\t");
	for(i=0;i<=45;i++)printf("\xDB");
}
