#include<stdio.h>

int main()
{
    char str[20] ;

    printf("Enter the string ? ") ;
    scanf("%s", str) ;

    // logic ...
    int count = 0 ;

    for(int i = 0 ; str[i] != '\0' ; i++)
    {
        char ch = str[i] ;
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            count++ ;
    }

    printf("No. of vowels in %s is %d\n", str , count) ;

    return 0 ;
}