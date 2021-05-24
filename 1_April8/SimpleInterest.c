#include<stdio.h>

int main()
{
    int p, r, t ;

    printf("Enter Principle ?") ;
    scanf("%d", &p) ;

    printf("Enter Rate ?") ;
    scanf("%d", &r) ;

    printf("Enter Time ?") ;
    scanf("%d", &t) ;

    int si = (p * r * t) / 100 ; 

    printf("Simple Interest is %d Rs.", si) ;
    
    return 0 ;
}