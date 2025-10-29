#include <stdio.h>
int main(){
    int a[5]={2,3,4,2,3};
    int XOR=0;
    for(int i=0;i<5;i++){
        XOR=XOR^a[i];
    }
    printf("XOR of given array is %d",XOR);
}