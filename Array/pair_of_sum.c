#include <stdio.h>

int main(){
    int arr[10],i,n,m;
    printf("Enter the range: ");
    scanf("%d",&n);
    printf("\n Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf ("\n Enter the sum: ");
    scanf("%d",&m);
    for(i=0;i<n;i++){
        for (int j = i+1;j<n;j++){
            if (arr[i]+arr[j] == m){
                printf("SUm is %d and %d",arr[i],arr[j]);
            }
        }
    }
    return 0;
}
