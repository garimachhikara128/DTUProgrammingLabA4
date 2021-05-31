#include<stdio.h>

int main()
{

    int a = 10 ;
    int b = 20 ;

    printf("Before Swapping : %d\t%d\n", a, b) ;

    // swap using extra variable
    int temp = a ;
    a = b ;
    b = temp ;

    printf("After Swapping : %d\t%d\n", a, b) ;

    // swap without using extra variable
    a = a + b ;
    b = a - b ;
    a = a - b ;

    printf("After Swapping : %d\t%d\n", a, b) ;

    return 0 ;
}