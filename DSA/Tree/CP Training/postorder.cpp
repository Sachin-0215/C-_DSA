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

void postorder(Node *root){
    if(root==nullptr){
        return;
    }
    postorder(root->Lchild);
    postorder(root->Rchild);
    cout << root->data<<" ";
}

/*
         1
     2       3
   4   5   6   7
*/




int main()
{
    Node *root = new Node(1);
    root->Lchild = new Node(2);
    root->Rchild = new Node(3);

    root->Lchild->Lchild = new Node(4);
    root->Lchild->Rchild = new Node(5);

    root->Rchild->Lchild = new Node(6);
    root->Rchild->Rchild = new Node(7);

    cout << "Postorder Traversal : " << endl;
    postorder(root);
    return 0;
}

/* Not marked as  then it showing this error message
postorder.cpp: In function 'int main()':
postorder.cpp:19:28: error: 'Node::Node(int, Node*, Node*)' is private within this context
     Node *root = new Node(1);
                            ^
postorder.cpp:9:5: note: declared private here
     Node(int data, Node *Lchild = nullptr, Node *Rchild = nullptr)
     ^~~~
postorder.cpp:20:11: error: 'Node* Node::Lchild' is private within this context
     root->Lchild = new Node(2);
           ^~~~~~
postorder.cpp:7:11: note: declared private here
     Node *Lchild;
           ^~~~~~
postorder.cpp:20:30: error: 'Node::Node(int, Node*, Node*)' is private within this context
     root->Lchild = new Node(2);
                              ^
postorder.cpp:9:5: note: declared private here
     Node(int data, Node *Lchild = nullptr, Node *Rchild = nullptr)
     ^~~~
postorder.cpp:21:11: error: 'Node* Node::Rchild' is private within this context
     root->Rchild = new Node(3);
           ^~~~~~
postorder.cpp:8:11: note: declared private here
     Node *Rchild;
           ^~~~~~
postorder.cpp:21:30: error: 'Node::Node(int, Node*, Node*)' is private within this context
     root->Rchild = new Node(3);
                              ^
postorder.cpp:9:5: note: declared private here
     Node(int data, Node *Lchild = nullptr, Node *Rchild = nullptr)*/