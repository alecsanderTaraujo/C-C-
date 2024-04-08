#include <stdio.h>
#include <stdlib.h>

int main (){
    float m;

    printf("insira a nota: \n");
    scanf("%f",m);

    if(m >= 4.0 && < 6.9){
        printf("Pode Realizar Exame \n");
    }
    if( m >= 7.0){
        printf("Aprovado Parabens \n");
    }
    else{
        printf("Reprovado");
    } 

    getchar();
    return 0;
}