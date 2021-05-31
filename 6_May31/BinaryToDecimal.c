#include<stdio.h>

int main()
{
    int n ;

    printf("Enter the binary no. ?\n") ;
    scanf("%d", &n) ;

    int ans = 0 ;
    int mult = 1 ;

    while(n != 0)
    {
        int rem = n % 10 ;

        ans = rem * mult + ans ;

        n = n / 10 ;
        mult = mult * 2 ;
        
    }

    printf("Decimal no. is %d\n", ans) ;

    return 0 ;
}