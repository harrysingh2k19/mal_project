#include <stdio.h>
#include "stdli.h"
#include <windows.h>
#include <conio.h>
void gotoxy(int x,int y);
int i,j=1;
float sal[5];
int main(){
    mainmenu();
    for(i=0;i<5;i++){
        gotoxy(9,5+i);
        printf("-> Enter Gross Wage of Emp %d : ",i+1);
        scanf("%f",&sal[i]);
        printf("\n");
    }
    for(i=0;i<5;i++){
        if(sal[i]<=450000)sal[i]=(sal[i]*100)/118;
        else sal[i]=(sal[i]*100)/114;
    }
    mainmenu();
    for(i=0;i<5;i++){
        gotoxy(9,5+i);
        printf("-> Net Wage of Emp %d : %.2f",i+1,sal[i]);
    }
    getch();
    system("cls");
    return 0;
}
