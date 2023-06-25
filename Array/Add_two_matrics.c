#include <stdio.h>

int main()
{
    int arr1[2][2],arr2[2][2],arr3[2][2],i,j,k,l,m,n;

    printf("Enter the element of array 1: \n");
    for(i = 0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("Enter the element of array 2: \n");
    for(i = 0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&arr2[i][j]);
        }
    }

    printf("Array num 1: \n");
    for(i = 0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d",arr1[i][j]);
        }
        printf("\n");
    }

     printf("Array num 2: \n");
    for(i= 0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d",arr2[i][j]);
        }
        printf("\n");
    }

    for(i= 0;i<2;i++){
        for(j= 0;j<2;j++){
            arr3[i][j] = arr1[i][j] +arr2[i][j];   
        }
    }
    printf("Sum of both the array is: \n");
    for(i= 0;i<2;i++){
        for(j = 0;j<2;j++){
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
