#include <stdio.h>
#include <conio.h>
#include <math.h>

long cal (long batata)
{
     long j,d=0;
     for(j=1;j<=batata;j++)  
    {
        if(batata%j==0)
        d++;
        printf("passei aqui %ld valor de D:", d);
    
    }
    if(d==2)
            return 1;
    else 
            return 0;
}

int main ()
{
    long i, n,d=0;
    printf("digite um numero para descobrir seus divisores\n");
    scanf("%ld ",&n);
    printf("\n ");
    for (i=2; i<=n; i++){
        if( cal(i) )
        printf("%ld ,",i);
    }
    getch();
 return 0;
}
