#include <stdio.h>
#include <string.h>
int main(){
    char str[]="HeHllo";
    int i;
    int freq[256]={0};
    char target='e';
    int j=0;
    char newstr[100];
    int ln=strlen(str);
    for(int i=0;i<ln;i++){
        if(str[i]!=target){
            newstr[j]=str[i];
            j++;

        }
       
}
printf("%s",newstr);
}
