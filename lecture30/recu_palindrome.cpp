#include <stdio.h>

int palindrome(int arr[],int i,int j){
    if(i>=j){
        return 1;
    }
    if(arr[i]!=arr[j]){
        return 0;
    }
    return palindrome(arr,++i,--j);
}



int main(){
      int arr[5]={1,2,3,2,5};
      int firstIndex=0;
      int lastIndex=4;
      int data= palindrome(arr,firstIndex,lastIndex);
      if (data==1){
        printf("Palindrome");
      }
      else{
        printf("Not a Palindome");
      }
}