#include<stdio.h>
int add(int,int);
int main(){
    int a=5;
    int b=6;
    int sum=add(a,b);
        printf("%d",sum);
}
int add(int x, int y){
    int sum=x+y;

    return sum;
}
