#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *Lchild;
    Node *Rchild;
    Node(int data, Node *Lchild = nullptr, Node *Rchild = nullptr)
    {
        this->data = data;
        this->Lchild = Lchild;
        this->Rchild = Rchild;
    }
};

void preorder(Node *Root)
{
    if(Root==nullptr)
        return;
    cout << Root->data<<" ";
    preorder(Root->Lchild);
    preorder(Root->Rchild);
}

int main()
{
    Node *Root = new Node(1);
    Root->Lchild = new Node(2);
    Root->Rchild = new Node(3);                                               //            1
    Root->Lchild->Lchild = new Node(4);                                       //       2         3
    Root->Lchild->Rchild = new Node(5);                                       //    4     5    6    7

    Root->Rchild->Lchild = new Node(6);
    Root->Rchild->Rchild = new Node(7);

    cout << "Preorder Traversal : ";
    preorder(Root);
    return 0;
}