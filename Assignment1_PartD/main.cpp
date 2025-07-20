// Jacob Rodas
// CIS-17C
// Assignment #1, Part D

#include <iostream>
using namespace std;

// return true if two C strings are equal
bool match(const char str1[], const char str2[]) {
  while (*str1 != 0 && *str2 != 0) { // dereferenced to compare char's.
    if (*str1 != *str2)              // dereferenced.
      return false;
    str1++; // advance to the next character
    str2++;
  }
  return *str1 == *str2; // dereferenced.
}

int main() {
  char a[10] = "pointy";
  char b[10] = "pointless";
  if (match(a, b))
    cout << "They're the same!\n";
  return 0;
}
