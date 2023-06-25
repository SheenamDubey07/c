#include <stdio.h>

int main(){
int arr[2][2], n = 2,m = 2;
int i,j;
for (i=0;i<n;i++){
    for (j = 0;j<n;j++){
        printf("Enter the value of %d-%d: ",i+1,j+1);
        scanf ("%d",&arr[i][j]);
    }
}
for(i = 0;i<n;i++){
    for(j=0;j<m;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
printf("Transposed Matrix \n");
for(i = 0;i<m;i++){
    for(j=0;j<n;j++){
        printf("%d ",arr[j][i]);
    }
    printf("\n");
}
return 0;
}
