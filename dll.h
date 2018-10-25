#ifdef BUILD_DLL
 #define MINHADLL __declspec(dllexport)
#else
 #define MINHADLL __declspec(dllimport)
#endif
 
MINHADLL void soma_vetores(int vec1[], int vec2[], int r[], int rn);
MINHADLL void sub_vetores(int vec1[], int vec2[], int r[], int rn);
MINHADLL void mult_vetores(int vec1[], int vec2[], int r[], int rn);
MINHADLL void div_vetores(int vec1[], int vec2[], int r[], int rn);
MINHADLL int produto_Escalar(int vec1[], int vec2[], int rn);
MINHADLL int produto_vetorial(int vec1[], int vec2[], int vet[]);
MINHADLL int produto_Misto(int vec1[], int vec2[], int vec3[], int vet[], int r);
