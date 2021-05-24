#include<stdio.h>

int main()
{
    int n ;

    printf("Enter the number n ?\n") ;
    scanf("%d", &n) ;

    int sum = 0 ;

    int count = 1 ;
    while(count <= n)
    {
        sum = sum + count ;
        count = count + 1 ;
    }

    printf("Sum of first %d natural nos is %d\n", n, sum) ;

    return 0 ;
}