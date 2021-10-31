#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left ,*right;
};

Node *create()
{
    Node *newNode;
    newNode = new Node;
    int x;
    cout<<"Enter the data : (if you want to exit then enter -1 :"<<endl;
    cin>>x;

    if(x==-1)
    {
        return NULL;
    }
    newNode->data= x;
    cout<<"enter the left child of "<<x<<endl;
    newNode->left = create();
    cout<<"Enter the right child of "<<x<<endl;
    newNode->right = create();
    return newNode;
}

void InOrder(Node *root)
{
    if(root == NULL) return;
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}
void PreOrder(Node *root)
{
    if(root == NULL) return;
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}
void PostOrder(Node *root)
{
    if(root==NULL) return;
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}

void levelOrder(Node *root)
{
    if(root ==NULL) return;
    queue<Node*> qnode;
    qnode.push(root);
    while (!qnode.empty())
    {
        /* code */
        Node *temp = qnode.front();
        qnode.pop();
        cout<<temp->data<<" ";
        if(temp->left != NULL) qnode.push(temp->left);
        if(temp->right != NULL) qnode.push(temp->right);

    }
    
}

int height(Node *root)
{
    int leftheight=0;
    int rightheight=0;
    if(root ==NULL) return -1;
    else{
        leftheight= height(root->left);
        rightheight= height(root->right);
        if(leftheight>rightheight)
        return leftheight + 1;
        else return rightheight +1;
    }
}

int size(Node *root)
{
    if(root==NULL) return 0;
    return (1+size(root->left)+size(root->right));
}

int main()

{
    Node *root=NULL;
    root = create();

    cout<<"InOrder Traversal :"<<endl;
    InOrder(root);
    cout<<endl<<"PreOrder Traversal :"<<endl;
    PreOrder(root);
    cout<<endl<<"PostOrder Traversal :"<<endl;
    PostOrder(root);
    cout<<endl<<"levelOrder Traversal :"<<endl;
    levelOrder(root);

    cout<<"Height of tree :"<<endl;
    cout<<height(root)<<endl;
    cout<<"Size of the Tree :"<<endl;
    cout<<size(root)<<endl;
}