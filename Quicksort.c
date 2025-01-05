#include<stdio.h>
#include<string.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function
int Partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}


int partition(int a[],int l,int n){
    int i=l;
    int j=n;
    int p=a[l];
    while(i<j){
        do{
        i++;
        }while(a[i]<p);
        do{
            j--;
        }while(a[j]>p);

        if(i<j){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }

        
        
    }
    int tem=a[l];
    a[l]=a[j];
    a[j]=tem;
    return j;

}
int quicksort(int a[],int l,int n){
    
    if(l<n){
        int j=partition(a,l,n);
        quicksort(a,l,j);
        quicksort(a,j+1,n);
    }
}

int main(){
    int a[]={23,32,1,45,92,45,78};
    int n=7;
    quicksort(a,0,7);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    return 0;
}