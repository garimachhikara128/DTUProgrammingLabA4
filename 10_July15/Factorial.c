#include<stdio.h>

int factorial(int) ;

int main()
{
    int n ;

    printf("Enter n ? ") ;
    scanf("%d", &n) ;

    int ans = factorial(n) ;

    printf("%d ! = %d\n", n , ans) ;
    return 0 ;
}

// BP : n !
int factorial(int n)
{
    if(n == 0)
        return 1 ;

    // SP : n-1 !
    int fnm1 = factorial(n-1) ; 

    // Self Work
    int fn = fnm1 * n ;

    return fn ;
}