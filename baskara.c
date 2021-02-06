#include <stdio.h>
#include <conio.h>
#include <math.h>

float baskara(float a,float b,float c,float *x1,float *x2)
{
    float delta=(b*b)+(-4*a*c);
    *x1=(-b+sqrt(delta))/(2*a);
    *x2=(-b-sqrt(delta))/(2*a);
    return 0;

}

int main()
{

    printf("digite a , b e c, para calcular bascara da fun%cao\n",128);
    float a,b,c,x1,x2;
    scanf("%f%f%f",&a,&b,&c);
    baskara(a,b,c,&x1,&x2);
    printf("\nX1=%.2f",x1);
    printf("\nX2=%.2f",x2);
    getch();
    return 0;
}
