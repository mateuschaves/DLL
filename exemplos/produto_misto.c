#include <stdio.h>
#include <stdlib.h>
#include "dll.h"

int main(int argc,char **argv){
    
    // Vetor 1
    int vec1[3] = {3, -2, -5};
    // Vetor 2
    int vec2[3] = {1, 4, -4};
    // vetor 3
    int vec3[3] = {0, 3, 2};
    // Vetor que guarda a resposta da função
    int vet[3];
     // Achando o Rn (dimensão) do vetor
   // int rn = sizeof(vec1) / sizeof(int);
    // Chamando a função de subtração e passando os parâmetros
    int r = mixed_product(vec1, vec2, vec3, vet, r);
    // Mostrando o vetor resultante da subtração
   printf("R->");
    printf("%d", r);
    
   /* {
        if(rn != 2)
            printf("%d", r);
        else
            printf("%d", r);
    }
    */printf("\n");
    
    system("pause");
}
