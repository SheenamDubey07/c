#include <stdio.h>
int main(){
    int t = 2,s= 2;
    int i,j,arr1[4][4];
    int n,m,arr2[4][4];
    int a,b,arr3[4][4];
    
    printf("elements of Array 1: ");
    for(i=0;i<s;i++){
        for(j=0;j<t;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Array 1: \n");
     for(i=0;i<=s;i++){
        for(j=0;j<=t;j++){
            printf(" %d",arr1[i][j]);
        }
        printf("\n");
    }
    return 0;
}
