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
    
    // fo search logic
    int res = -1 ;

    for(int i = 0 ; i <= n-1 ; i = i + 1)
    {
        if(arr[i] == item)
        {
            res = i ;
            break ;
        }
    }

    printf("First Occ. of %d is at %d index.\n", item, res) ; 
    

    return 0 ;
}