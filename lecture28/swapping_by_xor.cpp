#include <stdio.h>
int main(){
    int a=5 ;
    int b=3;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("Now the value of a is %d and value of b is %d so number are swapped successfully",a,b);
}