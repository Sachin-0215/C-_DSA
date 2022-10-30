#include <iostream>
#include <queue>
#include<vector>
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

void level_order(Node *root)
{
    vector<int> v;
    int level = 1;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            Node *n = q.front();
            q.pop();
            cout << "Level : "<<level<<" -> "<<n->data << " ";
            v.push_back(n->data);
            if (n->Lchild)
            {
                q.push(n->Lchild);
            }
            if (n->Rchild)
            {
                q.push(n->Rchild);
            }
        }
        cout << endl;
        level++;
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
    cout << "BFS is: " << endl;
    level_order(Root);

    return 0;
}