Questão Tutorial 4
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {

    int contCaracter = 0, tamanho;
    char frase[30], caracter;

    printf("Digite uma frase: \n");
    scanf("%s", frase);
    printf("Digite um caracter: \n");
    scanf(" %c", &caracter); fflush(stdin);
    tamanho = strlen(frase);
    //printf("%d\n", tamanho); // debug!!

    for (int i = 0; i <= tamanho; i++){
        if (caracter == frase[i]){
            contCaracter++;
        }
    }
    printf ("A quantidade de %c: %d", caracter, contCaracter);
    return 0;
}
