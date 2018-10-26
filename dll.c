#include <stdio.h>
#include "dll.h"
#include <math.h>
 
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

MINHADLL void produto_vetorial(int vec1[], int vec2[], int vet[]){
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
MINHADLL float modulo_vetor(int vec[], int rn, int r, float rs){
    for(int i = 0; i < rn; i++){ 
        r += (vec[i] * vec[i]);
        rs = sqrt(r);
    }
    return rs;
}

MINHADLL void projecao(int vec1[], int vec2[], float r[], int rn){
    int pe = produto_Escalar(vec1, vec2, rn);
    int modulo = 0;
    for(int i = 0; i < rn; i++){
        modulo += pow(vec1[i], 2);
    }
    float k = (float) pe / (float) modulo;
    for(int i = 0; i < rn; i++){
        r[i] = k*vec1[i];
    }
}

MINHADLL float angulo(int vec1[], int vec2[], int rn){
    return radianos_to_grau(acos(produto_Escalar(vec1, vec2, rn) / (modulo_vetor(vec1, rn, 0, 0) * modulo_vetor(vec2, rn, 0, 0))));
}

MINHADLL float radianos_to_grau(float rad){
    return rad * 57.2958;
}

MINHADLL void angulos_diretores(int vec[], float r[], int rn){
    float mod = modulo_vetor(vec, rn, 0, 0);
    for(int i =0; i < rn; i++){
        r[i] = radianos_to_grau(acos(vec[i] / mod));
    }
}

