#include <stdio.h>
#include <stdlib.h>
#include "../dll.h"
#define PI 3.14159265358979323846

int main(int argc,char **argv){
    float radianos = PI / 4;
    float grau = radians_to_degrees(radianos);
    printf("%.2f graus\n", grau);
    system("pause");
}
