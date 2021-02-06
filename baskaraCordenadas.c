#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
float a, b, c, x1, x2,delta, qa, a2, b2, c2, delta2, x12, x22, qa2, cordx1, cordx2, cordy1, cordy2;
printf("Digite os valores de a, b e c\n");
scanf("%f", &a);
scanf("%f", &b);
scanf("%f", &c);
scanf("%f", &a2);
scanf("%f", &b2);
scanf("%f", &c2);
delta = pow(b,2) - 4*a*c;
delta2 = pow(b2,2) - 4*a2*c2;
qa = 2*a;
qa2 = 2*a2;
x1 = (-b + sqrt(delta))/qa;
x2 = (-b - sqrt(delta))/qa;
x12 = (-b2 + sqrt(delta2))/qa2;
x22 = (-b2 - sqrt(delta2))/qa2;
cordx1 = (-b/(2*a));
cordy1 = (-delta/(4*a));
cordx1 = (-b2/(2*a2));
cordy1 = (-delta2/(4*a2));

printf("Os valores de x1 e x2 sao %.0f e %.0f e os valores das coordenadas sao (%.1f,%.1f)", x1, x2, cordx1, cordy1);
printf("Os valores de x12 e x22 sao %.0f e %.0f e os valores das coordenadas sao (%.1f,%.1f)", x12, x22, cordx2, cordy2);

return 0;
}

