#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node* left, * right;
};

Node* newNode(int data)
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->left = node->right = NULL;
	return (node);
}

Node* insertLevelOrder(int arr[], Node* root,int i, int n)
{
	if (i < n)
	{
		Node* temp = newNode(arr[i]);
		root = temp;

		root->left = insertLevelOrder(arr,root->left, 2 * i + 1, n);

		root->right = insertLevelOrder(arr,root->right, 2 * i + 2, n);
	}
	return root;
}
void inOrder(Node* root)
{
	if (root != NULL)
	{
		inOrder(root->left);
		cout << root->data <<" ";
		inOrder(root->right);
	}
}
int main()
{
	int n;
	cout<<"Enter the number of elements: ";
	cin>>n;
	int a[n];
	cout<<"Enter the elements: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"BINARY TREE (INORDER) :"<<endl;
	Node* root = insertLevelOrder(a, root, 0, n);
	inOrder(root);
}
