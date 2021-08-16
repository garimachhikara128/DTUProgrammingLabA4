#include<stdio.h>

// declare
void PI() ;

int main()
{
    printf("hello\n") ;
    PI(7) ;
    printf("bye\n") ;
    return 0 ;
}

// define
// BP : 1 -> n counting
void PI(int n)
{
    if(n == 0)
        return ;

    // SP : 1 -> n-1
    PI(n-1) ;

    // Self work : print
    printf("%d\n", n) ;
}