#include<stdio.h>
int main(){
int f;
int z;
int n;
printf("Enter the size of array=");
scanf("%d", &n);
int a[n];
printf("Enter the elements of the array=\n");
for(int m = 0; m<n; m++){
    scanf("%d", &a[m]);
    printf("\n");
}
for(int i=0; i<=n; i++){
    for(int j=0; j<n; j++){
    int count=0;
    if(a[i]==a[j]){
        count++;
        a[f]=a[i];
    }
    if(count==1){
    for(int z=0; z<n; z++){
        a[z]=a[i];
        printf("%d", a[i]);
    }
    }
    }
}
return 0;
}