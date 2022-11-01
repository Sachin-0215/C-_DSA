#include <iostream>
using namespace std;

// int getMax(int a[],int size){
//     int maxxx = INT16_MIN;
//     for (int i = 0; i < size;i++){
//         maxxx = max(maxxx, a[i]);
//     }
//     return maxxx;
// }
// int getMin(int a[],int size){
//     int minnn = INT16_MAX;
//     for (int i = 0; i < size;i++){
//         minnn = min(minnn, a[i]);
//     }
//     return minnn;
// }

pair<int, int> getMax_Min(int a[], int size)
{
    int maxxx = INT16_MIN;
    int minnn = INT16_MAX;
    for (int i = 0; i < size; i++)
    {
        minnn = min(minnn, a[i]);
        maxxx = max(maxxx, a[i]);
    }
    pair<int, int> p = make_pair(maxxx, minnn);
    return p;
}

int main()
{
    int a[] = {2, 30, 22, 1, 400};
    int size = sizeof(a) / sizeof(a[0]);
    // cout<<getMax(a, size)<<endl;
    // cout<<getMin(a, size)<<endl;
    cout<<getMax_Min(a, size).first<<" , "<<getMax_Min(a, size).second;


    return 0;
}