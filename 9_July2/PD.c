#include<stdio.h>

void PD(int) ;

int main()
{
    PD(8) ;
    return 0;
}

// BP : n -> 1
void PD(int n)
{
    if(n == 0)
        return ;

    // Self Work : n print
    printf("%d\n", n) ;

    // SP : n-1 -> 1
    PD(n-1) ;
}