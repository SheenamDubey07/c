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

    printf("\nEnter the element: ");
    scanf("%d",&ele);
    for (i=0;i<n;i++){
        if (arr[i] == ele){
        printf("%d",i+1);
        break;
        }
    }
        
       
            
    return 0;
}
