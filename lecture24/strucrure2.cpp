#include <stdio.h>
#include <string.h>

struct address{
    int Pincode;
};
struct Student
{
    char name[50];
    int Rollno;
    int age;
    struct address S2;
};
int main(){
    struct Student S1[3];

    for(int i=0; i<3; i++){
        printf("Enter your Name");
        scanf("%s", S1[i].name);
    }
    for(int i=0; i<3; i++){
       printf("%s\n",S1[i].name);
    }

}
