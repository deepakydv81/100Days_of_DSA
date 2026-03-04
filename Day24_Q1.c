//Problem: Delete First Occurrence of a Key - Implement using linked list with dynamic memory allocation.
#include<stdlib.h>
#include <stdio.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head;

void create(int n){
    struct Node *temp=NULL,*new;
    for (int i = 0; i < n; i++)
    {
        new=(struct Node*)malloc(sizeof(struct Node));
        scanf("%d",&new->data);
        new->next=NULL;
        if (head==NULL)
        {
            head=temp=new;
        }
        else{
            temp->next=new;
            temp=new;
        }
    }
}

void Delete(int val){
    struct Node *temp=head,*prev=NULL;

    if (val==temp->data)
    {
        head=head->next;
    }
    for (int i = 1; temp->data!=val ; i++)
    {
        prev=temp;
        temp=temp->next;
    }

    prev->next=temp->next;

    free(temp);
}

void Display() {
    struct Node *temp=head;
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

int main(){
    int n,x;
    scanf("%d",&n);
    create(n);
    printf("Enter the value you want to delete : ");
    scanf("%d",&x);
    Delete(x);
    Display();
    return 0;
}