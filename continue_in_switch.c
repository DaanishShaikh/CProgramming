#include<stdio.h>
int main(){
int a =10;
switch(a){
    case 1:
    printf("this is 1 case");
    case 10:
    printf("this is case 10");
    continue;                       //so continue doesnt work in switch
    default:
    printf("this is default");

}
return 0;