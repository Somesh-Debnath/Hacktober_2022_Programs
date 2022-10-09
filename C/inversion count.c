#include <stdio.h>  

/* The program will print the count of total number of inversions possible from an random array */  
int  Inversion ( int arr[] , int n )  
{  
    int ic = 0 , i , j ;  
    for ( i = 0 ; i < n ; i++ )                  // This loop will point the target index //  
    {  
        for ( j = i + 1 ; j < n ; j++ )                   // This loop will compare the target  //  
// index with all the other values arriving after it. //  
        {  
            if ( arr [ i ] > arr [ j ] )  
            {  
                ic = ic + 1 ;  
            }  
        }  
    }  
    return ic ;  
}  
int main()  
{  
    int i , array[ 100 ] , n , count ;  
    printf ( " Enter the number of elements present in the array : " ) ;  
    scanf ( "%d" , &n ) ;  
    printf( " Enter array: " ) ;  
    for ( i = 0 ;  i < n ; i++ )  
    {  
        scanf ( "%d" , &array[ i ] ) ;  
    }  
    count = Inversion ( array , n  ) ;  
    printf ( " Printing the total number of inversions possible from the above array: %d " , count ) ;  
      
    return 0 ;  
}  
