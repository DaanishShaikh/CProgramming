#include<stdio.h>
int main(){

int n;
printf("Enter the size of array=");
scanf("%d", &n);
int a[n];
printf("Enter the elements of the array");
for(int m = 0; m<n; m++){
    scanf("%d", &a[m]);
    printf("\n");
}
for(int i=0; i<=n; i++){
    for(int j=1+i; j<n; j++){
    int count=0;
    if(a[i]==a[j]){
        count++;
    }
    if(count==1){
    
        printf("%d", a[i]);
    }
    }
}
return 0;
}