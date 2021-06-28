#include<stdio.h>
#include<limits.h>

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
    
    // max logic
    int max = INT_MIN ;
    for(int i = 0 ; i <= n-1 ; i = i + 1)
    {
        if(arr[i] > max)
            max = arr[i] ;
    }
    
    printf("Maximum of array is %d\n", max) ;

    return 0 ;
}