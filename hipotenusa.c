#include <stdio.h>
#include <conio.h>
#include <math.h>

float hip(float ca,float co)
{
float y=sqrt((pow(ca,2))+(pow(co,2)));
return y;
}

int main ()
{
    float a,b,c;
    b=3;
    c=4;
    a=hip(4,3);
    printf("%f",a);
    getch();
    return 0;
}
