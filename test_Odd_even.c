#include<stdio.h>
int main(){
    int num;
    printf("Enter the number here=");
    scanf("%d",&num);
    if(num%2==0){
        if(num%6==0){
            printf("Even and divisible by 6");
        }
        else{
            printf("Even but not divisible by 6");
        }
    }
    else{
        if(num%3==0){
            printf("Odd and divisible by 3");
        }
        else{
                printf("Odd but not divisible by 3");
        }
    }
    return 0;
}