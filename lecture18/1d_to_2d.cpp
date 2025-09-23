#include <stdio.h>
int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int a2[9];
    int k=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            a2[k]=a[i][j];
            k++;
        }
    }for( k=0;k<9;k++){
    printf("%d",a2[k]);
  
  }
 
}