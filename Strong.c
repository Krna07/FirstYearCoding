#include<stdio.h>

int factorial(int n){
    if(n==0) return 1;
   return n*factorial(n-1);
}
int main(){
    printf("%d\n",factorial(5));
    int a[5]={2,145,223,547,40585};
    int n=5;
    for(int i=0;i<n;i++){
        int fact=1;
        int k=a[i];
        int strong=0;
        while(k!=0){
            int ld=k%10;
            strong=strong+factorial(ld);
            k=k/10;
        }
        if(strong==a[i]){
            printf("%d ",a[i]);

        }

    }
    return 0;
}