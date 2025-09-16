#include <stdio.h>
int main(){
    int a[5]={10,20,30,40,50};
    int temp=a[0];
    for(int i=0;i<4;i++){
        
      a[i]=a[i+1];
    }
    a[4]=temp;
    printf("transformed array is \n");
    for(int i=0;i<5;i++)
    printf(" %d ",a[i]);
}