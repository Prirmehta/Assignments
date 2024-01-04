#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node{
int id;
struct Node *left;
struct Node *right;
};
struct Node *rootHead=NULL;

struct Node * creatNewNode(int id) {
	struct Node *newNode =NULL;
	newNode= (struct Node *) malloc(sizeof(struct Node));
	memset(newNode, 0, sizeof(struct Node));
	newNode->id=id;
	newNode->left = NULL;
	newNode->right= NULL;
	return newNode;
}
struct Node * insertNodeToBST(struct Node *root, int id){
	struct Node *tempNode = (struct Node*) malloc(sizeof(struct Node));
   struct Node *current;
   struct Node *parent;
   tempNode->id = id;
   tempNode->left = NULL;
   tempNode->right = NULL;
   
   //if tree is empty
   if(root == NULL) {
      root = tempNode;
   } else {
      current = root;
      parent = NULL;
      while(1) {
         parent = current;
         
         //go to left of the tree
         if(id < parent->id) {
            current = current->left;
            
            //insert to the left
            if(current == NULL) {
               parent->left = tempNode;
               return 0;
            }
         }//go to right of the tree
         else {
            current = current->right;
            
            //insert to the right
            if(current == NULL) {
               parent->right = tempNode;
               return 0;
            }
         }
      }
   }
}
void displayBSTInOrder(struct Node * root){
	if(root !=NULL){
		displayBSTInOrder(root->left);
		printf("%d",root->id);
		displayBSTInOrder(root->right);
	}
}
int main(){
    rootHead = insertNodeToBST(rootHead,4);
    insertNodeToBST(rootHead, 2);
    insertNodeToBST (rootHead,3);
	insertNodeToBST(rootHead, 6);
	insertNodeToBST(rootHead, 5);
	insertNodeToBST(rootHead, 7);
	insertNodeToBST(rootHead, 1);
	displayBSTInOrder(rootHead);
	return 0;
}




