#include <stdio.h>
#include <stdlib.h>
#include "../dll.h"

int main(int argc,char **argv){
    
    // Vetor 1
    int vec1[3] = {3, -2, -5};
    // Vetor 2
    int vec2[3] = {1, 4, -4};
    // vetor 3
    int vec3[3] = {0, 3, 2};
    // Vetor que guarda a resposta da função
    int vet[3];
    // Produto misto.
    int r = mixed_product(vec1, vec2, vec3, vet, r);
    // Mostrando produto misto
    printf("R-> ");
    printf("%d\n", r);
    system("pause");
}
