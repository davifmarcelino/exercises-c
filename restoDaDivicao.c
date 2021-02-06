#include <stdio.h>
#include <conio.h>
#include <math.h>

int calculo(int x,int y,int *q,int *r)
{
*q=x/y;
*r=x-(y*(x/y)); // r=x%Y chamado de modulo

return 0;
}

 int main()
 {
int divid,divis,quoc,resto;
printf("digite o didendo e o divisor?\n");
scanf("%d%d",&divid,&divis);
calculo(divid,divis,&quoc,&resto);

printf("\nquociente=%d",quoc);
printf("\nresto=%d",resto);
getch();
return 0;
 }
