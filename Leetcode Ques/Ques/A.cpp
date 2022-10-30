#include<iostream>
using namespace std;

int findcomplement(int num)
{
    int mask = 0;
    while(mask<num){
        mask = (mask << 1)|1;       // 00||01->01    10||01->11   110||001->111
    }
    int ans=(~num)&mask;      //11...1010 & 000..0111(mask) -> 010 ->2 
    return ans;//2
}
int main()
{
    int n;
    cin >> n;
    cout<<"Complement of "<<n<<" : "<<findcomplement(n);
    return 0;
}