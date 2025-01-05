
// def origin(n):
//     if n==0:
//         return 0
//     while n!=0:
//         sum=0
//         k=n
//         while k!=0:
//             ld=k%10
//             sum+=ld
//             k=k//10
//         n=sum
//         if n//10==0:
//             break
//     return sum
// print(origin(0))
// t=int(input("Test cases:"))
// for i in range(t):
//     n=int(input())
//     s=0
//     for i in range(n+1):
//         k=origin(i)
//         s=s+k
//     print(s)
#include<stdio.h>
int origin(int n){
    if (n==0){
        return 0;
    }
    while(n!=0){
        int sum=0;
        int k=n;
        while(k!=0){
            int ld=k%10;
            sum=sum+ld;
            k=k/10;
        }
        n=sum;
        if(n/10==0){
            return sum;
            break;
        }
    }
    
}
int main(){
    int n;
    printf("Enter Any Number:");
    scanf("%d",&n);
    int k=origin(n);
    printf("%d",k);
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=origin(i);

    }
    printf("\n%d",sum);
    return 0;
}



            
