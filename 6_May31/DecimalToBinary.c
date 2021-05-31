#include<stdio.h>

int main()
{
    int n ;

    printf("Enter the decimal no. ?\n") ;
    scanf("%d", &n) ;

    int ans = 0 ;
    int mult = 1 ;

    while(n != 0)
    {
        int rem = n % 2 ;

        ans = rem * mult + ans ;

        n = n / 2 ;
        mult = mult * 10 ;
        
    }

    printf("Binary no. is %d\n", ans) ;

    return 0 ;
}