//Problem: Merge Two Sorted Linked Lists - Implement using linked list with dynamic memory allocation.

#include <stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
struct Node *head;
struct Node *create(int n,struct Node *temp){
    struct Node *new;
    for (int i = 0; i < n; i++)
    {
        new=(struct Node*)malloc(sizeof(struct Node));
        scanf("%d",&new->data);
        new->next=NULL;
        if (temp==NULL)
        {
            head=temp=new;
        }
        else{
            temp->next=new;
            temp=new;
        }
    }
    return head;
}

void display(struct Node *head){
    struct Node *temp=head;
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

struct Node* mergeSortedLists(struct Node* l1, struct Node* l2) {
    struct Node dummy;
    struct Node* tail = &dummy;
    dummy.next = NULL;
    
    while (l1 != NULL && l2 != NULL) {
        if (l1->data <= l2->data) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }
    
    tail->next = (l1 != NULL) ? l1 : l2;
    return dummy.next;
}



int main(){
    int x;
    scanf("%d",&x);
    struct Node *l1=NULL;
    l1=create(x,l1);
    display(l1);
    printf("\n");
    int y;
    scanf("%d",&y);
    struct Node *l2=NULL;
    l2=create(y,l2);
    display(l2);
    printf("\n");
    struct Node* l3 = mergeSortedLists(l1, l2);
    display(l3);
    return 0;
}