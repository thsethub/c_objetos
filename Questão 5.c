#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {

    int contCaracter = 0, tamanho;
    char frase[30], vogal;

    printf("Digite uma frase: \n");
    gets(frase);

    for (int i = 0; i <= strlen(frase); i++)
        {
       tolower(frase[i]); if (frase[i]=='a'||frase[i]=='e'||frase[i]=='i'||frase[i]=='o'||frase[i]=='u'){
                frase[i]='*';
        }
    }
    printf ("%s", frase);
    return 0;
}
