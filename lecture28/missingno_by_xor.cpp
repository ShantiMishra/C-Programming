#include <stdio.h>
int main(){
    int a[5]={1,2,3,5,6};
    int xor1=0;
    int xor2=0;
    for(int i=1;i<=6;i++){
        xor1=xor1^i;
    }
     for(int i=0;i<5;i++){
        xor2=xor2^a[i];
    }
    printf("%d",xor1^xor2);

}