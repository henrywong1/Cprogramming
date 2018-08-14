#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char c;
    char charArray[100];
    char sentArray[100];
    scanf("%c%s%\n", &c, &charArray);
    scanf("%[^\n]%*c", &sentArray);
    printf("%c\n%s\n%s", c, charArray, sentArray);
    return 0;
}
