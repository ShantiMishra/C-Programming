#include <stdio.h>
int main(){
    int a[5]={10,20,30,40,50};
    int max=a[0]+a[1];
    int sum=0;
    int i,j;
    int pair1= a[0],pair2=a[1];
    for(int i=0;i<5;i++){
      for(int j=i+1;j<5;j++)
       {
         sum=a[i]+a[j];
         
         if (sum>max){
          max=sum;
          pair1=a[i];
          pair2=a[j];
        
       }
       }
     }
     printf("pair with maximum sum : %d and %d \n",pair1,pair2);
}