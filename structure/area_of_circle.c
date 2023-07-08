#include <stdio.h>
typedef

struct circle{
    int radius;
    float pi;
    // float rad ;
}r;
int main(){
    // float rad = pi*radius*radius;
    r s = {4,3.14};
    printf("%f",s.pi*s.radius*s.radius);
    printf("\n%f",2*s.pi*s.radius);
  
    return 0;
}
