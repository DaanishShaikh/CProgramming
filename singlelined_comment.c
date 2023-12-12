#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    
    gets(str1);
    int length=strlen(str1);
    for(int i=0; i<=length; i++){
        if (str1[0]=='/'&&str1[1]=='/'){
            printf("valid comment");
            break;
        }
        else{
            printf("invalid comment");
            break;
        }
    }
    return 0;
}