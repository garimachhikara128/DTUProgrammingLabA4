#include<stdio.h>

int Power(int , int) ;

int main()
{
    int base , exponent ;

    printf("Enter base and exponent ? ") ;
    scanf("%d %d", &base , &exponent) ;

    int ans = Power(base, exponent) ;
    printf("%d ^ %d = %d\n", base, exponent, ans) ;

    return 0 ;
}

// BP : b ^ e
int Power(int b, int e)
{
    // Base Case
    if(e == 0)
        return 1 ;
        
    // SP : b ^ e-1
    int sp = Power(b, e-1) ;

    // Self Work
    int bp = sp * b ;

    return bp ;
}