## Assignment 1 Part E

#### Write a function named deleteS that accepts one character pointer as a parameter and returns no value.

* The parameter is a C string.
* This function must remove all of the upper and lower case 's' letters from the string.
* The resulting string must be a valid C string.
* Your function must declare no more than one local variable in addition to the parameter; that additional variable must be of a pointer type.
* Your function must not use any square brackets and must not use the strlen or strcpy library functions.
---

```
#include <iostream>

using namespace std;

void deleteS(char*);

int main() {
  char s[12] = "Mississippi";

  deleteS(s);

  cout << s << endl; //Prints "Miiippi"

  return 0;
}

void deleteS(char* str){

}
```
