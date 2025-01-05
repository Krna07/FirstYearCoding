#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    /* data */
    int data;
    struct Node*next;
}Node;

Node* creatNode(int n){
    Node *temp=malloc(sizeof(Node));
    temp->data=n;
    temp->next=NULL;
    return temp;
}

Node* Addbegin(int data,Node*head){
    Node*temp=creatNode(data);
    temp->next=head;
    head=temp;

    return head;
}

Node AddEnd(int data,Node*head){
    Node*temp=malloc(sizeof(Node));
    temp->data=data;
    Node*hea=head;
    while(hea->next!=NULL){
        hea=hea->next;
    }
    hea->next=temp;
    temp->next=NULL;

}

Node Addspecific(int position,int data,Node*head){
    int p=1;
    Node* temp=malloc(sizeof(Node));
    temp->data=data;
    Node*k=head;
    while(p!=position){
        k=k->next;
        p++;
    }

    temp->next=k->next;
    k->next=temp;
    
}


int main(){
    Node *head=NULL;
    head=creatNode(0);
    printf("First Node's Data:[%d]\n",head->data);
    int n;
    int k;
    printf("Node At Begin U want:\n");
    
    head=Addbegin(100,head);
    head=Addbegin(500,head);
    head=Addbegin(78,head);
    head=Addbegin(789,head);
    AddEnd(1,head);
    AddEnd(2,head);
    AddEnd(3,head);
    Addspecific(2,32,head);

    Node*k=head;
    while(k!=NULL){
        printf("[%d] ",k->data);
        k=k->next;
    }
    return 0;
}