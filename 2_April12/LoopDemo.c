#include<stdio.h>

int main()
{
    int count = 1 ; // initialization

    while(count <= 3) // condition
    {
        printf("hello world\n") ;
        count = count + 1 ; // re-initialize
    }

    printf("bye") ;

    return 0 ;
}