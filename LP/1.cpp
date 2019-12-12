#include<iostream>

using namespace std;

struct node
{
    string name;
    int marks;
    struct node *next;
};

struct node *head=NULL;

void create()
{
    struct node *nn,*temp;
    nn=new node;
    cout<<"Enter name : ";
    cin>>nn->name;
    cout<<"Enter marks : ";
    cin>>nn->marks;
    cout<<endl;
    nn->next=NULL;
    temp=head;

    if(head==NULL)
        head=nn;
    else
    {
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=nn;
    }
}

void display()
{
    struct node *temp;
    temp=head;
    while(temp->next!=NULL)
    {
        cout<<temp->name<<"  "<<temp->marks;
        cout<<endl;
        temp=temp->next;
    }
    cout<<temp->name<<"   "<<temp->marks;
    cout<<endl<<endl;
}

void del()
{
    struct node *t,*temp;
    int pos;
    cout<<"Enter position to be deleted : ";
    cin>>pos;
    temp=head;
    int i=0;
    while(i<pos)
    {
        t=temp;
        temp=temp->next;
        i++;
    }
    t->next=temp->next;
    temp->next=NULL;
    delete(temp);
}

void srch()
{
    struct node *temp;
    int mar,ctr=1;
    cout<<"Enter marks to be searched : ";
    cin>>mar;
    temp=head;
    while(temp->next!=NULL)
    {
        if(temp->marks==mar)
            cout<<"Record found at position "<<ctr<<endl;
        else
            ctr++;
        temp=temp->next;
    }
    if(temp->marks==mar)
        cout<<"Record found at position "<<ctr<<endl;
    else
        cout<<"Record not found!"<<endl;
}

void modify()
{
    struct node *temp;
    int pos;
    cout<<"Enter position to be edited : ";
    cin>>pos;
    int i=0;
    temp=head;
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    cout<<"Enter edited name : ";
    cin>>temp->name;
    cout<<"Enter edited marks : ";
    cin>>temp->marks;
    cout<<endl;
}

int main()
{
    int choice;
    char ch='Y';
    cout<<"OPTIONS : "<<endl;
    cout<<"1.Insert new node"<<endl;
    cout<<"2.Delete node " <<endl;
    cout<<"3.Search "<<endl;
    cout<<"4.Display "<<endl;
    cout<<"5.Modify "<<endl;

    while(ch!='N'||ch!='n')
    {
        cout<<endl<<endl<<"Enter your choice : "<<endl;
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
            case 1 : create();
                     break;
            case 2 : del();
                     break;
            case 3 : srch();
                     break;
            case 4 : display();
                     break;
            case 5 : modify();
                     break;
            default : cout<<"Invalid choice!"<<endl;
        }
        cout<<"Do you want to continue? Y/N :  ";
        cin>>ch;
    }

    return 0;
}
