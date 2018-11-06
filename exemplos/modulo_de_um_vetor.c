#include <stdio.h>
#include <stdlib.h>
#include "dll.h"

int main(int argc,char **argv){
    int rs;
    
    
    // Vetor 1
    int vec[3] = {2,3,4};
     // Achando o Rn (dimensão) do vetor
    int rn = sizeof(vec) / sizeof(int);
    // Chamando a função de subtração e passando os parâmetros
    float r = module_vector(vec, rn, r, rs);
    // Mostrando o vetor resultante da subtração
   printf("R->");
    printf("%.2f", r);
    
   /* {
        if(rn != 2)
            printf("%d", r);
        else
            printf("%d", r);
    }
    */printf("\n");
    
    system("pause");
}
