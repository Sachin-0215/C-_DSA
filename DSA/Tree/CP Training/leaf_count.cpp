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

int leafcount(Node *root)
{
    if(root==nullptr)
        return 1;
    if(root->Lchild==nullptr && root->Rchild==nullptr)
        return 1;
    int LC = leafcount(root->Lchild);
    int RC = leafcount(root->Rchild);
    return LC + RC+1;
}

int main()
{
    Node *Root = new Node(1);
    Root->Lchild = new Node(2);
    Root->Rchild = new Node(3);
    Root->Lchild->Lchild = new Node(4); //            1
    Root->Lchild->Rchild = new Node(5); //       2          3
                                        //    4      5    6    7

    Root->Rchild->Lchild = new Node(6);
    Root->Rchild->Rchild = new Node(7);
    cout << "Total No. of the Node in a tree is " << leafcount(Root) << endl;
    return 0;
}