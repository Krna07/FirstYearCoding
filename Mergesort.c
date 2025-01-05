#include<stdio.h>
void merge(int n,int m,int a[n],int b[m]){
    int i=0;
    int j=0;
    int c[m+n];
    int k=0;
    while(i!=n && j!=m){
        if(a[i]>b[j]){
            c[k]=b[j];
            j++;
            k++;
        }
        else{
            c[k]=a[i];
            i++;
            k++;    
        }
    }
  while(i<n){
    c[k]=a[i];
    k++;
    i++;
  }
  while(j<m){
    c[k]=b[j];
    k++;
    j++;
  }
    for(int l=0;l<m+n;l++){
        printf("%d ",c[l]);
    }
    
}

int division(int a[],int l,int n){
    int i=l;
    int j=n;
    int mid=(i+j)/2;
    division(a,l,n);
    

}
int main(){
    int a[]={12,34,12,45};
    int b[]={23,33,1,34,45};
    merge(4,5,a,b);
    

    return 0;
}