#include<stdio.h>
#include <string.h>
struct myStructure{
    int mynum;
    char myletter;
    char mystring[30];

};

int main(){
    struct myStructure s1;
    // struct myStructure s2;

    printf("Enter the num: ");
    scanf("%d",&s1.mynum);
    // s1.mynum = 4; 
    // printf("Enter the letter: ");
    strcpy(s1.mystring , "Sheenam Dubey");

    printf("%d\n",s1.mynum);
    printf("%c\n",s1.myletter);
    printf("%s\n",s1.mystring);

    return 0;
}
