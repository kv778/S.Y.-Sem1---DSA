#include<iostream>

using namespace std;

struct node
{
    int key;
    struct node *left,*right;
};

node* newNode(int data)
{
    struct node *temp;
    temp=new node;
    temp->key=data;
    temp->left=NULL;
    temp->right=NULL;

    return temp;
}

void inorder(node *nn)
{
    if(nn!=NULL)
    {
        inorder(nn->left);
        cout<<nn->key<<"    ";
        inorder(nn->right);
    }
}

void preorder(node *nn)
{
    if(nn!=NULL)
    {
        cout<<nn->key<<"    ";
        preorder(nn->left);
        preorder(nn->right);
    }
}

void postorder(node *nn)
{
    if(nn!=NULL)
    {
        postorder(nn->left);
        postorder(nn->right);
        cout<<nn->key<<"     ";
    }
}

node* insert(node* node, int key)
{
    if(node==NULL)
        return newNode(key);
    if(key<node->key)
        node->left=insert(node->left,key);
    else if(key>node->key)
        node->right=insert(node->right,key);

    return node;
}

int main()
{
    int r,t,terms;
    cout<<endl<<"Binary search tree with traversal : "<<endl;
    struct node *root=NULL;
    cout<<"Enter value of root : ";
    cin>>r;
    root=insert(root,r);
    cout<<"Enter no of terms : ";
    cin>>terms;
    cout<<"Enter terms one by one : "<<endl;
    for(int i=0;i<terms;i++)
    {
        cin>>t;
        insert(root,t);
    }

    cout<<"Inorder traversal :   ";
    inorder(root);
    cout<<endl<<"Preorder traversal :   ";
    preorder(root);
    cout<<endl<<"Postorder traversal :   ";
    postorder(root);

    cout<<endl;

    return 0;
}
