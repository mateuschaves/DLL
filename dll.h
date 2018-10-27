#ifdef BUILD_DLL
 #define analytical_geometry  __declspec(dllexport)
#else
 #define analytical_geometry __declspec(dllimport)
#endif
 
analytical_geometry void soma_vetores(int vec1[], int vec2[], int r[], int rn);
analytical_geometry void sub_vetores(int vec1[], int vec2[], int r[], int rn);
analytical_geometry void mult_vetores(int vec1[], int vec2[], int r[], int rn);
analytical_geometry void div_vetores(int vec1[], int vec2[], int r[], int rn);
analytical_geometry int produto_Escalar(int vec1[], int vec2[], int rn);
analytical_geometry void produto_vetorial(int vec1[], int vec2[], int vet[]);
analytical_geometry int produto_Misto(int vec1[], int vec2[], int vec3[], int vet[], int r);
analytical_geometry float modulo_vetor(int vec[], int rn, int r, float rs);
analytical_geometry void projecao(int vec1[], int vec2[], float r[], int rn);
analytical_geometry float angulo(int vec1[], int vec2[], int rn);
analytical_geometry float radianos_to_grau(float rad);
analytical_geometry void angulos_diretores(int vec[], float r[], int rn);