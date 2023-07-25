
#include <stdio.h>

int main(){
    int a = 2,b=2;
    int i,j,arr[2][2];

    for (i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("Enter the marks of %d-%d: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    } 
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf(" %d",arr[i][j]);   
        }
        printf("\n");
    }
    return 0;
}
