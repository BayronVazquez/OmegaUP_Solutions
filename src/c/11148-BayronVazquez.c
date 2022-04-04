#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long n1, n2;
    scanf("%lu %lu",&n1 ,&n2);
    if( n1%n2 == 0)
        printf("%lu", n1/n2);
    else
        printf("%lu %lu/%lu", n1/n2, n1%n2, n2);
    return 0;
}