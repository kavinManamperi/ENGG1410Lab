#include <stdio.h>
#include <string.h>

int main() {
  char input[256];
  int letterCount[26] = {
      0}; // Array to store the count of each letter initialized to zeros
  int x = 0;

  printf("Enter text strings (press Enter on an empty line to exit):\n");

  while (x != 1) {
    fgets(input, sizeof(input),
          stdin); // get the input from the user via keyboard

    // Check for an empty line to exit the loop
    if (strlen(input) == 1 && input[0] == '\n') {
      break;
    }
    // Your Code should be implemented here
    // Iterate through the characters in the input
    for (int i = 0; i < strlen(input); i++) {
      if (input[i] >= 'A' && input[i] <= 'Z') {
        letterCount[input[i] - 'A']++;
      } else if (input[i] >= 'a' && input[i] <= 'z') {
        letterCount[(input[i] - 'A') - 32]++;
      } else {
        continue;
      }

      x = 1;
      // Check if the character is a letter (A-Z or a-z)
      // Increment the corresponding count in the array
    }
  }
  for (int i = 0; i < 26; i++) {
    printf("%c: %d\n", i + 'A', letterCount[i]);
  }
  // More of your code here to
  // Display the letter counts

  return 0;
}