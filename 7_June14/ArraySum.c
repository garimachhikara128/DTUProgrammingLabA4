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
    
    // sum logic
    int sum = 0 ;
    for(int i = 0 ; i <= n-1 ; i = i + 1)
    {
        sum = sum + arr[i] ;
    }
    
    printf("Sum is %d\n", sum) ;

    return 0 ;
}