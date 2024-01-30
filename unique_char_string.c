#include<stdio.h>
#include<string.h>
int main(){

    char a[100];
    char test[1];
    int count=0;
    printf("Enter the string here=");
    gets(a);
    for(int i=0; i<=strlen(a); i++){
        a[i]=test[0];
        for(int j=0;j<strlen(a);j++){
          if (a[j]==test[0]){
            count++;
            break;
          }
        }
        
    }
    if (count==1){
        printf("It is a unique string");
    }
    else{
        printf("It is not a unique string");
    }


    return 0;
}