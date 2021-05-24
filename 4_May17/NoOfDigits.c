#include<stdio.h>

int main()
{
    int n ;
    
    printf("Enter n ?\n") ;
    scanf("%d", &n) ;

    int count = 0 ;

    while(n != 0)
    {
        count = count + 1 ;       
        n = n / 10 ;
    }

    printf("No. of digits are %d\n", count) ;

    return 0 ;
}