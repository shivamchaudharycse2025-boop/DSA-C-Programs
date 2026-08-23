#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void linkedlisttraversal(struct Node *temp){
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
struct Node *insertatfirst(struct Node *head,int data){
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;

}
int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    head =(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third =(struct Node *)malloc(sizeof(struct Node));
    head->data=10;
    head->next=second;
    second->data=20;
    second->next=third;
    third->data=30;
    third->next=NULL;
   
    
    head=insertatfirst(head,45);
    linkedlisttraversal(head);
return 0;
}