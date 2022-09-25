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

int height(Node *root)
{
    if (root == nullptr)
        return 0;
    int LH = height(root->Lchild);
    int RH = height(root->Rchild);
    return max(LH, RH)+1;
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
    cout << "Height of the tree is " << height(Root) << endl;
    return 0;
}