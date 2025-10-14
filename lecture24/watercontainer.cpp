#include <stdio.h>
int main(){
    int a[5]={2,3,4,7,9};
    int i=0;
    int j=4-1;
    int maxArea=0;
    while (i<j)
    {
        int height;
        if (a[i]<a[j])
        {
           height=a[i];
        }
        else{
            height=a[j];
        }

        int w=j-i;
        int area= height*w;
        
        if(area>maxArea){
            maxArea=area;}
            if(a[i]<a[j]){
                i++;
            }
            else{
               j--;
            }
        
        
    }
    printf("%d",maxArea);
}