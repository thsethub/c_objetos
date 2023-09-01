#include <stdio.h>

int main()
{
  char turno;
      printf ("Em qual turno você estuda?\n");
      scanf ("%c", &turno);

    switch (turno)
    {
      case 'M': printf("Bom dia!"); break;
      case 'V': printf ("Boa tarde!"); break;
      case 'N': printf ("Boa noite!"); break;
      default: printf ("Valor inválido");
        }
  return 0;
}
