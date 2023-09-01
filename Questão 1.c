#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
        char nome[20];

        printf("Digite um nome: \n"); fflush(stdin);
        fgets(nome,20,stdin); fflush(stdin);
        printf ("O nome digitado foi: %s", nome);


  return 0;
}
