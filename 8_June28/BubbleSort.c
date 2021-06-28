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

    // bubble sort logic ...
    for(int count = 0 ; count <= n-2 ; count++)
    {
        for(int j = 0 ; j <= n - count - 2 ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j] ;
                arr[j] = arr[j+1] ;
                arr[j+1] = temp ;
            }
        }

        // printf("Count = %d : \t", count) ;
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