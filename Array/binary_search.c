#include <stdio.h>

int main(){
    int i,n,arr[10],mid ,low ,high,search;

    printf("Enter N: ");
    scanf("%d",&n);

    printf("\nEntre the element: ");
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }


    printf("\nEnter the search: ");
    scanf("%d",&search);

    low = 0;
    high = n-1;
    mid = (low+high)/2;
    while(low<= high){
        if(arr[mid]< search)
            low = mid+ 1;
        
        else if(arr[mid] == search){
            printf ("Location: %d",mid);
            break;
        }
        else 
            high = mid -1 ;
            mid = (low+ high)/2;

    }
    if (low>high){
        printf("Element is Not present in this array");
    }

    return 0;
}

