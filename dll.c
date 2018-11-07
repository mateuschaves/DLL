#include <stdio.h>
#include "dll.h"
#include <math.h>

analytical_geometry void vector_sum(int vec1[], int vec2[], int r[], int rn)
{
    for(int i = 0; i < rn; i++)
        r[i] = vec1[i] + vec2[i];
}

analytical_geometry void vector_subtraction(int vec1[], int vec2[], int r[], int rn)
{
    for(int i = 0; i < rn; i++)
        r[i] = vec1[i] - vec2[i];
}

analytical_geometry void vector_multiplication(int vec1[], int vec2[], int r[], int rn)
{
    for(int i = 0; i < rn; i++)
        r[i] = vec1[i] * vec2[i];
}
analytical_geometry void vector_division(int vec1[], int vec2[], int r[], int rn)
{
    for(int i = 0; i < rn; i++)
        r[i] = vec1[i] / vec2[i];
}


analytical_geometry int scalar_product(int vec1[], int vec2[],int rn){
   int r;
   for (int i=0; i<rn; i++){ 
    r += vec1[i] * vec2[i];
      }
      return r;
}

analytical_geometry void vector_product(int vec1[], int vec2[], int vet[]){
    vet[0] =  ((vec1[1]*vec2[2]) - (vec1[2]*vec2[1]));
    vet[1] =  - (((vec1[0]*vec2[2]) - (vec1[2]*vec2[0]))); 
    vet[2] =  ((vec1[0]*vec2[1]) - (vec1[1]*vec2[0]));
}

analytical_geometry int mixed_product(int vec1[], int vec2[], int vec3[], int vet[], int r){
   int i;
    r=0;
   for (i=0;i<3;i++){ 
    vet[0] =  ((vec1[1]*vec2[2]) - (vec1[2]*vec2[1]));
    vet[1] =  - (((vec1[0]*vec2[2]) - (vec1[2]*vec2[0]))); 
    vet[2] =  ((vec1[0]*vec2[1]) - (vec1[1]*vec2[0]));
}
for (i=0;i<3;i++){
r +=vet[i]*vec3[i];
}
return r;
}
analytical_geometry float module_vector(int vec[], int rn, int r, float rs){
    for(int i = 0; i < rn; i++){ 
        r += (vec[i] * vec[i]);
        rs = sqrt(r);
    }
    return rs;
}

analytical_geometry void orthogonal_projection(int vec1[], int vec2[], float r[], int rn){
    int pe = scalar_product(vec1, vec2, rn);
    int modulo = 0;
    for(int i = 0; i < rn; i++){
        modulo += pow(vec1[i], 2);
    }
    float k = (float) pe / (float) modulo;
    for(int i = 0; i < rn; i++){
        r[i] = k*vec1[i];
    }
}

analytical_geometry float angle_between_vectors(int vec1[], int vec2[], int rn){
    return radians_to_degrees(acos(scalar_product(vec1, vec2, rn) / (module_vector(vec1, rn, 0, 0) * module_vector(vec2, rn, 0, 0))));
}

analytical_geometry float radians_to_degrees(float rad){
    return rad * 57.2958;
}

analytical_geometry void angles_directors(int vec[], float r[], int rn){
    float mod = module_vector(vec, rn, 0, 0);
    for(int i =0; i < rn; i++){
        r[i] = radians_to_degrees(acos(vec[i] / mod));
    }
}
