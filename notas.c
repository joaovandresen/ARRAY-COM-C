#include <stdio.h>

int main(){
    int notas[5]; // declara um array de 5 posições para armazenar as notas
    int i ;      // varíavel de controle para o loop(repetição)

    //entrada do usuário
    printf("Digite cinco notas: \n");

    for (i = 0; i < 5; i++){
        scanf("%d", &notas[i]); // lê uma nota e armazena na posição i do array
    }

    // exibição
    printf("\n Notas digitadas: \n");

    for (i =0; i < 5; i++){
        printf("%d\n", notas[i]); // imprime a nota da posição
    }
    
    return 0;

}

