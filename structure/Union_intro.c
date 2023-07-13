#include <stdio.h>
#include <string.h>

union stu{
    int id;
    int marks ;
    char name[30];
    char fav;
};
int main(){
    union  stu s1 ;
    s1.fav = 's';
    s1.id = 98;
    s1.marks = 40;
    strcpy(s1.name,"Sheenam Dubey");

    printf("\nid = %d ",s1.id);
    printf("\nmarks  = %d ",s1.marks );
    printf("\nfav  = %c ",s1.fav );
    printf("\nName  = %s ",s1.name );


    return 0;
}
