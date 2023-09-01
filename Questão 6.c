#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "portuguese");
  char T[4], L[4], M[4], D[4], Q[4];
  int cont=0;
    printf ("Telefonou para a vítima? Sim ou Não\n");
    scanf("%[^\n]", T); fflush(stdin);
    //printf("%d", strcmp(T, "Sim"));
    if(!strcmp(T, "Sim")){
        cont++;
    }
    printf ("\nEsteve no local do crime? Sim ou Não\n");
    scanf("%[^\n]",L); fflush(stdin);
    if(strcmp (L,"Sim")==0){
        cont++;
    }
    printf ("\nMora perto da vítima? Sim ou Não\n");
    scanf("%[^\n]", M); fflush(stdin);
    if(strcmp (M,"Sim")==0){
        cont++;
    }
    printf ("\nDevia para a vítima? Sim ou Não\n");
    scanf("%[^\n]", D); fflush(stdin);
    if(strcmp (D,"Sim")==0){
        cont++;
    }
    printf ("\nJá trabalhou com a vítima? Sim ou Não\n");
    scanf("%[^\n]", Q); fflush(stdin);
    if(strcmp (Q,"Sim")==0){
        cont++;
    }
    if (cont==2){
      printf ("Individuo é Suspeito!");
    }
    else if (cont==3) {
      printf ("Individuo é Cúmplice!");
    }
    else if (cont==4) {
      printf ("Individuo é Cúmplice!");
    }
    else if (cont==5) {
      printf ("Individuo é o Assassino!");
    }
    else if (cont==0){
      printf ("Individuo é Inocente!");
    }
  return 0;
}
