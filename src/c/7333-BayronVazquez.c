#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    scanf("%i %i",&n1, &n2);
    if(n1 < n2){
        printf("%i",n1);
    }else{
        printf("%i",n2);
    }

    return 0;
}