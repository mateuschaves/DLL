#include <stdio.h>
#include <stdlib.h>
#include "dll.h"

int main(int argc,char **argv){

    
    // Vetor 1
    int vec1[2] = {5, 1};
    // Vetor 2
   int vec2[2] = {-2, 10};
    // Vetor que guarda a resposta da função
     // Achando o Rn (dimensão) do vetor
    int rn = sizeof(vec2) / sizeof(int);
    // Chamando a função de subtração e passando os parâmetros
    float r = angle_between_vectors(vec1, vec2, rn);
   // Mostrando o vetor resultante do produto vetorial  
    printf("R->");
    
     printf("%.2f", r);
    /*{
        if(i != 2)
            printf("%d,", vet[i]);
        else
            printf("%d", vet[i]);
    }*/
   
    system("pause");
}
