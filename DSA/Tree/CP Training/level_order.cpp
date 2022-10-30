#include <iostream>
#include<vector>
#include<queue>
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

void levelOrder(Node *root){
    vector<int> v;
    queue<Node *> q;
    q.push(root);
    while(!q.empty())
    {
        Node *n = q.front();
        q.pop();
        cout << n->data << " ";
        v.push_back(n->data);
        if(n->Lchild)
            q.push(n->Lchild);
        if(n->Rchild)
            q.push(n->Rchild);
    }
}

void LevelOrder(Node *root){
    queue<Node *> q;
    q.push(root);
    int Level = 1;
    while(!q.empty()){
        int size = q.size();
        for (int i = 0; i < size;i++){
            Node *n = q.front();
            q.pop();
            cout << "Level "<<Level <<": "<<n->data << " ";
            if(n->Lchild)
                q.push(n->Lchild);
            if(n->Rchild)
                q.push(n->Rchild);
        }
        cout << endl;
        Level++;
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
    cout << "BFS is : " << endl;
    // levelOrder(Root);
    LevelOrder(Root);
    
    return 0;
}