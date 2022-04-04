#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    scanf("%i %i",&n1, &n2);
    if(n1 > n2){
        printf("%i\n",n1);
        printf("%i\n",n2);
    }else{
        printf("%i\n",n2);
        printf("%i\n",n1);
    }

    return 0;
}