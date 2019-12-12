#include<iostream>

using namespace std;

    struct node
    {
        int data;
        struct node *next;
    };

    int main()
    {
        cout<<"This is singly linked list : ";
        struct node *n1,*n2,*n3,*temp;
        n1=new node;
        n2=new node;
        n3=new node;
        struct node *head=NULL;
        cout<<endl<<"Enter the data for Node 1 : ";
        cin>>n1->data;
        cout<<endl<<"Enter the data for Node 2 : ";
        cin>>n2->data;
        cout<<endl<<"Enter the data for Node 3 : ";
        cin>>n3->data;

        head=n1;
        n1->next=n2;
        n2->next=n3;
        n3->next=NULL;

        cout<<"Printing the list : "<<endl;

        temp=head;

        while(temp->next!=NULL)
        {
            cout<<temp->data<<"     ";
            temp=temp->next;
        }

        cout<<temp->data<<endl;

        return 0;
    }
