	/* Media 2 */
#include <stdio.h>

int main (void) {
  float notaA,
  	notaB,
  	notaC,
  	media;
    scanf("%f", &notaA);
    scanf("%f", &notaB);
    scanf("%f", &notaC);
  notaA = notaA * 2.0;
  notaB = notaB * 3.0;
  notaC = notaC * 5.0;
  media = (notaA + notaB + notaC) / 10.0;
   printf ("MEDIA = %.1f\n", media);
 return 0;
}
