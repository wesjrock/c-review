/* Binary Search Tree 
	Concepts:
		- Depth of a node:  number of edges in path from Root to a specific node
		- Height of a node: number of edges in Longest path from the Node to a leaf node
*/

#include <stdlib.h>
#include <stdio.h>

typedef struct Node{
	int data;
	struct Node *left;
	struct Node *right;
} Node;

Node* GetNewNode(int data);
Node* Insert(Node *root, int data);
int Search(Node *root, int data);
int FindMin(Node *root);
int FindMinRecursive(Node *root);
int FindMax(Node *root);
int FindMaxRecursive(Node *root);
void Preorder(Node *root);
void Inorder(Node *root);
void Postorder(Node *root);

int main(){
	Node *root = NULL;

	root = Insert(root,15);	
	root = Insert(root,10);	
	root = Insert(root,20);
	root = Insert(root,25);
	root = Insert(root,8);
	root = Insert(root,12);

	int n;
	printf("Enter number to be searched: ");
	scanf("%d",&n);

	if(Search(root, n) == 1)
		printf("Found\n");
	else
		printf("Not Found\n");

	return 0;
}

Node* GetNewNode(int data){
	Node *newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;

	return newNode;
}

Node* Insert(Node *root, int data){
	if(root == NULL){ // empty tree
		root = GetNewNode(data);
	}
	else if(data <= root->data){ // insert in left sub-tree
		root->left = Insert(root->left, data);
	}
	else{ // insert in right sub-tree
		root->right = Insert(root->right, data);
	}

	return root;
}

int Search(Node *root, int data){
	if(root == NULL){
		return 0;
	}
	else if(root->data == data){
		return 1;
	}
	else if(data <= root->data){
		return Search(root->left, data);
	}
	else{
		return Search(root->right, data);
	}
}

int FindMin(Node *root){
	if(root == NULL){
		printf("Error: Tree is empty!\n");
		return -1;
	}
	while(root->left != NULL){ // search in left subtree
		root = root->left;
	}

	return root->data;
}

int FindMinRecursive(Node *root){
	if(root == NULL){
		printf("Error: Tree is empty!\n");
		return -1;
	}
	else if(root->left == NULL){ // found a leaf node
		return root->data;
	}

	// search in left subtree
	return FindMinRecursive(root->left);
}

int FindMax(Node *root){
	if(root == NULL){
		printf("Error: Tree is empty!\n");
		return -1;
	}
	while(root->right != NULL){ // search in right subtree
		root = root->right;
	}

	return root->data;
}

int FindMaxRecursive(Node *root){
	if(root == NULL){
		printf("Error: Tree is empty!\n");
		return -1;
	}
	else if(root->right == NULL){ // found a leaf node
		return root->data;
	}

	// search in right subtree
	return FindMaxRecursive(root->right);
}

void Preorder(Node *root){
	// if tree/sub-tree is empty, return and exit
	if(root == NULL) return;

	printf("%c ",root->data); // Print data
	Preorder(root->left);     // Visit left subtree
	Preorder(root->right);    // Visit right subtree
}

void Inorder(Node *root){
	if(root == NULL) return;

	Inorder(root->left);       //Visit left subtree
	printf("%c ",root->data);  //Print data
	Inorder(root->right);      // Visit right subtree
}

void Postorder(Node *root){
	if(root == NULL) return;

	Postorder(root->left);    // Visit left subtree
	Postorder(root->right);   // Visit right subtree
	printf("%c ",root->data); // Print data
}