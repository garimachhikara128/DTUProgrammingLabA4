#include<stdio.h>

int main()
{
    int n ; // create

    printf("Enter the number ?\n") ; // user msg
    scanf("%d", &n) ; // no. input

    int rem = n % 2 ; // find out the rem on dividing by 2

    if(rem == 0) // check if rem is equal to 0 
    {
        printf("%d is even.\n", n) ; // print even
    }
    else
    {
        printf("%d is odd.\n", n) ; // print odd
    }

    return 0 ;
}