#include <stdio.h>
#include <conio.h>
#include <math.h>

int main (){
    int d,m,a,h1,h2,min1,min2,s1,s2,r1,r2,r3,v3,v2;
 printf("digite a data formatada em dd/mm/aaaa :\n");
 scanf("%d/%d/%d",&d,&m,&a);
 printf("\n%d/%02d/%d",d,m,a);
 printf("\n%d/%02d/%d",d,m+1,a);
 
 printf("\n\nDigite o primeiro tempo hr:min:seg :\n"); 
 scanf("%d:%d:%d",&h1,&min1,&s1);
 printf("\ndigite o segundo tempo hr:min:seg :\n"); 
 scanf("%d:%d:%d",&h2,&min2,&s2);
 r3=(s1+s2)%60;
 v3=(s1+s2)/60;
 r2=(min1+min2+v3)%60;
 v2=(min1+min2+v3)/60;
 r1=h1+h2+v2;
 printf("\nAs somas dos tempos e: %02d:%02d:%02d",r1,r2,r3);
 getch();
 return 0;   
}