#include <stdio.h>
#include <stdlib.h>

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

int main(int argc, char* argv[]) {
  int sum = 0;
  int i, currentNumber;
  
  if(argc > 1) {
    for(i = 1; i < argc; i++) {
      currentNumber = atoi(argv[i]);
      sum += currentNumber;
    }
    printf("%i\n", sum);
    return EXIT_SUCCESS;
  } else return EXIT_FAILURE;
}
