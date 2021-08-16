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
    int i = 0 ;
    while(s1[i] == s2[i])
    {
        if(s1[i] == '\0' && s2[i] == '\0')
            break ;

        i++ ;
    }

    if(s1[i] == '\0' && s2[i] == '\0')
        printf("Strings are equal\n") ;
    else
        printf("Strings are not equal\n") ;

    return 0 ;
}