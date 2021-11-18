/*
Realice un programa que permita introducir 6 números en una tabla de 3x2

*/

#include <stdio.h>

int main(){

    float matriz[3][2];
    int i, j ;

    //Lectura de los datos de la matriz
    printf("Introduzca los datos de la matriz \n");
    for( i = 0; i<3; i++){
        for(j=0; j<2; j++){
            printf("Posicion de la matriz[%i][%i]:", i, j);
            scanf("%f", &matriz[i][j]);


        }
    }
       printf("===============================================\n");

    for( i = 0; i<3; i++){
        for(j=0; j<2; j++){

            printf("Posicion de la matriz[%i][%i]: %f \n", i, j, matriz[i][j]);


        }
    }


}
