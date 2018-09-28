#include <stdio.h>
#include <stdlib.h>

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

int main(int argc, char* argv[]) {
  int diff = atoi(argv[1]);
  int i, currentNumber;

  if(argc > 1) {
    for(i = 2; i < argc; i++) {
      currentNumber = atoi(argv[i]);
      diff -= currentNumber;
    }
    printf("%i\n", diff);
    return EXIT_SUCCESS;
  } else return EXIT_FAILURE;
}
