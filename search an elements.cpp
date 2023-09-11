#include<stdio.h>
int findElement(int arr[], int n) ;
int main() 
{
    int arr[] = { 12, 34, 10, 6, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int position = findElement(arr, n );
 
    if (position == -1)
        printf("Element not found");
    else
        printf("Element Found at Position: %d",
               position + 1);
 
    return 0;
}
