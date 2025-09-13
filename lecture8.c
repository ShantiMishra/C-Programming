/*#include <stdio.h>
int main()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}*/

/*#include <stdio.h>
int main()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 3; j > i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}*/

// #include <stdio.h>
// int main()
// {
//     int i,j ;
//     for(i=0;i<4;i++){
//         for(j=0;j<=i;j++){
//             printf(" ");
//         }
//         for(j=0;j<4-i-1;j++){
//           printf("*");}

//           printf("\n");

//     }
// }

#include <stdio.h>
int main()
{
    int i,j,n;
    int num=1;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d", num );
            num++;
        }
        printf("\n");
    }
}



