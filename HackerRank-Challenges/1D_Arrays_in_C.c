#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a = 0;
    int b = 0;

    scanf("%d", &a);


    int* arr = (int*)malloc(a * sizeof(int)); // ARR points to the start of the new memory

    int suma = 0;

    for (int i = 0; i < a; i++) {

        fscanf(stdin, "%d", &arr[i]); // Using fscanf for taking formatted input, EJ: 1 2 11

        suma += arr[i];

    }

    printf("%d", suma);
    free(arr);

    return 0;
}

