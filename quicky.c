#include<stdio.h>
#include<math.h>
#define MAX_STACK_SIZE 100
int partition(int a[],int l,int h){
    int pivot=a[l];
    int i=l;
    int j=h;
    while(i<=j){
        do{
            i++;
        }while(a[i]<=pivot);
        do{
            j--;
        }while(a[j]>pivot);

        if(i<=j){
            int tem=a[i];
            a[i]=a[j];
            a[j]=tem;
        }
    }
    int temp=a[l];
    a[l]=a[j];
    a[j]=temp;
    return j;
}

void quickSort_NonRec(int arr[], int n) {
    // Stack to store subarray indices
    int stack[MAX_STACK_SIZE];
    int top = -1;

    // Push initial range
    top = top + 1; // Increment top
    stack[top] = 0; // Push low index
    top = top + 1; // Increment top
    stack[top] = n - 1; // Push high index

    // Process the stack until empty
    while (top >= 0) {
        int high = stack[top]; // Get high index
        top = top - 1;         // Decrement top
        int low = stack[top];  // Get low index
        top = top - 1;         // Decrement top

        // Partition the array
        int pivotIndex = partition(arr, low, high);

        // Push left subarray range onto the stack if it has more than one element
        if (pivotIndex - 1 > low) {
            top = top + 1; // Increment top
            stack[top] = low; // Push low index
            top = top + 1; // Increment top
            stack[top] = pivotIndex - 1; // Push high index
        }

        // Push right subarray range onto the stack if it has more than one element
        if (pivotIndex + 1 < high) {
            top = top + 1; // Increment top
            stack[top] = pivotIndex + 1; // Push low index
            top = top + 1; // Increment top
            stack[top] = high; // Push high index
        }
    }
}

void quicksort(int a[],int l,int h){
    if(l<h){
        int j=partition(a,l,h);
        quicksort(a,l,j);
        quicksort(a,j+1,h);
    }
}

int main(){
    printf("Enter Size:");
    int n;
    int k=n;
    scanf("%d",&n);
    int a[n];
    printf("Enter the Elements:");
    for(int i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    quicksort(a,0,n);
    for(int i=0;i<k;i++){
        printf("%d ",a[i]);
    }
    return 0;
}

