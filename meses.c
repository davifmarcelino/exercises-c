#include  <stdio.h>
#include  <conio.h>
#include  <math.h>

int main()
{
    int mes;
printf("digite um numero correspondete a um mes do ano:\n");
scanf("%d",&mes);
/*
if(mes==1){
printf("Janeiro");
}
else if(mes==2){
printf("fevereiro");
}
else if(mes==3){
printf("mar%co",135);
}
else if(mes==4){
printf("abril");
}
else if(mes==5){
printf("maio");
}
else if(mes==6){
printf("junho");
}
else if(mes==7){
printf("julho");
}
else if(mes==8){
printf("agosto");
}
else if(mes==9){
printf("setembro");
}
else if(mes==10){
printf("outubro");
}
else if(mes==11){
printf("novembro");
}
else if(mes==12){
printf("dezembro");
}
else printf("mes nao existe");
*/
switch(mes){
case 1:printf("Janeiro");break; 
case 2:printf("Fevereiro");break; 
case 3:printf("Mar%co",135);break; 
case 4:printf("Abril");break; 
case 5:printf("Maio");break; 
case 6:printf("Junho");break; 
case 7:printf("Julho");break; 
case 8:printf("Agosto");break; 
case 9:printf("Setembro");break; 
case 10:printf("Outubro");break; 
case 11:printf("Novembro");break; 
case 12: printf("Dezembro");break; 
default: printf("esse mes nao existe");
}
getch();
return 0;
}
