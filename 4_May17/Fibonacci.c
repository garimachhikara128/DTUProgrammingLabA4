#include<stdio.h>

int main()
{
    int n ;

    printf("Enter n ?") ;
    scanf("%d", &n) ;

    int a = 0 ;
    int b = 1 ;

    int count = 0 ;
    while(count <= n)
    {
        int sum = a + b ;

        printf("%d\t", a) ;

        // update
        a = b ;
        b = sum ;

        count = count + 1 ;

    }

    return 0 ;
}