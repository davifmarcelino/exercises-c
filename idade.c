#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    system("color 0a");
    int idade;
    printf("digite sua idade:\n");
    scanf("%d",&idade);
    if(idade<18 && idade>=13)
    {
        printf("jovem");
    }
    else if(idade<14)
    {
        printf("kid");
    }
    else if(idade>=18 && idade<65)
    {
        printf("adulto");
    }
    else if(idade>65)
    {
        printf("idoso");
    };
    getch();
    return 0;
}
