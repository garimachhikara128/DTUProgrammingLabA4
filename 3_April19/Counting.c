#include<stdio.h>

int main()
{
    int n ;

    printf("Enter the number n ?\n") ;
    scanf("%d", &n) ;

    int count = 1 ;
    while(count <= n)
    {
        printf("%d\n", count) ;
        count = count + 1 ;
    }

    return 0 ;
}