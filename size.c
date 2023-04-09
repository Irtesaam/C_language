#include <stdio.h>
/*
Size of various functions depends upon the architecture that the system is built upon
*/
int main()
{
    printf("%lu \n", sizeof(long));
    printf("%lu \n", sizeof(char));
    printf("%lu \n", sizeof(int));
    printf("%lu", sizeof(double));
    return 0;
}
