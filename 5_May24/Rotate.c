#include<stdio.h>

int main()
{
    int n , rot ;

    printf("Enter N ?\n") ;
    scanf("%d", &n) ;

    printf("Enter Rotations ?\n") ;
    scanf("%d", &rot) ;

    // no. of digits
    int temp = n ;
    int nod = 0 ;
    while(temp != 0)
    {
        nod = nod + 1 ;
        temp = temp / 10 ;
    }

    // 10 ^ nod-1
    int mult = 1 ;

    int count = 1 ;
    while(count <= nod-1)
    {
        mult = mult * 10 ;
        count = count + 1 ;
    }

    // logic ...
    rot = rot % nod ;
    
    int r = 1 ;
    while(r <= rot)
    {
        int ld = n % 10 ;
        int ron = n / 10 ;

        int ans = ld * mult + ron ;
        
        n = ans ;
        r = r + 1 ;
    }

    printf("Rotated no. is %d\n", n) ;

    return 0 ;
}