 #include <stdio.h>
 int main()
 {
     int i,j;
     int n=4;
    for(i=0;i<n;i++){
         for(j=0;j<=i;j++){
            printf("*");
         }
         for(j=n;j>i;j--){
             printf(" ");
         }
         for(j=n;j>i;j--){
             printf(" ");
         }
         for(j=0;j<=i;j++){
             printf("*");
         }
         printf("\n");
     }

 }

