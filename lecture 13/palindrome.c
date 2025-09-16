#include <stdio.h>
int main()
{
    int a[5]={1,2,1,2,1};
    int check=1;
    for (int i=0;i<5/2;i++){
        if (a[i]!=a[5-1-i]){
            check=0;
            break;
        }
    }
        if(check==1){
            printf("palindrome");
        }
        else{
            printf("not palindrome");
        }
        
        
    
}
// not running
