// 4 pillars of oops
// # Encapsulation- binding info in capusle wrapping up of data member and member function.
// class {
//     // data memebr

//     // memeber function
// };

#include <iostream>
using namespace std;

class Human
{
private:
    int height;
    int weight;

public:
    void setHeigth(int height){
        this->height = height;
    }
    int getHeight() { return height; }

    void setWeight(int weight){
        this->weight = weight;
    }
    int getweight() { return weight; }
};

int main(){
    Human boy;
    boy.setHeigth(164);
    boy.getHeight();
}