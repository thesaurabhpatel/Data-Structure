#include<iostream>
using namespace std;

struct Node { 
  int key; 
  Node *left, *right; 
  Node (int x) 
  { 
     key = x; 
     left = right = NULL; 
  } 
};

void inorder(Node* temp) 
{ 
    if (!temp) 
        return; 
  
    inorder(temp->left); 
    cout << temp->key << " "; 
    inorder(temp->right); 
}

void insert(Node* temp ,int key)
{
	queue<Node*> q;
	
}


int main()
{
	
}