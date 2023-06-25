#include <stdio.h>

int main()
{
    int i,j,arr[3][10];

    for (i=0;i<10;i++){
        arr[0][i] = 2*(i+1);
    }
    for(i =0;i<10;i++){
        printf("2 x %d = %d\n",i+1,arr[0][i]);

    }
     

    return 0;
}
