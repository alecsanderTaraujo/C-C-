#include <stdio.h>
#include <stdlib.h>

long int fatorial(int n) 

{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fatorial(n - 1);
}

int main() {
    int numero = 20;
    long int resultado = fatorial(numero);
    
    printf("O fatorial de %d é: %lld\n", numero, resultado);
    
    return 0;
}
