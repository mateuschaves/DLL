#include <stdio.h>
#include <stdlib.h>
#include "../dll.h"

    int main(int argc,char **argv){
        // Vetor 1
        int vec1[2] = {4, 3};
        // Vetor 2
    int vec2[2] = {1, 2};
        // Vetor que guarda a resposta da função
        float r[2];
        // Achando o Rn (dimensão) do vetor.
        int rn = sizeof(vec2) / sizeof(int);
        // Chamando a função que calcula a projeção ortogonal do vetor 1 no vetor 2.
        orthogonal_projection(vec1, vec2, r, rn);
        // Mostrando a projeção ortogonal.
        printf("<");
        for(int i = 0; i < rn; i++){
            printf("%.2f,", r[i]);
        }
        printf(">\n");
        system("pause");
    }
