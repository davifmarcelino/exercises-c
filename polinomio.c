#include <stdio.h>
#include <conio.h>
#include <math.h>

int main ()
{
 int n;
 float a0=0,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0;
 printf("digite o graus do polinomio de 1 a 6\n");
 scanf("%d",&n);
           if(n==6){
          printf("digite a6=");
          scanf("%.1f",&a6);
          }   
           if(n>=5){
          printf("digite a5=");
          scanf("%f",&a5);
          }  
           if(n>=4){
          printf("digite a4=");
          scanf("%f",&a4);
          }  
           if(n>=3){
          printf("digite a3=");
          scanf("%f",&a3);
          }  
           if(n>=2){
          printf("digite a2=");
          scanf("%f",&a2);
          }  
           if(n>=1){
          printf("digite a1=");
          scanf("%f",&a1);
          }  
          if(n>=0){
          printf("digite a0=");
          scanf("%f",&a0);
          }
          printf("p(x)=%.1fx^6+%.1fx^5+%.1fx^4+%.1fx^3+%.1fx^2+%.1fx^1%.1fx^0",a0,a1,a2,a3,a4,a5,a6);
getch();
return 0;
}
