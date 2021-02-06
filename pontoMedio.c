#include <stdio.h>
#include <conio.h>
#include <math.h>

float xy(float *a,float *b,float x1,float y1,float x2,float y2){
      if(x1==x2) return 1;
      float y,x;
      y=y2-y1;
      x=x2-x1;
      *a=y/x;
      *b=y1-(*a)*x1;
      return 0;
      }
      
int main (){
    float x1,x2,y1,y2,a,b;
    printf("digite x1,y1,x2,y2\n");
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    if(xy (&a,&b,x1,y1,x2,y2)==0)
    printf("y=%.1fx+%.1f",a,b);
    else printf("cordenadas invalidadas");
             
    getch ();
    return 0;
    }








