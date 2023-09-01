#include <stdio.h>

int main()
{
  float nota;
      printf ("Digite a média do aluno\n");
      scanf ("%f", &nota);

      if (nota==10) {
        printf ("Aprovado com distinção");
      }
      else if (nota>=7) {
        printf ("Aprovado");
      }
      else if ((nota>=3)&&(nota<7)) {
        printf ("Aluno em prova final!");
      }
      else if (nota<3) {
        printf ("Aluno reprovado!");
      }
  return 0;
}
