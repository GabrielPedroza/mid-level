/*#include <stdio.h>*/
/*#include <iostream>*/
/**/
/*#include "intro.h"*/
/**/
/*int main() {*/
/*  std::cout << "Hello world!" << std::endl;*/
/**/
/*  introPrint();*/
/**/
/*  return 0;*/
/*}*/

#include <cstdio>
#include <iostream>

typedef struct Test {
  char name[50];
  unsigned int age;
} test_t;

int main() {

  test_t token = {
      .name = "Gabriel",
      .age = 5,
  };

  int count = 3;

  test_t **pointer_array = (test_t **)malloc(count * sizeof(test_t *));
  ;
  if (pointer_array == NULL) {
    fprintf(stderr, "Memory allocation failed\n");
    return 1;
  }

  pointer_array[0] = &token;

  printf("this is the value of the token from the pointer: %s\n",
         (*pointer_array[0]).name);

  free(pointer_array);
  return 0;
}
