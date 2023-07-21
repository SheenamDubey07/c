#include <stdio.h>

int main(){

    int arr[10],i,n,temp,ele;

    printf("Enter the n: ");
    scanf("%d",&n);
    printf("\n entre Elements: ");
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nGiven Array: ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int max = arr[0];
    int s_max = arr[1];
    for (i=0;i<n;i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    for (i=0;i<n;i++){
        if (arr[i]< max|| arr[i]>s_max){
            s_max = arr[i];
        }
    }
    printf("\nSec Max = %d",s_max);


    return 0;
}
