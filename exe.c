#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "dll.h"
 
int main(int argc,char **argv)
{
 int vec1[10] = {1, 2, 3, 1, 1, 1, 1, 1, 9, 1};
 int vec2[10] = {1, 2, 3, 1, 1, 1, 1, 1, 9, 1};
 int r[10];
 //int rs[3];
 soma_vetores(vec1, vec2, r, sizeof(vec1) / sizeof(int));
 //sub_vetores(vec1, vec2, rs, 3);
 for(int i = 0; i < 10; i++)
    printf("%d\n", r[i]);

/*printf("\n");
for(int i = 0; i < 3; i++)
    printf("%d\n", rs[i]);
}*/
 system("pause");
}