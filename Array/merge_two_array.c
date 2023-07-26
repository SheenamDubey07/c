#include <stdio.h>

int main()
{
    int arr1[100],arr2[100],arr3[100];
    int i,j,k,n;
    int s1,s2,s3;


    printf("Enter the size 1: ");
    scanf("%d",&s1);
 
    printf("Elements of 1 Array: \n");
    for (i=0;i<s1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter the size 2: ");
    scanf ("%d",&s2);
    
    printf("Elements of 2 Array: \n");
    for (i=0;i<s2;i++){
        scanf("%d",&arr2[i]);
    }
    // merging the size of arr1 and arr2 
    s3 = s1 + s2;

    for (i = 0;i<s1;i++){
        arr3[i] = arr1[i];
    }
    for (j = 0;j <s2;j++){
        arr3[i] = arr2[j];
        i ++ ;
    }

    for (i=0;i<s3;i++){
        for(k = 0;k<s3-1;k++){
            if(arr3[k]<=arr3[k+1]){
                j = arr3[k+1];
                arr3[k+1] = arr3[k];
                arr3[k] = j;

            }
        }
    }
    printf("Merged array in decending order is: \n");
    for(i = 0;i<s3;i++){
        printf("%d ",arr3[i]);
    }
    printf("\n \n");


    return 0;
}
