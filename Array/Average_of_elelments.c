#include <stdio.h>

int main(){
    int arr[10],i,n,sum = 0;
    double avg;

    printf("Enter the size: ");
    scanf("%d",&n);

   
    for(i=0;i<n;++i){
        printf("Elements: \n");
        scanf("%d",&arr[i]);
        sum += arr[i];    
    }
    avg = (double)sum/n;
    printf("Average = %.2lf",avg);

    return 0;
}
