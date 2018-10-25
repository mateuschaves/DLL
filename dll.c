#include <stdio.h>
#include "dll.h"
 
MINHADLL void soma_vetores(int vec1[], int vec2[], int r[], int rn)
{
    for(int i = 0; i < rn; i++)
        r[i] = vec1[i] + vec2[i];
}

MINHADLL void sub_vetores(int vec1[], int vec2[], int r[], int rn)
{
    for(int i = 0; i < rn; i++)
        r[i] = vec1[i] - vec2[i];
}

MINHADLL void mult_vetores(int vec1[], int vec2[], int r[], int rn)
{
    for(int i = 0; i < rn; i++)
        r[i] = vec1[i] * vec2[i];
}
MINHADLL void div_vetores(int vec1[], int vec2[], int r[], int rn)
{
    for(int i = 0; i < rn; i++)
        r[i] = vec1[i] / vec2[i];
}


MINHADLL int produto_Escalar(int vec1[], int vec2[],int rn){
   int r;
   for (int i=0; i<rn; i++){ 
    r += vec1[i] * vec2[i];
      }
      return r;
}

MINHADLL int produto_vetorial(int vec1[], int vec2[], int vet[]){
    vet[0] =  ((vec1[1]*vec2[2]) - (vec1[2]*vec2[1]));
    vet[1] =  - (((vec1[0]*vec2[2]) - (vec1[2]*vec2[0]))); 
    vet[2] =  ((vec1[0]*vec2[1]) - (vec1[1]*vec2[0]));
}

MINHADLL int produto_Misto(int vec1[], int vec2[], int vec3[], int vet[], int r){
   int i;
    r=0;
   for (i=0;i<3;i++){ 
    vet[0] =  ((vec1[1]*vec2[2]) - (vec1[2]*vec2[1]));
    vet[1] =  - (((vec1[0]*vec2[2]) - (vec1[2]*vec2[0]))); 
    vet[2] =  ((vec1[0]*vec2[1]) - (vec1[1]*vec2[0]));
}
for (i=0;i<3;i++){
r +=vet[i]*vec3[i];
}
return r;
}
