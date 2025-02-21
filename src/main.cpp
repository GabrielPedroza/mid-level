#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Name {
  char name[50];
} name_t;

int main() {
  // we have to type case it since malloc returns a void*
  name_t **names = (name_t **)malloc(3 * sizeof(name_t *));
  size_t count = 3;

  for (size_t i = 0; i < count; ++i) {
    names[i] = (name_t *)malloc(sizeof(name_t));
    // snprintf guarantees to print out null terminator. strncpy does not!
    snprintf(names[i]->name, sizeof(names[i]->name), "Gabriel");
    printf("%s\n", names[i]->name);
  }

  for (size_t i = 0; i < count; ++i) {
    free(names[i]);
  }

  free(names);

  return 0;
}
