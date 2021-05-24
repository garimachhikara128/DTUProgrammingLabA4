#include<stdio.h>

int main()
{

    int divident ;
    int divisor ;

    printf("Enter two nos ?\n") ;
    scanf("%d %d", &divident, &divisor) ;

    while(1)
    {
        int rem = divident % divisor ;

        if(rem == 0)
            break ;

        // update
        divident = divisor ;
        divisor = rem ;
    }

    printf("HCF is %d", divisor) ;
    
    return 0 ;
}