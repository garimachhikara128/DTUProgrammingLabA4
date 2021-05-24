#include<stdio.h>

int main()
{
    int n ;

    printf("Enter n ?\n") ;
    scanf("%d", &n) ;

    int factors = 0 ;

    int count = 2 ;
    while(count * count <= n) // count <= sqrt(n)
    {
        if(n % count == 0)
        {
            factors = factors + 1 ;
            break ;
        }

        count = count + 1 ;
    }

    if(factors == 0)
        printf("%d is prime", n) ;
    else
        printf("%d is not prime", n) ;

    return 0 ;
}