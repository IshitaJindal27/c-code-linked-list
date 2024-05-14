#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*stnode;

void createLink(int n)
{
    struct node *fnnode,*tmp;
    int num,i;

    stnode=(struct node*) malloc(sizeof(struct node));

    if(stnode==NULL)
    {
        printf("Memory can not be allocated");
    }

    else
    {
        printf("Enter the data for node 1");
        scanf("%d",&num);
        stnode->data=num;
        stnode->next=NULL;
        tmp=stnode;

        for(i=2;i<n;i++)
        {
            fnnode=(struct node*)malloc(sizeof(struct node));
            if(fnnode==NULL)
            {
                printf("Memory can not be allaocated.");
                break;
            }
            else{
                printf("Input data for node %d:',i");
                scanf("%d",&num);

                fnnode->data=num;
                fnnode->next=NULL;

                tmp->next=fnnode;
                tmp=tmp->next;
            }
        }
    }

}

void displayList()
{
    struct node *tmp;

    if(stnode==NULL){
    printf("List is empty.");
    }
    else{
        tmp=stnode;

        while(tmp!=NULL)
        {
            printf("Data=%d\n",tmp->data);
            tmp=tmp->next;
        }
    }
}



int main()
{
    int n;
    printf("Enter the no. of node you want");
    scanf("%d",&n);
    craeteLink(n);
    display();
    return 0;

}