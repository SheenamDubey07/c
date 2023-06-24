# include <stdio.h>

int main()
{
    int num;
    printf("Enter the year: ");
    scanf("%d",&num);
    if(num%4 == 0 && num%400 == 0)
    {
        printf("%d is a leap year",num);
    }
    else if (num % 100 == 0){
        printf("%d is not a leap year",num);
    }
    else{
        printf("%d is not a leap year",num);
    }


    return 0;
}
