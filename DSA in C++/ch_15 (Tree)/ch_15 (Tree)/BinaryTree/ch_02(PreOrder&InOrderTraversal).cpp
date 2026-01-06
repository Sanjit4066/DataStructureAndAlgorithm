// Preorder Traversal
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
static int idx = -1;
Node *buildTree(vector<int> preorder)
{ // Time Complexity -> O(n)
    idx++;

    if (preorder[idx] == -1)
    {
        return NULL;
    }

    Node *root = new Node(preorder[idx]);
    root->left = buildTree(preorder);  // build LEFT
    root->right = buildTree(preorder); // build RIGHT

    return root;
}
// PreOrder Traversal || TimeComplexity -> O(n) || root->left->right
void preOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
// InOrder Traversal || TimeComplexity -> O(n) || left->root->right
void inOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}
// PostOrder Traversal || TimeComplexity -> O(n) ||left->right->root
void postOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}
// Levelorder traversal || Time complexity -> O(n) || Itertive Approach (using Queue)
void levelOrderTraversal(Node *root)
{
    if (!root) return;

    queue<Node*> q;
    q.push(root);
    q.push(NULL); // level separator

    while (!q.empty())
    {
        Node* curr = q.front();
        q.pop();

        if (curr == NULL)
        {
            cout << endl; // finish one level

            if (!q.empty())
                q.push(NULL); // add next level marker

            continue;
        }

        cout << curr->data << " ";

        if (curr->left)
            q.push(curr->left);

        if (curr->right)
            q.push(curr->right);
    }
}
int main()
{
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1}; // -1 represents NULL value
    Node *root = buildTree(preorder);
    //   cout<<root->data<<endl;
    //   cout<<root->left->data<<endl;
    //   cout<<root->right->data<<endl;
    cout << "preOrder Traversal:";
    preOrder(root);
    cout << endl;
    cout << "inOrder Traversal:";
    inOrderTraversal(root);
    cout << endl;
    cout << "postOrder Traversal:";
    postOrderTraversal(root);
    cout << endl;
    cout << "levelorder Traversal:";
    levelOrderTraversal(root);
    cout << endl;
    return 0;
}