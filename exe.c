#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "dll.h"
 
int main(int argc,char **argv)
{
 int vec1[3] = {3, -4, 12};
 float r[3];
 angles_directors(vec1, r, 3);
 for(int i = 0 ; i < 3; i++)
    printf("%0.2f\n", r[i]);
 system("pause");
}