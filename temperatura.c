#include <stdio.h>
#include <conio.h>
#include <math.h>

int main ()
{
float x1,x2,y1,y2,x,y,m;
printf("digite a temperatura de x");
scanf("%f",&x1);
printf("digite o correspodente dela na temperatura y");
scanf("%f",&y1);
printf("digite a temperatura de x2");
scanf("%f",&x2);
printf("digite o correspodente dela na temperatura y2");
scanf("%f",&y2);
printf("agora digite uma temperatura x que deseja achar seu correspondete em y");
scanf("%f",&x);
m=(y2-y1)/(x2-x1);
y=(m*(-x1))+(m*x)+y1;
printf("%f",y);
getch();
return 0;
}
