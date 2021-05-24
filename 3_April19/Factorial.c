#include<stdio.h>

int main()
{
    int n ;

    printf("Enter the number n ?\n") ;
    scanf("%d", &n) ;

    int ans = 1 ;

    int count = 1 ;
    while(count <= n)
    {
        ans = ans * count ;
        count = count + 1 ;
    }

    printf("%d ! = %d\n", n, ans) ;

    return 0 ;
}