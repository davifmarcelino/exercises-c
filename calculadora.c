#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
float a,b,res;
int ops;
printf("digite dois numeros para fazer o calculo\n");
scanf("%f%f",&a,&b);
fflush(stdin);
printf("selecione uma das opicoes\n");
printf("1-adicao\n2-subitracao\n3-divicao\n4-mutiplicao\n");
scanf("%d",&ops);
switch (ops){
       case 1:printf("%.15f",a+b);break;
       case 2:printf("%.15f",a-b);break;
       case 3:printf("%.15f",a/b);break;
       case 4:printf("%.15f",a*b);break;
       }
getch();
return 0;
}
