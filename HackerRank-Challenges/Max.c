#include <stdio.h>


int max_of_four(int a, int b, int c, int d){

    int numbers[4] = {a, b, c, d};
    int bigNumber = 0;

    for(int i = 0; i < 3; i++){

        bigNumber = numbers[i] > numbers[i+1] ? numbers[i] : numbers[i+1];
    }

    return bigNumber;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
