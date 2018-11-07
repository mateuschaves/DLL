#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "../dll.h"

int main(int argc,char **argv){
    // Vetor 1
    int vec1[4] = {2, 4, 3, 3};
    // Vetor 2
    int vec2[4] = {3, 2, 1, 1};
    // variavel que guarda a resposta da função
    int r;
    // Achando o Rn (dimensão) do vetor
    int rn = sizeof(vec1) / sizeof(int);
    // Chamando a função de produto escalar e passando os parâmetros
    r = scalar_product(vec1, vec2, rn);
    // Mostrando o valor resultante resultante do produto escalar
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
