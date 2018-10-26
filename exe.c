#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "dll.h"
 
int main(int argc,char **argv)
{
 int vec1[2] = {5, 1};
 int vec2[2] = {-2, 10};
 float r[3];
 printf("%.2f\n", angulo(vec1, vec2, 2));
 system("pause");
}