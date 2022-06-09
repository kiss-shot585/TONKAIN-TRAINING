#include <stdio.h>

//we need to know the c version. We use a different parameter in the int main
// argc = count arguments argv = register all arguments called in the code
// so we call a predefined macro present in C
int main(int argc, char** argv) 
{
#if __STDC_VERSION__ >=  201710L
  printf("We are using C18!\n");
#elif __STDC_VERSION__ >= 201112L
  printf("We are using C11!\n");
#elif __STDC_VERSION__ >= 199901L
  printf("We are using C99!\n");
#else
  printf("We are using C89/C90!\n");
#endif
  return 0;
}