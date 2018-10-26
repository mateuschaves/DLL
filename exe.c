#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "dll.h"
 
int main(int argc,char **argv)
{
 int vec1[3] = {3, 5, 3};
 int vec2[3] = {1, 2, 3};
 float r[3];
 projecao(vec1, vec2, r, 3);
 for(int i = 0; i < 3; i++)
    printf("%f\n", r[i]);

 system("pause");
}