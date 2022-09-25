#include <iostream>
#include <deque>
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

void zig_zag(Node *root){
    deque<Node *> dq;
    dq.push_front(root);
    int s;
    int level = 1;
    while(!dq.empty()){
        s = dq.size();
        for (int i = 0; i < s;i++)

    }
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
    



    return 0;
}