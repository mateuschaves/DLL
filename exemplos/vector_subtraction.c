#include <stdio.h>
#include <stdlib.h>
#include "../dll.h"

int main(int argc,char **argv){
    // Vetor 1
    int vec1[3] = {1, 2, 3};
    // Vetor 2
    int vec2[3] = {3, 2, 1};
    // Vetor que guarda a resposta da função
    int r[3];
    // Achando o Rn (dimensão) do vetor
    int rn = sizeof(vec1) / sizeof(int);
    // Chamando a função de subtração e passando os parâmetros
    vector_subtraction(vec1, vec2, r, rn);
    // Mostrando o vetor resultante da soma
    printf("<");
    for(int i = 0; i < rn; i++){
        if(i != 2)
            printf("%d,", r[i]);
        else
            printf("%d", r[i]);
    }
    printf(">\n");
    system("pause");
}