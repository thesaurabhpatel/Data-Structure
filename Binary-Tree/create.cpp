#include<iostream>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
};

struct Node* newNode(int data)
{
	struct Node* node = (struct Node*)malloc(sizeof(struct Node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return(node);
}

void printInorder(struct Node* node)
{
	if(node == NULL)
		return;
	printInorder(node->left);
	cout<<node->data<<" ";
	printInorder(node->right);
}
int main()
{
	struct Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);

	root->left->left=newNode(4);
	root->left->right = newNode(5);

	printInorder(root);
	cout<<endl;
return(0);
}