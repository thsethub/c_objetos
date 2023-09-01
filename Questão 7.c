#include <stdio.h>

int main()
{
  //A e B são, respectivamente, o primeiro número e o segundo número;
  float A, B;
      printf ("Digite o primeiro número\n");
      scanf ("%f", &A);
      printf ("Digite o segundo número\n");
      scanf ("%f", &B);
  
  if (A>B){
        printf ("%.1f É o número maior\n",A);
  }
  else if (A<B){
        printf ("%.1f É o número maior\n",B);
  }
  
  return 0;
}
