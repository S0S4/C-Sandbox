#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char* s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

    char* token = strtok(s, " "); // strtok is a function that take a string and separate it into tokens.


    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " "); // Because of the implementation of strtok, when you pass NULL as main argument in successive calls, the function will continue where it left off in the previous call
    }
    return 0;
}
