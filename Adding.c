#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float c,d;
    scanf("%d%d\n", &a, &b);
    scanf("%f%f\n", &c, &d);
    printf("%d %d\n", (a+b), (a-b));
    printf("%.1f %.1f\n", (c+d), (c-d));

    // Can use .1 to represent decimal places, and leaving spaces in printf will allow a space to form.
    return 0;
}
