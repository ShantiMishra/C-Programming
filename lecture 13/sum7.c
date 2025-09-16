#include <stdio.h>
int main(){
    int a[7]={1,2,3,4,5,6,7};
    int k=7;
    int i,j;
    for(i=0;i<7;i++){
        for(j=i+1;j<7;j++){
            if(a[i]+a[j]==k){
                printf("%d %d\n",a[i],a[j]);

            }
        }
    }
}