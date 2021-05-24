#include<stdio.h>

int main()
{
    int n ;
    int ans = 0 ;

    printf("Enter n ?\n") ;
    scanf("%d", &n) ;

    while(n != 0)
    {
        int rem = n % 10 ;
        ans = ans * 10 + rem ;
        n = n / 10 ;
    }

    printf("Reverse is %d\n", ans) ;

    return 0 ;
}