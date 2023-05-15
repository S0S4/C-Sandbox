#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sumValue(int a){

    int b = 0;

    while(a){
        b += a%10;
        a /= 10;
    }

    return b;
}


int main() {

    int n = 0;
    scanf("%d", &n);
    printf("%d", sumValue(n));

    return 0;
}


