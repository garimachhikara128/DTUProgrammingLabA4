#include<stdio.h>

int main()
{

    int n1 ;
    int n2 ;

    printf("Enter two nos ?\n") ;
    scanf("%d %d", &n1, &n2) ;

    int min ;
    if(n1 < n2)
        min = n1 ;
    else
        min = n2 ;

    while(min >= 1)
    {
        if(n1 % min == 0 && n2 % min == 0)
            break ;

        min = min - 1 ;
    }

    printf("HCF of %d and %d is %d", n1, n2, min) ;
    
    return 0 ;
}