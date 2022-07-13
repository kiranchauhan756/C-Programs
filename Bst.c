#include<stdio.h>
#include<stdlib.h>
typedef struct bst{//creating a nodd
    int info;
    struct bst *left;
    struct bst *right;
}node;


node *root=NULL,*temp;

void Insert(node **root,int key){
 temp=(node *)malloc(sizeof(node));
if(*root==NULL){
    *root=temp;   
 }

 else if(key < (*root)->info){
    Insert(&((*root)->left),key);//now this value become root and its left and right place are null
 }

 else if(key >= (*root)->info){
     Insert(&((*root)->right),key);
 }
 
 temp->info=key;
 temp->left=NULL;
 temp->right=NULL;
 
}

struct bst* newNode(int item)
{
    struct bst* temp1
        = (struct bst*)malloc(sizeof(struct bst));
    temp1->info = item;
    temp1->left = temp1->right = NULL;
    return temp1;
}
/* Given a non-empty binary search
   tree, return the node
   with minimum key value found in
   that tree. Note that the
   entire tree does not need to be searched. */
struct bst* minValueNode(struct bst* node)
{
    struct bst* current = node;
 
    /* loop down to find the leftmost leaf */
    while (current && current->left != NULL)
        current = current->left;
 
    return current;
}
 
/* Given a binary search tree
   and a key, this function
   deletes the key and
   returns the new root */
struct bst* deleteNode(struct bst* root, int key)
{
    // base case
    if (root == NULL)
        return root;
 
    // If the key to be deleted
    // is smaller than the root's
    // key, then it lies in left subtree
    if (key < root->info)
        root->left = deleteNode(root->left, key);
 
    // If the key to be deleted
    // is greater than the root's
    // key, then it lies in right subtree
    else if (key > root->info)
        root->right = deleteNode(root->right, key);
 
    // if key is same as root's key,
    // then This is the node
    // to be deleted
    else {
        // node with only one child or no child
        if (root->left == NULL) {
            struct bst* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            struct bst* temp = root->left;
            free(root);
            return temp;
        }
 
        // node with two children:
        // Get the inorder successorl
        // (smallest in the right subtree)
        struct bst* temp = minValueNode(root->right);
 
        // Copy the inorder
        // successor's content to this node
        root->info = temp->info;
 
        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->info);
    }
    return root;
}


void TraversePre(node *root){

    if(root!=NULL){
         printf("%d ",root->info);
        TraversePre(root->left);
        TraversePre(root->right);
    }
}
void TraverseInOrder(node *root){

    if(root!=NULL){

        TraverseInOrder(root->left);
        printf("%d ",root->info);
        TraverseInOrder(root->right);
    }
}

void TraversePost(node *root){

    if(root!=NULL){

        TraversePost(root->left);
        TraversePost(root->right);
         printf("%d ",root->info);
    }
}

  
void main(){
    int choice,key;
    while(1){
    printf("Enter your choice\n\
    1.Insertion\n\
    2.Print in PreOrder\n\
    3.Print in PreOrder\n\
    4.Print in PreOrder\n\
    5.Deletion\n\
    6.exit\n");
    scanf("%d",&choice);
    switch(choice){
    case 1:
   
printf("Enter the info that u want to insert\n");
scanf("%d",&key);
    Insert(&root,key);
    printf("Successfully inserted\n");
    break;

    case 2:
        printf("Info in inorder traversal\n");
         TraversePre(root);
        break;

        case 3:
        printf("Info in inorder traversal\n");
         TraverseInOrder(root);
        break;

        case 4:
        printf("Info in inorder traversal\n");
         TraversePost(root);
        break;
        
        case 5:
        printf("Enter the info that u want to delete \n");
        scanf("%d",&key);
        deleteNode(root,key);
        break;

        case 6:
        exit(0);
        break;

        default:
        printf("Wrong choice\n");
        }
    }
}