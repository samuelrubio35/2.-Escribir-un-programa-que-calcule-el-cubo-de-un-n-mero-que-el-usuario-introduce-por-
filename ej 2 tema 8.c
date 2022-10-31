/*2. Escribir  un  programa  que  calcule  el  cubo  de  un  número  que  el  usuario  introduce  por
teclado, el programa debe terminar cuando el usuario introduzca el número cero. */

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int numero, resultado;

    printf("Introduzca un numero caballero o dama: ");
    scanf("%i", &numero);

    resultado = pow(numero, 3);
    printf("%i\n", resultado);

    if(numero == 0){
        printf("\nEl programa ha terminado");
    }


    return 0;
}
