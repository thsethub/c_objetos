#include <stdio.h>

int main()
{
  int T, L, M, D, Q;
    printf ("Telefonou para a vítima? 1 para Sim/ 0 para Não\n");
    scanf ("%d", &T);
  
    printf ("\nEsteve no local do crime? 1 para Sim/ 0 para Não\n");
    scanf ("%d", &L);
  
    printf ("\nMora perto da vítima? 1 para Sim/ 0 para Não\n");
    scanf ("%d", &M);
  
    printf ("\nDevia para a vítima? 1 para Sim/ 0 para Não\n");
    scanf ("%d", &D);
  
    printf ("\nJá trabalhou com a vítima? 1 para Sim/ 0 para Não\n");
    scanf ("%d", &Q);

    if (T+L+M+D+Q==2){
      printf ("Individuo é Suspeito!");
    }
    else if (T+L+M+D+Q==3) {
      printf ("Individuo é Cúmplice!");
    }
    else if (T+L+M+D+Q==4) {
      printf ("Individuo é Cúmplice!");
    }
    else if (T+L+M+D+Q==5) {
      printf ("Individuo é o Assassino!");
    }
    else if (T+L+M+D+Q==0) {
      printf ("Individuo é Inocente!");
    }

  return 0;
}
