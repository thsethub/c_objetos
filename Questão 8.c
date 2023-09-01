#include <stdio.h>

int main()
{
  int a;
      printf ("Digite um número\n");
      scanf ("%d", &a);
  
  if (a==1) printf ("Domingo",a);
  else if (a==2) printf ("Segunda",a);
  else if (a==3) printf ("Terça",a);
  else if (a==4) printf ("Quarta",a);
  else if (a==5) printf ("Quinta",a);
  else if (a==6) printf ("Sexta",a);
  else if (a==7) printf ("Sábado",a);
  else printf ("Valor inválido",a);
  
  return 0;
}
