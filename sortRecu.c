#include<stdio.h>
int sort(int n,int a[n]){
    if(n==0){
        return 0;
    }
    int max=0;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
            a[i]=0;
        }
    }
    printf("%d ",max);
    sort(n,a[n]);

}
int main(){
    int arr[5]={3,6,67,89,7};
    sort(5,arr);

    return 0;
}