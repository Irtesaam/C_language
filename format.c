#include <stdio.h>
//#define PI 3.1415

int main(int argc, char const *argv[])
{
    int a=7;
    const float b=3.1415;
    //b=2.219
    //PI=1.233;
    //b=1.616; //since b is defined to be constant so when value of b is changed, it shows error
    printf("The value of a is %-7d and value of b is %9.6f", a, b);
/*
%9.6f means print that floating number with 9 characters and 6 digit decimal accuracy. Since b is of only 6 characters+2 more 
characters due to decimal accuracy, so it will include extra 1 digit space and then will print the statement. If its written with 
-ve sign then it ll leave space after that word
*/

    return 0;
}

