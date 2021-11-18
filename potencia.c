/*
 Escribe un programa que eleve un número a una potencia, utilizando dos métodos:

  1) Utilizando la función potencia (pow)
  2) Usando un bucle sin recurrir al operador potencia

*/

#include <stdio.h>
#include <math.h>

int main (){

    float n, res1, res2;
    int i, p;
    printf("Introduzca el numero:");
    scanf("%f", &n);
    printf("Introduzca la potencia:");
    scanf("%i", &p);

    /*
     Utilizar un bucle: n^p 2^3 = 2*2*2
    */
    res1 = 1;
    for(i=1; i<=p; i++){
       res1 = res1 * n;
       printf("Iteracion %i resultado: %f \n", i, res1);
    }
    res2 = pow(n,p);

    printf("El resultado utilizando bucle: %f \n", res1);
    printf("El resultado utilizando pow: %f \n", res2);

    return 0;

}
