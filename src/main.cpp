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

typedef struct Name {
  char name[50];
} name_t;

int main() {
  // we have to type case it since malloc returns a void*
  name_t **names = (name_t **)malloc(3 * sizeof(name_t));
  int count = 3;

  for (size_t i = 0; i < count; ++i) {
    names[i] = (name_t *)malloc(sizeof(name_t));
    strncpy(names[i]->name, "Gabriel", sizeof(names[i]->name));
    printf("%s\n", names[i]->name);
  }

  for (size_t i = 0; i < count; ++i) {
    free(names[i]);
  }

  free(names);

  return 0;
}
