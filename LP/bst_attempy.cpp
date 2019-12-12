#include<iostream>

using namespace std;

struct node
{
    int key;
    struct node *left,*right;
};

node* newNode(int item)
{
    struct node *nn;
    nn=new node;
    nn->key=item;
    nn->left=NULL;
    nn->right=NULL;

    return nn;
}

void inorder(node* nn)
{
    if(nn!=NULL)
    {
        inorder(nn->left);
        cout<<nn->key<<"    ";
        inorder(nn->right);
    }
}

node* insert(node *nn, int item)
{
    if(nn==NULL)
        return newNode(item);
    if(item<nn->key)
        nn->left=insert(nn->left,item);
    else if(item>nn->key)
        nn->right=insert(nn->right,item);
}

int height(node* node)
{
    if (node == NULL)
        return 0;
    else
    {
        /* compute the height of each subtree */
        int lheight = height(node->left);
        int rheight = height(node->right);

        /* use the larger one */
        if (lheight > rheight)
            return(lheight + 1);
        else return(rheight + 1);
    }
}

/* Print nodes at a given level */
void printGivenLevel(node* root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        cout << root->key << " ";
    else if (level > 1)
    {
        printGivenLevel(root->left, level-1);
        printGivenLevel(root->right, level-1);
    }
}

void printLevelOrder(node* root)
{
    int h = height(root);
    int i;
    for (i = 1; i <= h; i++)
        printGivenLevel(root, i);
}


int main()
{
    struct node *root=NULL;
    int r,t,terms;
    cout<<"Enter root : ";
    cin>>r;
    root=insert(root,r);
    cout<<endl<<"Enter no of terms : ";
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>terms;
        insert(root,terms);
    }

    cout<<endl<<"Inorder : ";
    inorder(root);

    int ht=height(root);
    cout<<endl<<"Left and Right Height : "<<ht<<endl;

    printLevelOrder(root);
    return 0;
}
