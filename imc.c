#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
float peso,altura,imc;
printf("digite seu peso em kilos:\n");
scanf("%f",&peso);
printf("\ndigite sua altura em metros:\n");
scanf("%f",&altura);
imc=peso/(altura*altura);
printf("IMC=%.2f",imc);
if(imc>=28) {
    printf("\nGordo");
}if(imc <= 18){
    printf("\nMagro");
}if(imc>18 || imc<28){
    printf("\nNormal");
}


float peso1,altura2,imc2;
printf("\ndigite novamente");
scanf("%f %f",peso1,altura2);
imc2=peso1/(altura2*altura2);
printf("ims=%f",imc2);
getch();
return 0;
}
