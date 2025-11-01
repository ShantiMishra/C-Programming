#include <stdio.h>

 int binarySearch(int arr[],int s,int e,int t){
    if(s>e){
        return -1;
    }
    int mid=(s+e)/2;
    if(mid==t){
        return mid;
    }
    else if(arr[mid]<t){
        return binarySearch(arr,t,mid+1,e);
    }
    else
       return binarySearch(arr,t,mid-1,e);
}



int main(){
     int arr[5]={1,2,3,4,5};
     int startingIndex=0;
     int lastIndex=4;
     int target=3;
     int mid;

}
