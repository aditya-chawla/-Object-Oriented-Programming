#include <iostream>
using namespace std;

class BST
{
	int data;
	BST *left, *right;

public:
	BST();

	BST(int);

	BST* Insert(BST*, int);

	void Inorder(BST*);
};

BST ::BST()
	: data(0)
	, left(NULL)
	, right(NULL)
{
}

BST ::BST(int value)
{
	data = value;
	left = right = NULL;
}

BST* BST ::Insert(BST* root, int value)
{
	if (!root)
	{
		return new BST(value);
	}
	if (value > root->data)
	{
		root->right = Insert(root->right, value);
	}
	else
	{
		root->left = Insert(root->left, value);
	}

	return root;
}

void BST ::Inorder(BST* root)
{
	if (!root) {
		return;
	}
	Inorder(root->left);
	cout << root->data << endl;
	Inorder(root->right);
}

int main()
{
	int x;
	BST b, *root = NULL;
	cout<<"Enter the root"<<endl;
	cin>>x;
	root = b.Insert(root,x);
	cout<<"Enter the elements (-1 to stop) : "<<endl;
	while(1)
	{
	cin>>x;
	if(x==-1)
	break;
	b.Insert(root,x);
	}
	cout<<"BINARY SEARCH TREE AFTER INSERTION :"<<endl;
	b.Inorder(root);
	return 0;
}
