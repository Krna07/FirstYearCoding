#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
// int *ptr;
// ptr=(int*)malloc(10*sizeof(int));
// int *str=ptr;
// for(int i=0;i<10;i++){
//     scanf("%d",&*ptr);
//     ptr++;
// }
// for(int i=0;i<10;i++){
//     printf("%d\n",*str);
//     str++;
// }
char *ctr;
ctr=(char*)calloc(10,sizeof(char));
char *ctr1=ctr;
for(int i=0;i<10;i++){
    scanf("%c",ctr);
    ctr++;
}
printf("\n");
for(int i=0;i<10;i++){
    printf("%c",*ctr1);
    ctr1++;

}
free(ctr1);
return 0;
}
