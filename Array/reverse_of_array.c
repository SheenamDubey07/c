#include <stdio.h>

void rev (int arr[]){
    int temp;
    for (int i=0;i<7/2;i++){
        temp = arr[i];
        arr[i] = arr[6-i];
        arr[6-i] = temp;
    }
}

int main(){
    int i;
    int arr[] = {1,2,3,4,5,6,67};
    printf("Before reversing: ");
    for (i = 0;i<7;i++){
    printf("%d ",arr[i]);
   }
   printf ("\nAfter reversing: ");
   rev(arr);
   for (i = 0;i<7;i++){
    printf("%d ",arr[i]);
   }

    return 0;
}
