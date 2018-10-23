#include <stdio.h>
#include "dll.h"
 
MINHADLL void soma_vetores(int vec1[], int vec2[], int r[], int rn)
{
    for(int i = 0; i < rn; i++)
        r[i] = vec1[i] + vec2[i];
}

MINHADLL void sub_vetores(int vec1[], int vec2[], int r[], int rn)
{
    for(int i = 0; i < rn; i++)
        r[i] = vec1[i] - vec2[i];
}
