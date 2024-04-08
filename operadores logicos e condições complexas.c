#include <stdio.h>
#include <stdlib.h>

int main (){
    float m;
    char nome [50];
    
    printf("Insira O nome do Aluno: \n");
    scanf("%s",&nome);

    printf("insira a nota: \n");
    scanf("%f",&m);

    if(m >= 4.0 && m <= 6.9){
        printf("Pode Realizar Exame \n");
    }
    if( m >= 7.0){
        printf("Aprovado Parabens \n");
    }
    else{
        printf("Reprovado \n");
    } 

    getchar();
    return 0;
}
