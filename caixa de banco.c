#include <stdio.h>
#include <conio.h>
#include <math.h>

int main ()
{
    int saque,s100,s50,s20,s10,s5,s2=0,s1,total,sr100,sr50,sr20,sr10,sr5,p4,n=0;
printf("digite o valor do saque\n");
scanf("%d",&saque);
p4=saque%5;

if(saque == 1 || saque == 3){
         printf("nao e possivel");
         }
 
if (p4 == 1 || p4== 3){
       n=2;
       saque-=4;
       
       
}


    s100=saque/100;
    sr100=saque%100;
    s50=sr100/50;
    sr50=sr100%50;
    s20=sr50/20;
    sr20=sr50%20;
    s10=sr20/10;
    sr10=sr20%100;
    s5=sr10/5;
    sr5=sr10%5;
    s2=sr5/2;
    total=s100+s50+s20+s10+s5+s2+s1;
     
printf("\nquantidade de notas total= %d",total);
printf("\nnotas de 100= %d",s100);
printf("\nnotas de 50= %d",s50);
printf("\nnotas de 20= %d",s20);
printf("\nnotas de 10= %d",s10);
printf("\nnotas de 5= %d",s5);
printf("\nnotas de 2= %d",s2+n);
    getch();
    return 1;
}
