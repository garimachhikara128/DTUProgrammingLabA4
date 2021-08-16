#include<stdio.h>

void PI(int) ;

int main()
{
    printf("hello\n") ;
    PI(3) ;
    printf("bye\n") ;

    return 0 ;
}

// BP : 1 -> n counting increasing order
void PI(int n)
{
    // Base Case
    if(n == 0)
        return ;

    // SP : 1 -> n-1 counting
    PI(n-1) ;

    // Self Work
    printf("%d\n", n) ;
}