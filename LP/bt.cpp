#include<iostream>

using namespace std;

struct node
{
    int data;
    struct node *left, *right;
};

struct node *root=NULL;

node* create()
{
    struct node *nn;
    nn=new node;
    nn->left=NULL;
    nn->right=NULL;
    cout<<endl<<"Enter data and 0 if no data : ";
    cin>>nn->data;
    if(nn->data==0)
        return NULL;
    if(root==NULL)
        root=nn;
    cout<<endl<<"Enter left side of "<<nn->data<<" : ";
    nn->left=create();
    cout<<endl<<"Enter right side of "<<nn->data<<" : ";
    nn->right=create();
    return nn;
}

node* inorder(node *t)
{
    if(t!=NULL)
    {
        inorder(t->left);
        cout<<t->data<<"    ";
        inorder(t->right);
    }
}

int main()
{
    cout<<"Binary Tree : "<<endl;
    create();
    cout<<endl<<"Inorder : "<<endl;
    inorder(root);

    return 0;

}
