#include<stdio.h>

int main()
{

    int n1, n2 ;

    printf("Enter n1 and n2 ?\n") ;
    scanf("%d %d", &n1, &n2) ;

    int count ;

    if(n1 > n2)
        count = n1 ;
    else
        count = n2 ;

    while(count <= n1*n2)
    {

        if(count % n1 == 0 && count % n2 == 0)
            break ;

        count = count + 1 ;
    }

    printf("LCM of %d and %d is %d", n1, n2 , count) ;

    return 0 ;
}