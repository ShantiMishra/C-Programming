#include <stdio.h>
int pow(int a,int y){
    if(y==0){
        return 1;
    }
    return a*pow(a,y-1);
}


int main(){
    int factt= pow(2,2);
    printf("%d",factt);
}