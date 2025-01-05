#include<stdio.h>
#include<string.h>
int remo(int s,int b,int a[s]){
    int k[s-1];
    for(int i=0;i<s;i++){
        if(i!=b){
            k[i]=a[i];
            
        }
        
    }
    return k[s-1];
}
int main(){
    int arr[4]={1,2,3,4};
    remo(4,2,arr);
    for(int i=0;i<4;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}