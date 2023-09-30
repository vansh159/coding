/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
//write a program to create a linked list and print its data
int main()
{
    struct node{
        int data;
        struct node*next;
    };
    struct node* add,*head,*temp;
    int i,n;
    printf("enter the number of elements you want in your linked list");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       add=(struct node*)malloc(sizeof(struct node));
       printf("enter the value of element %d",i+1);
       scanf("%d",&add->data);
       add->next=NULL;
       if(head==NULL)
       {
           head=add;
           temp=add;
       }
       else{
           temp->next=add;
           temp=add;
       }
    }temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;
}
