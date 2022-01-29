#include "funciones.h"

int main() {

int *p_a,*p_b,a,b;

printf("Dame 2 valores\n");
scanf("%i %i",&a,&b);

p_a = &a;
p_b = &b;

    int respuestasuma = suma(p_a,p_b);
    int respuestaresta = resta(p_a,p_b);
    int respuestamultiplicacion = multiplicacion(p_a,p_b);
    int respuestadivision = division(p_a,p_b);
    int respuestaraices = sumaraices(p_a,p_b);


    printf("El valor de la suma es: %i\n",respuestasuma);
    printf("El valor de la resta es: %i\n",respuestaresta);
    printf("El valor de la multiplicacion es: %i\n",respuestamultiplicacion);
    printf("El valor de la division es: %i\n",respuestadivision);
    printf("El valor de la suma de raices es: %i\n",respuestaraices);

    return 0;
}
