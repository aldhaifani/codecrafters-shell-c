#include <stdio.h>

int main() {

  // REPL
  while (1) {
    printf("$ ");
    fflush(stdout);

    // Wait for user input
    char input[100];
    fgets(input, 100, stdin);

    // Remove newline character
    for (int i = 0; i < 100; i++) {
      if (input[i] == '\n') {
        input[i] = '\0';
        break;
      }
    }
    printf("%s: not found\n", input);
   }

  return 0;
}
