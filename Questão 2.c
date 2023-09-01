Questão Tutorial 2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
        char produto1[20], produto2[20];
        float valor1;
        float valor2;

    printf("Digite o nome do primeiro produto: \n"); fflush(stdin);
    fgets(produto1,20,stdin); fflush(stdin);
    printf("Digite o nome do segundo produto: \n"); fflush(stdin);
    fgets(produto2,20,stdin); fflush(stdin);
    printf("Digite o valor do primeiro produto: \n"); fflush(stdin);
    scanf(" %f", &valor1);fflush(stdin);
    printf("Digite o valor do segundo produto: \n"); fflush(stdin);
    scanf(" %f", &valor2);fflush(stdin);

    valor1>valor2 ? printf("%s e mais barato(a), custando R$%.2f",produto2,valor2):
    printf("O %s é mais barato, custando %.2f",produto1,valor1);


  return 0;
}
