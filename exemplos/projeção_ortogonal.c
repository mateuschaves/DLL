#include <stdio.h>
#include <stdlib.h>
#include "dll.h"

int main(int argc,char **argv){

    
    // Vetor 1
    int vec1[3] = {1, 0, 5};
    // Vetor 2
   int vec2[3] = {3, 1, -7};
    // Vetor que guarda a resposta da função
    float r[3];
     // Achando o Rn (dimensão) do vetor
    int rn = sizeof(vec2) / sizeof(int);
    // Chamando a função de subtração e passando os parâmetros
    orthogonal_projection(vec1, vec2, r, rn);
   // Mostrando o vetor resultante do produto vetorial  
    printf("<");
    for(int i = 0; i < rn; i++)
     printf("%.2f,", r[i]);
    /*{
        if(i != 3)
            printf("%d,", vet[i]);
        else
            printf("%d", vet[i]);
    }*/
    printf(">\n");
    system("pause");
}
