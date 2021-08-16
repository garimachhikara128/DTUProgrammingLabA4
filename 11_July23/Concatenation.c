#include<stdio.h>

int main()
{
    char s1[20] ;
    char s2[20] ;

    printf("Enter the string 1 ? ") ;
    scanf("%s", s1) ;

    printf("Enter the string 2 ? ") ;
    scanf("%s", s2) ;

    // logic ...
    int len = 0 ;
    while(s1[len] != '\0')
        len++ ;

    // logic concatenation ...
    int i = len ;
    int j = 0 ;

    while(s2[j] != '\0')
    {
        s1[i] = s2[j] ;

        i++ ;
        j++ ;
    }

    s1[i] = '\0' ;

    printf("s1 : %s\ts2 : %s", s1, s2) ;

    return 0 ;
}