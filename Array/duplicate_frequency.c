#include <stdio.h>
int main(){
  int n;int i,j,count = 0,sum =0 ;
    
    printf("Enter the size: ");
    scanf("%d",&n);
    int arr1[n];
    printf("Elements: \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++){
            if(arr1[i]==arr1[j]){
                count++;
               break;
            }
    }printf("count %d",count);
    return 0;
}
