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
    
    // array reverse
    int i = 0 ;
    int j = n-1 ;
    while(i <= j)
    {
        int temp = arr[i] ;
        arr[i] = arr[j] ;
        arr[j] = temp ;

        i++ ;
        j-- ;
    }

    // display
    for(int i = 0 ; i <= n-1 ; i = i + 1)
    {
        printf("%d\t", arr[i]) ;
    }


    return 0 ;
}