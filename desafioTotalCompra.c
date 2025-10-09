#include <stdio.h>

int main(){
    char produto[50]; // Guardar o nome do produto
    float preco;     // Preço Unitário
    int quantidade; // Quantidade comprada
    float total;   //  Valor total da compra

    printf("Digite o nome do produto: ");
    scanf("%s",produto);

    printf("Digite o preço unitário: ");
    scanf("%f",&preco);

    printf("Digite a quantidade: ");
    scanf("%d",&quantidade);

    total = preco * quantidade;

    printf("Produto: %s\n,produto");
    printf("Preço Unitário: %.2f\n", preco);
    printf("Quantidade: %d\n", quantidade);
    printf("Total da compra: %.2f\n",total);
    return 0;
}