#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Stack {
  size_t capacity;
  void **elements;
} Stack;

int main() {
  size_t capacity = 5;
  Stack *stack = (Stack *)malloc(sizeof(Stack));

  stack->elements = (void **)malloc(sizeof(void *) * capacity);
  if (stack->elements == nullptr) {
    fprintf(stderr, "Memory Allocation Error\n");
    exit(1);
  }
  stack->capacity = capacity;

  for (size_t i = 0; i < stack->capacity; ++i) {
    stack->elements[i] = (size_t *)malloc(sizeof(size_t));
    *(size_t *)(stack->elements[i]) = i;
    std::cout << "Elements: " << *(size_t *)stack->elements[i] << "\n";
  }

  for (size_t i = 0; i < stack->capacity; ++i) {
    free(stack->elements[i]);
  }

  free(stack->elements);
  free(stack);

  return 0;
};
