#include "stdio.h"
int main() 
{
  float A, B, C;
  printf ("Digite o preço do produto A:");
  scanf ("%f", &A);
  printf ("Digite o preço do pruduto B:");
  scanf ("%f", &B);
  printf ("Digite o preço do produto C:");
  scanf ("%f", &C);

    printf ("--------------------------------\n");
  
    if ((A>B)&&(A>C)){
      printf ("%.2f é produto mais caro", A);
    }
    else if ((B>A)&&(B>C)) {
      printf ("%.2f é o produto mais caro", B);
    }
    else if ((C>A)&&(C>B)){
      printf ("%.2f é o produto mais caro", C);
    }
    if ((A<B)&&(A<C)) {
    printf ("\n%.2f é o produto mais barato", A);
  }
    else if ((B<A)&&(B<C)) {
      printf ("%.2f é o produto mais barato", B);
    }
    else if ((C<A)&&(C<B)) {
      printf ("%.2f é o produto mais barato", C);
    }

    printf ("\n--------------------------------\n");
  
  return 0;
}
