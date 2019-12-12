#include<iostream>
#include<cmath>

using namespace std;

struct node
{
    int bse,expo;
    int exp1,exp2,sum,multi;
    struct node *next;
};

struct node *head=NULL;
struct node *perm=head;

void create()
{
    struct node *nn,*temp;
    nn=new node;
    cout<<"Enter the base value : ";
    cin>>nn->bse;
    cout<<"Enter the exponent value : ";
    cin>>nn->expo;
    cout<<endl;
    nn->next=NULL;
    temp=head;

    if(head==NULL)
    {
        head=nn;
        nn->next=head;
    }

    else
    {
        while(temp->next!=head)
            temp=temp->next;
        temp->next=nn;
        nn->next=head;
    }
}

void display()
{
    cout<<"The equation is as follows : "<<endl;
    struct node *temp;
    temp=head;
    while(temp->next!=head)
    {
        cout<<temp->bse<<"^"<<temp->expo<<"  ";
        temp=temp->next;
    }
    cout<<temp->bse<<"^"<<temp->expo<<endl;
}

void add()
{
    struct node *temp;
    temp=head;
    perm=head;
    perm->sum=0;
    while(temp->next!=head)
    {
        temp->exp1=pow(temp->bse,temp->expo);
        temp=temp->next;
    }
    temp->exp1=pow(temp->bse,temp->expo);
        temp=temp->next;
    temp=head;
    while(temp->next!=head)
    {
        perm->sum+=temp->exp1;
        temp=temp->next;
    }
    perm->sum+=temp->exp1;
        temp=temp->next;
    cout<<"The sum is : "<<perm->sum<<endl;
}

void mul()
{
    struct node *temp;
    temp=head;
    perm=head;
    perm->multi=1;
    while(temp->next!=head)
    {
        temp->exp2=pow(temp->bse,temp->expo);
        temp=temp->next;
    }
    temp->exp2=pow(temp->bse,temp->expo);
        temp=temp->next;
    temp=head;
    while(temp->next!=head)
    {
        perm->multi*=temp->exp1;
        temp=temp->next;
    }
    perm->multi*=temp->exp1;
        temp=temp->next;
    cout<<"The product is : "<<perm->multi<<endl;
}


int main()
{
    int choice;
    char ch='Y';
    cout<<"1. Enter node"<<endl;
    cout<<"2.Display equation"<<endl;
    cout<<"3.Addition of nodes"<<endl;
    cout<<"4.Multiplication of nodes"<<endl;

    while(ch=='Y'||ch=='y')
    {
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1 : create();
                     break;
            case 2 : display();
                     break;
            case 3 : add();
                     break;
            case 4 : mul();
                     break;
            default : cout<<"Invalid choice!"<<endl;
        }

        cout<<endl<<"Do you want to continue? Y/N :  ";
        cin>>ch;
    }

    return 0;
}

