#include<iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL;

int main()
{
    struct node *n1, *n2, *n3, *n4,*temp;;
    n1=new node;
    n2=new node;
    n3=new node;
    n4=new node;

    cout<<"Enter data for node 1 : ";
    cin>>n1->data;
    cout<<"Enter data for node 2 : ";
    cin>>n2->data;
    cout<<"Enter data for node 3 : ";
    cin>>n3->data;
    cout<<"Enter data for node 4 : ";
    cin>>n4->data;

    head=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=head;

    cout<<endl<<"Printing the values :  ";

    temp=head;
    while(temp->next!=head)
    {
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<temp->data<<endl;

    return 0;
}
