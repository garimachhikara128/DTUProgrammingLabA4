#include<stdio.h>

int main()
{
    // string create or character array create
    char str[20] ;

    // user input
    printf("Enter the string ? ") ;
    scanf("%s", str) ;

    // logic length
    int i = 0 ;
    while(str[i] != '\0')
    {
        i++ ;
    }

    printf("Length of %s is %d\n", str, i) ;
    
    return 0 ;
}