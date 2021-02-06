#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n1,n2,maior;
    printf("digite 2 valores?");
    scanf("%d%d",&n1,&n2);
    maior=n1>n2 ? n1: n2;
    printf("maior=%d",maior);
    /*outra maneira de fazer é
    if(n1>n2)maior=n1;
    else maior=n2;
    */
    getch();
    return 0;
}
