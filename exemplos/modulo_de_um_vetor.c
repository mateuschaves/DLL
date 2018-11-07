#include <stdio.h>
#include <stdlib.h>
#include "../dll.h"

int main(int argc,char **argv){
    int rs;
    // Vetor
    int vec[3] = {2,3,4};
     // Achando o Rn (dimensão) do vetor.
    int rn = sizeof(vec) / sizeof(int);
    // Chamando a função module_vector().
    float r = module_vector(vec, rn, r, rs);
    // Mostrando módulo do vetor.
    printf("R-> ");
    printf("%.2f\n", r);
    system("pause");
}
