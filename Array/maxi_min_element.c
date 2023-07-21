#include <stdio.h>

int main(){
    int i,j,n,arr[10];
    printf("Entre the element: ");
    scanf("%d",&n);

    printf("\nEnter the elements: ");
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    int min = arr[0];
    for(i=0;i<n;i++){
        if (max<arr[i]){
            max = arr[i];
        }
        if (min>arr[i]){
            min = arr[i];
        }
    }
    printf("Max Element: %d",max);
    printf("\nMin element: %d",min);



