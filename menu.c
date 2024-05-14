/*MENU
1. CREATE A LIST
2. ADD A NODE AT THE BEGINING
4. ADD THE NODE AT THE END
5. ADD THE NODE BEFORE A GIVEN NODE
6. ADD THE NODE BEFORE A GIVEN NODE
7. DELETE A NODE FROM THE BEGINING
8. DELETE A NODE FROM THE END
9. DELETE A GIVEN NODE
10. DELETE A NODE AFTER A GIVEN NODE
11. DELETE THE ENTIRE LIST
12. SORT THE LIST
13. REVERSE THE LINKED LIST
14. FINDIN THE MIDDLE ELEMENT
15. FIND IF THE LIST IS CYCLIC
16. FIND THE Kth NODE FROM THE LAST
17. ADD THE NODE AT LAST
18. ADD THE NODE AT START
19. EXIT*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
}*stnode;

struct node *head,*newnode;

void createList(int n)
{
    struct node *head, *new_node, *tmp;
    head=NULL;
    int choice;
    do
    {
        new_node=(struct node*) malloc (sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d",&new_node->data);
        new_node->next=NULL;
        if(head==NULL)
        {
            head=tmp=new_node;
        }
        else
        {
            tmp->next=new_node;
            tmp=new_node;
        }
        printf("To continue press '1'\n");
        scanf("%d",&choice);
    } while (choice==1);
    printf("The list is:\n");
    tmp=head;
    while(tmp!=NULL)
    {
        printf("%d\n",tmp->data);
        tmp=tmp->next;
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

void insert_at_begining()
{
    newnode = (struct node*) malloc (sizeof(struct node));
    printf("Enter the data you want to add");
    scanf("%d",&newnode->data);
    newnode->next = head;
    head = newnode;
}

int main()
{
    struct node *tmp;
    int no;
    int choice;
    printf("Enter your choice from the following");
    printf("MENU\n1. CREATE A LIST\n2. ADD A NODE AT THE BEGINING\n4. ADD THE NODE AT THE END\n5. ADD THE NODE BEFORE A GIVEN NODE\n6. ADD THE NODE BEFORE A GIVEN NODE\n7. DELETE A NODE FROM THE BEGINING\n8. DELETE A NODE FROM THE END\n9. DELETE A GIVEN NODE\n10. DELETE A NODE AFTER A GIVEN NODE\n11. DELETE THE ENTIRE LIST\n12. SORT THE LIST\n13. EXIT\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
                
            printf("you have choosen to create a list");
            printf("Enter the no. of list you want to add");
            scanf("%d",&no);
            createList(no);
            displayList();
            break;
        }
        case 2:
        {
            printf("you have choosen to add a node at the begining");
        }
    }
    return 0;
}