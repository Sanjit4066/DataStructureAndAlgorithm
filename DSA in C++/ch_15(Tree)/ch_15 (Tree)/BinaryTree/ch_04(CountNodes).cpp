// counting the numbers of nodes in a tree
#include<iostream>
#include<vector>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;
    
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
static int idx=-1;
Node* buildTree(vector<int> preorder){  // Time Complexity -> O(n)
    idx++;

    if(preorder[idx] == -1){
        return NULL;
    }

    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder); // build LEFT
    root->right = buildTree(preorder); // build RIGHT
    
    return root;
}
int countNodes(Node* root){
    if (root == NULL)
    {
        return 0;
    }
    int leftCount = countNodes(root->left);
    int rightCount = countNodes(root->right);

    return leftCount + rightCount + 1; // plus one will include root node. 
}
int main(){
  vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
  Node* root = buildTree(preorder);
//   cout<<root->data<<endl;
//   cout<<root->left->data<<endl;
//   cout<<root->right->data<<endl;
  cout<<"Numbers of Nodes in given Tree is:"<<countNodes(root);
  return 0;
}