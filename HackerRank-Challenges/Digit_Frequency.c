#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {



    char str[16];
    scanf("%s", str);
    int count[10] = {0};

    for (int i = 0; i < sizeof(str); i++) {

        if (str[i] >= '0' && str[i] <= '9') {
            int digit = str[i] - '0';  // Convertir el carácter a un dígito numérico
            count[digit]++;            // Incrementar el contador para ese dígito
        }

    }
    for (int j = 0; j < 10; j++) {
        printf("%d ", count[j]);
    }
    return 0;
}

