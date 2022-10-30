#include <iostream>
#include<vector>
#include<stack>
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

// vector<int> iter_preorder(Node*root){
//     vector<int> preorder;
//     if(!root){
//         return preorder;
//     }
//     stack<Node *> stk;
//     stk.push(root);
//     Node *n;
//     while(!stk.empty()){
//         n = stk.top();
//         stk.pop();
//         preorder.push_back(n->data);
//         if(n->Rchild){
//             stk.push(n->Rchild);
//         }
//         if(n->Lchild){
//             stk.push(n->Lchild);
//         }
//     }
//     return preorder;
// }

int main()
{
    Node *Root = new Node(1);
    Root->Lchild = new Node(2);
    Root->Rchild = new Node(3);                                               //            1
    Root->Lchild->Lchild = new Node(4);                                       //       2         3
    Root->Lchild->Rchild = new Node(5);                                       //    4     5    6    7

    Root->Rchild->Lchild = new Node(6);
    Root->Rchild->Rchild = new Node(7);

    cout << "Preorder Traversal : "<<endl;
    return 0;
}