#include<stdio.h>

void PDI(int) ;

int main()
{
    PDI(3) ;
    return 0 ;
}

// n ... 1 ... n
void PDI(int n)
{
    if(n == 0)
        return ;
        
    printf("hii %d\n", n) ;

    // n-1 ... 1 ... n-1
    PDI(--n) ;

    printf("bye %d\n", n) ;
}