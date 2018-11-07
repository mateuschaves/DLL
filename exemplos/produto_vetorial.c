#include <stdio.h>
#include <stdlib.h>
#include "../dll.h"

int main(int argc,char **argv){
    // Vetor 1
    int vec1[3] = {1, 2, 3};
    // Vetor 2
    int vec2[3] = {4, 5, 6};
    // Vetor que guarda a resposta da função
    int vet[3];
     // Achando o Rn (dimensão) do vetor
    int rn = sizeof(vec1) / sizeof(int);
    // Chamando a função do produto vetorial e passando os parâmetros
    vector_product(vec1, vec2, vet);
    // Mostrando o vetor resultante do produto vetorial  
    printf("<");
    for(int i = 0; i < rn; i++){
        printf("%d,", vet[i]);
    }
    printf(">\n");
    system("pause");
}
