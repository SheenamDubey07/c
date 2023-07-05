#include <stdio.h>

int main(){

   int arr[10],i,n,ele;

    printf("Enter the n: ");
    scanf ("%d",&n);

    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("\nArray: ");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    } 

    printf("Enter the element: ");
    scanf("%d",&ele);
    for (i=ele;i<n;i++){
        // if(ele == arr[i]);
        printf("%d",arr[i]);
    }
   
    return 0;
}
