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

    // insertion sort logic ...
    for(int count = 1 ; count <= n-1 ; count++)
    {
        int item = arr[count] ;

        int j = count - 1 ;
        while(j >= 0 && arr[j] > item)
        {
            arr[j+1] = arr[j] ;
            j-- ;
        }

        arr[j+1]  = item ;

        // printf("Count = %d\t", count) ;
        // for(int i = 0 ; i <= n-1 ; i = i + 1)
        // {
        //     printf("%d\t", arr[i]) ;
        // }
        // printf("\n") ;
    }
    
    // display
    for(int i = 0 ; i <= n-1 ; i = i + 1)
    {
        printf("%d\t", arr[i]) ;
    }


    return 0 ;
}