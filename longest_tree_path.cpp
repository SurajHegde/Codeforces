/*Find max of left diameter,right diameter and lheight + rheight +1*/
#include<bits/stdc++.h>
using namespace std;
struct node {
  int data;
  struct node *left, *right;
};
int height (struct node *root)
{
  if(root==NULL)
    return 0;
  return 1 + max(height(root->left),height(root->right));
}

int diameter(struct node *root)
{
  if(root==NULL)
    return 0;
  int lh = height(root->left);
  int rh = height(root->right);
  int ld = diameter(root->left);
  int rd = diameter(root->right);
  return max(ld,max(rd,lh + rh + 1));
}
struct node *newNode(int data)
{
  struct node *temp = (struct node*)malloc(sizeof(struct node));
  temp->data = data;
  temp->left = NULL;
  temp->right = NULL;
  return temp;
}
