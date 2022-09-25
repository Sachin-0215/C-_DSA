#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *Lchild;
    Node *Rchild;
    Node(int data, Node *Lchild=nullptr, Node *Rchild=nullptr)
    {
        this->data = data;
        this->Lchild = Lchild;
        this->Rchild = Rchild;
    }
};

void inorder(Node *root){
    // corner case
    if(root==nullptr)
    {                                                   //              1
        return;                                         //          2      3
    }                                                   //       4     5 6    7
    inorder(root->Lchild);                             //               
    cout<<root->data << " ";                          //
    inorder(root->Rchild);                             //
}


int main()
{
    Node *root = new Node(1);
    root->Lchild = new Node(2);
    root->Rchild = new Node(3);

    root->Lchild->Lchild = new Node(4);
    root->Lchild->Rchild = new Node(5);

    root->Rchild->Lchild = new Node(6);
    root->Rchild->Rchild = new Node(7);

    cout << "Inorder Traversal: "<<endl;
    inorder(root);


    return 0;
}