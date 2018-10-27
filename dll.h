#ifdef BUILD_DLL
 #define analytical_geometry  __declspec(dllexport)
#else
 #define analytical_geometry __declspec(dllimport)
#endif
 
analytical_geometry void vector_sum(int vec1[], int vec2[], int r[], int rn);
analytical_geometry void vector_subtraction(int vec1[], int vec2[], int r[], int rn);
analytical_geometry void vector_multiplication(int vec1[], int vec2[], int r[], int rn);
analytical_geometry void vector_division(int vec1[], int vec2[], int r[], int rn);
analytical_geometry int scalar_product(int vec1[], int vec2[], int rn);
analytical_geometry void vector_product(int vec1[], int vec2[], int vet[]);
analytical_geometry int mixed_product(int vec1[], int vec2[], int vec3[], int vet[], int r);
analytical_geometry float module_vector(int vec[], int rn, int r, float rs);
analytical_geometry void orthogonal_projection(int vec1[], int vec2[], float r[], int rn);
analytical_geometry float angle_between_vectors(int vec1[], int vec2[], int rn);
analytical_geometry float radians_to_degrees(float rad);
analytical_geometry void angles_directors(int vec[], float r[], int rn);