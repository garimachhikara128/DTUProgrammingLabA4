#include<stdio.h>

int main()
{
    int n ;

    printf("Enter n ?\n") ;
    scanf("%d", &n) ;

    int sum = 0 ;

    while(n != 0)
    {
        int rem = n % 10 ;
        sum = sum + rem ;
        n = n / 10 ;
    }

    printf("Sum of digits is %d\n", sum) ;

    return 0 ;
}