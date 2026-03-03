#include<stdio.h>
#include<stdlib.h>

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

void display() {
    struct Node *temp=head;
    int count=0;
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\nTotal number of nodes : %d",count);
}

int main() {
    int n;
    scanf("%d",&n);

    create(n);
    display();
}