#include <stdio.h>
#include <conio.h>
#include <math.h> 

/* -"\n"= new line ou seja uma nova linha, pula uma linha
-"\t"= equivalente ao tab <-->
-"%c"= para imprimir um caracter baseado no seu numero correspondente encontrato na tabela
ascii estendido like:https://www.ricardoarrigoni.com.br/tabela-ascii-completa/          
*/


int main()        
{
    float x,y;
    x=(3+4.2+5.1)/2;
    y=(4.1+10.5+6.2)/2;
    printf("\nPerimetro X=%.1f", 3+4.2+5.1);
    printf("\nArea X=%f",sqrt(x*(x-3)*(x-4.2)*(x-5.1)));
    printf("\nPerimetro Y=%.1f",4.1+10.5+6.2);
    printf("\nArea Y=%f",sqrt(y*(y-4.1)*(y-10.5)*(y-6.2)));
    getch();  
    return 0;
}
