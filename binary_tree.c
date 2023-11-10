#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *left, *right;
};
struct node*new_node(int item){
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = item;
    temp->left = NULL;
    temp-> right= NULL;
    return temp;
};
struct node*inorder_traversal(struct node* root){
    if(root != NULL){
        inorder_traversal(root->left);
        printf("%d\n", root->data);
        inorder_traversal(root->right);
    }
};
struct node*insertion(struct node*node, int data){
    if(node == NULL){
        return new_node(data);
    }
    if(data < node->data){
        node->left = insertion(node->left, data);
    }
    if(data > node->data){
        node->right = insertion(node->right, data);
    }
    return node;
};
int main(){
    struct node*root = NULL;
    root=insertion(root,40);
    insertion(root,35);
    insertion(root,28);
    insertion(root,37);
    insertion(root,55);
    insertion(root,45);
    insertion(root,43);
    insertion(root,50);
    insertion(root,58);
    insertion(root,56);
   
    inorder_traversal(root);
    return 0;
}
