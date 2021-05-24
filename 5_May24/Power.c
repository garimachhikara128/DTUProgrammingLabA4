#include<stdio.h>

int main()
{

    int base, exponent ;

    printf("Enter base and exponent ?\n") ;
    scanf("%d %d", &base, &exponent) ;

    int ans = 1 ;

    int count = 1 ;
    while(count <= exponent)
    {
        ans = ans * base ;
        count = count + 1 ;
    }

    printf("%d ^ %d = %d\n", base, exponent, ans) ;

    return 0 ;
}