#include<stdio.h>
int main(){
    int n;
    int i;
    int a[100];
    printf("how many elements should there be?=");
    scanf("%d", &n);
    for(int i=0; i<=n; i++){
       scanf("%d", &a[i]);
    }
    int p=a[i-1];  //n instead of i
    for(int i=n-1; i>0; i--){
        a[i]=a[i-1];

    }
    a[0]=p;
    
    for(int i= 0; i<=n; i++){
        printf("%d\n",a[i]);
    }
    return 0;
}