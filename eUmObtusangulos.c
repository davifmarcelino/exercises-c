#include <stdio.h>
#include <conio.h>
#include <math.h>

float tri(float x,float y,float z)
{
float xs,ys,zs;
xs=y+z;
ys=x+z;
zs=x+y;
if(xs>x && ys>y && zs>z)
    return 1;
else
    return 0;
}

float tri2(float x,float y,float z)
{
float xs,ys,zs;
xs=y+z;
ys=x+z;
zs=x+y;
if(xs>x && ys>y && zs>z)
    return 1;
if (xs<x || ys<y || zs<z)
    return 0;
}

float tri3(float x,float y,float z)
{
float xs,ys,zs;
xs=y+z;
ys=x+z;
zs=x+y;
return (xs>x && ys>y && zs>z);
}

int main()
{
    float x,y,z;
    int r,r2,r3;

    printf("digite os valores do triangulo:");
    scanf("%f%f%f",&x,&y,&z);
    r = tri(x,y,z);
    r2 = tri2(x,y,z);
    r3 = tri3(x,y,z);
    printf("\n%d",r);
    printf("\n%d",r2);
    printf("\n%d",r3);
    return 0;
}
