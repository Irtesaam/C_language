#include <stdio.h>
/*
This is intro to various operators in C
*/
int main(int argc, char const *argv[])
{
    float a, b;
    printf("Enter number a : \n");    
    scanf("%f", &a);        
    printf("Enter number b : \n");
    scanf("%f", &b);
    printf("a+b=%f\n", a+b);
    printf("a-b=%f\n", a-b);
    printf("a*b=%f\n", a*b);
    printf("a/b=%f\n", a/b);

    return 0;
}