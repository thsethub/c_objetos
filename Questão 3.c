#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
        int i, tamanho, contvogal=0;
        char frase[60];
        printf("Digite uma frase: \n");
        gets(frase);
        tamanho = strlen(frase);

        for (i=0; i<tamanho; i++){
        frase[i]=towlower(frase[i]);
        if(frase[i]=='a'||frase[i]=='e'||frase[i]=='i'||frase[i]=='o'||frase[i]=='u'){
                contvogal++;
        }
    }
        printf ("A quantidade de vogais e: %d",contvogal);
  return 0;
}
