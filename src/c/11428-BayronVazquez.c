#include <stdio.h>

int main(int argc, char *argv[])
{
    int day, month, year;

    while( scanf("%i/%i/%i", &day, &month, &year) != EOF)
    {
        if( year >= 74 && year <= 99)
        {
            printf("%i/%i/19%i\n", day, month, year);
        }
        else
        {
            printf("%i/%i/20%i\n", day, month, year);
        }
    }
    return 0;
}
