#ifdef BUILD_DLL
 #define MINHADLL __declspec(dllexport)
#else
 #define MINHADLL __declspec(dllimport)
#endif
 
MINHADLL void soma_vetores(int vec1[], int vec2[], int r[], int rn);
MINHADLL void sub_vetores(int vec1[], int vec2[], int r[], int rn);