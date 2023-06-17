#include <stdio.h>
#include <string.h>

int main(){
    
    char str[100],i,ch;
    int count=0,con=0;
    printf("Enter the str: ");
    gets(str);
    printf("Given: %s",str);
    int c = strlen(str);
    printf("\nLength: %d",c);
    for(i = 0;str[i]!= 0;i++){
        ch = str[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch== 'o'||ch=='u')
        count++;
        // 
        else{
        con++;
        }
        
    }
    printf("\n%d",count);
    printf("\n%d",con);
    
    
    return 0;
}
