#include <stdio.h>

#include "data_types.h"

void data_types()
{
    char a = 'a';          // single character 1 byte (-128 to 127) %c
    unsigned char b = 'b'; // 1 byte (0 to 255) %c

    char c[] = "Hello World!"; // string of characters %s
    // char c[] = "Hello World!" is 13 bytes because sizeof(char) is 1 byte and
    // there are 12 characters in the string plus the null terminator \0 which
    // is 1 byte and indicates the end of the string
}