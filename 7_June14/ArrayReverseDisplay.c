#include<stdio.h>

int main()
{
    int n ;

    // size of array 
    printf("Enter the no. of elements in array ?\n") ;
    scanf("%d", &n) ;

    // create an array
    int arr[n] ;

    // input array
    for(int i = 0 ; i <= n-1 ; i = i + 1)
    {
        printf("arr[%d] ?", i) ;
        scanf("%d", &arr[i]) ;
    }
    
    // display
    for(int i = n-1 ; i >= 0 ; i = i - 1)
    {
        printf("%d\t", arr[i]) ;
    }


    return 0 ;
}