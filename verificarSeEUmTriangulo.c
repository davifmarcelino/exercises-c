#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
float x,y,z,xs,ys,zs;
printf("digite o valor dos 3 lados do triango:\n");
printf("digite o lado x: ");
scanf("%f",&x);
printf("digite o lado y: ");
scanf("%f",&y);
printf("digite o lado z: ");
scanf("%f",&z);

xs=y+z;
ys=x+z;
zs=x+y;

if(xs>x && ys>y && zs>z){
    printf("\n%c um triangulo ",144);
}
else{
    printf("\nN%co %c um triangulo",198,130);
};
getch();
return 0;
}

