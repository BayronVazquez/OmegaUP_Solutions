#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int main()
{
    char c, cmp;
    uint16_t contador=0;

    scanf("%c",&cmp);

    while( (c = getchar()) !=  EOF ){
        if( c == cmp )
            ++contador;
    }
    printf("%u",contador);
    return 0;
}