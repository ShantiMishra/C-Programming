#include <stdio.h>
int main()
{
    int i,j,n;
    int num=1;
    printf("enter the value of n");
    scanf("%d",n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d",num);
            num++;
        }
        printf("\n");
    }
}
