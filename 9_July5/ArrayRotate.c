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
        printf("arr[%d] ? ", i) ;
        scanf("%d", &arr[i]) ;
    }
    
    // rotations input
    int rot ;
    printf("Enter the no. of rotations ? ") ;
    scanf("%d", &rot) ;

    rot = rot % n ;

    for(int r = 1 ; r <= rot ; r++)
    {
        int temp = arr[n-1] ;

        for(int j = n-1 ; j >= 1 ; j--)
            arr[j] = arr[j-1] ;

        arr[0] = temp ;
    }

    // display
    for(int i = 0 ; i <= n-1 ; i = i + 1)
    {
        printf("%d\t", arr[i]) ;
    }

    return 0 ;
}