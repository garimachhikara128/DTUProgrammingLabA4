#include<stdio.h>

// declare
int addition(int , int) ;

int main()
{
    printf("hello\n") ;

    int res = addition(10, 20) ;
    printf("%d\n", res) ;
    
    printf("bye") ;
    return 0 ;
}

// define
int addition(int a , int b)
{
    int sum = a + b ;
    return sum ;
    printf("addition") ;
}