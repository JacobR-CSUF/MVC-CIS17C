// Jacob Rodas
// CIS-17C
// Assignment #1, Part E

#include <iostream>
using namespace std;

void deleteS(char *);

int main() {
  char s[12] = "Mississippi";

  deleteS(s);

  cout << s << endl; // Prints "Miiippi"

  return 0;
}

void deleteS(char *str) { // Will use pre-declared var. to read string.
  char *writeStr = str;   // Additional var. of ptr type to rewrite string.

  /* Checks if 's' and 'S' are present per char in a string.
   * Rewrites string without those characters
   * using writeStr to track new positions. */
  while (*str != '\0') {
    if (*str != 's' && *str != 'S') {
      *writeStr = *str;
      writeStr++;
    }
    str++;
  }
  *writeStr = '\0'; // Null terminate string.
}
