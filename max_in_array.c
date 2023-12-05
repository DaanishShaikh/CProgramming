#include<stdio.h>
int main(){
    int a[5]={9,6,1,2,3};
    int max;
    max=a[0];
    for(int i=0; i<=4; i++){
        if(a[i]>max){
            a[i]=max;
        }
    }
    printf("%d", max);

   
 return 0;
}