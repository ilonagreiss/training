#include <stdio.h>
#include <stdlib.h>

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

int main(int argc, char* argv[]) {
  int prod = atoi(argv[1]);
  int i, currentNumber;

  if(argc > 1) {
    for(i = 2; i < argc; i++) {
      currentNumber = atoi(argv[i]);
      prod *= currentNumber;
    }
    printf("%i\n", prod);
    return EXIT_SUCCESS;
  } else return EXIT_FAILURE;
}
