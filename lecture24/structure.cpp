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
   struct Student S1;
   S1.age= 19;
   S1.Rollno=97;
   strcpy(S1.name,"Shanti");
   S1.S2.Pincode=553637;
   printf("Name is %s\n", S1.name);
   printf("Age is %d\n", S1.age);
   printf("Roll no. is %d", S1.Rollno);
}