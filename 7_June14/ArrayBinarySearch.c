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
        printf("arr[%d] ? ", i) ;
        scanf("%d", &arr[i]) ;
    }

    int item ;

    printf("Enter the item to be searched ?\n") ;
    scanf("%d", &item) ;
    
    // binary search logic
    int res = -1 ;

    int lo = 0 ;
    int hi = n-1 ;

    while(lo <= hi)
    {
        int mid = (lo+hi)/2 ;

        // Right Side
        if(item > arr[mid])
        {
            lo = mid + 1 ;
        }
        // Left Side
        else if(item < arr[mid])
        {
            hi = mid - 1 ;
        }
        // Equal
        else
        {
            res = mid ;
            break ;
        }
    }

    printf("%d is present at %d index.", item, res) ;

    return 0 ;
}