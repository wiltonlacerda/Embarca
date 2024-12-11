/* 
   Cálculo do fatorial de um número usando long long int.
   Fiz uma alteração neste arquivo.
*/

#include <stdio.h>

long long int calc_fat(int);

int main()
{
    int numero = 13;
    long long int num_fat = calc_fat(numero);
    printf("\nO fatorial de %d eh: %lld", numero , num_fat);
    return 0;
}

/* Definição da funcao fatorial */
long long int calc_fat(int b)
{
    long long int fatorial = 1;
    for (int contador = b; contador >= 1; contador--)
    {
        fatorial *= contador;
        printf(" %lld",fatorial);
    }
    return fatorial;
}

