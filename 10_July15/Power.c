#include<stdio.h>

int power(int , int) ;

int main()
{
    int base , exponent ;

    printf("Enter base and exponent ? ") ;
    scanf("%d %d", &base ,&exponent) ;

    int ans = power(base, exponent) ;
    printf("%d ^ %d = %d\n", base, exponent, ans) ;

    return 0 ;
}

// BP : base ^ exponent 
int power(int b, int e)
{
    // base case
    if(e == 0)
        return 1 ;

    // SP : base ^ exponent - 1
    int sp = power(b, e-1) ;

    // Self Work
    int bp = sp * b ;

    return bp ;
}