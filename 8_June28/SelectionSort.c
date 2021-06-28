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

    // selection sort logic ...
    for(int count = 0 ; count <= n-2 ; count++)
    {
        // minidx will store the index of minimum value
        int  minidx = count ;

        for(int j = count + 1 ; j <= n-1 ; j++)
        {
            if(arr[j] < arr[minidx])
                minidx = j ;
        }

        // swap
        int temp = arr[count] ;
        arr[count] = arr[minidx] ;
        arr[minidx] = temp ;

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