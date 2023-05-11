#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  	int one = 0;
    int two = 0;

    float oneF = 0;
    float twoF =0;

    scanf("%d %d", &one, &two);
    scanf("%f %f", &oneF, &twoF);

    printf("%d %d \n", one+two, one-two);
    printf("%.1f %.1f", oneF+twoF, oneF-twoF);
    return 0;
}
