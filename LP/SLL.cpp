#include<iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL;

void create()
{
    struct node *nn,*temp;
    nn=new node();
    cout<<endl<<"Enter data for node : ";
    cin>>nn->data;
    nn->next=NULL;
    temp=head;
    if(head==NULL)
    {
        head=nn;
    }

    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }

        temp->next=nn;
        nn->next=NULL;
    }
}

void display()
{
    struct node *temp;
    temp=head;
    while(temp->next!=NULL)
    {
        cout<<temp->data<<"     ";
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}

int main()
{
    cout<<"This is singly linked list : "<<endl;
    create();
    create();
    create();
    cout<<endl;
    display();

    return 0;
}
