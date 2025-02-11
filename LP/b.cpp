
#include<iostream>

using namespace std;

struct node
{
   int data;
   struct node *left,*right;
};

struct node *root=NULL;

node* bt()
{
	struct node *nn;
	nn=new node;
	cout<<"Enter data : ";
	cin>>nn->data;

	if(nn->data==0)
		return NULL;
	return nn;
}

node* create(node *root)
{
		struct node *nn;
		nn=bt();
		if(root==NULL)
		{
			root=nn;
			root->left=NULL;
			root->right=NULL;
			return root;
		}

		else if(nn->data<root->data)
		{
			cout<<"Inserted at left side of  "<<nn->data<<endl;
			root->left=create(nn);

		}
		else
		{
			cout<<"Inserted at right side of  "<<nn->data<<endl;
			root->right=create(nn);
		}
	return root;
}

void inorder(node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		cout<<root->data<<"     ";
		inorder(root->right);
	}
}


int main()
{
	root=create(root);
	cout<<"Inorder traversal :    ";
	inorder(root);
	cout<<endl<<endl;

	return 0;
}
