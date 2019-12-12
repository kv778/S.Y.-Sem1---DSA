#include<iostream>

using namespace std;

const int MAX=5;
int front=-1,rear=-1;
int orders[MAX];

bool addOrder(int id)
{
    if(rear==-1)
    {
        front=0;
        rear=0;
        orders[rear]=id;
        return true;
    }

    else
    {
        int pos=(rear+1)%MAX;
        if(pos==front)
        {
            cout<<"Parlor is full, please wait"<<endl;
            return false;
        }
        else
        {
            rear=pos;
            orders[rear]=id;
            return true;
        }
    }
}

void serveOrder()
{
    if(front==-1)
    {
        cout<<endl<<"Parlor is empty, no orders are being processed currently."<<endl;
        return;
    }
    else
    {
        cout<<endl<<"Order no "<<orders[front]<<" has been processed."<<endl;
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
            front=(front+1)%MAX;
    }
}

void displayOrders()
{
    if(front==-1)
    {
        cout<<endl<<"Parlor is empty, no orders are being processed currently."<<endl;
        return;
    }

    else
    {
        cout<<endl<<"Orders being processed are : ";
        for(int i=front;i!=rear;i=((i+1)%MAX))
            cout<<orders[i]<<"  ";
        cout<<orders[rear];
    }
}

int main()
{
    int id=0,choice;
    char ch='Y';
    cout<<endl<<"1. Accept order";
    cout<<endl<<"2. Serve order";
    cout<<endl<<"3. Display orders";
    cout<<endl<<"4. Exit"<<endl<<endl;
    while(ch=='Y'||ch=='y')
    {
        cout<<endl<<"Enter your choice : ";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
            case 1 : ++id;
                     if(addOrder(id))
                            cout<<endl<<"Thank you for the order. Order id is : "<<id<<endl;
                     else
                            id--;
                     break;
            case 2 : serveOrder();
                     break;
            case 3 : displayOrders();
                     break;
            case 4 : return 0;
                     break;
            default : cout<<endl<<"Invalid choice!"<<endl;
        }

        cout<<endl<<"Do you want to continue? Y/N :  ";
        cin>>ch;
    }

    return 0;
}
