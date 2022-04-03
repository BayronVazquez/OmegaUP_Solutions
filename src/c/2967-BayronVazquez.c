#include <stdio.h>


int main()
{
    // Definicion de las variables
    unsigned short int palitos[4];
    unsigned short int cont;
    scanf("%hu %hu %hu %hu", &palitos[0], &palitos[1], &palitos[2], &palitos[3]);


    for(unsigned short int i = 0; i < 4; ++i )
    {
        cont = 0;
        for(unsigned short int j = 0; j < 4; ++j )
        {
            if( palitos[i] == palitos[j])
            {
                ++cont;
            }
        }
        if( cont >= 3)
        {
            printf("1");
            return 0;
        }
    }
    printf("0");
    return 0;
}