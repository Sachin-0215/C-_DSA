#include <iostream>
using namespace std;

void second_Large_small(int a[], int n)
{
     if (n == 1)
     {
          cout << -1 << endl;
     }
     int large = INT_MIN, second_large = INT_MIN;
     int small = INT_MAX, second_small = INT_MAX;
     for (int i = 0; i < n; i++)
     {
          large = max(large, a[i]);
          small = min(small, a[i]);
     }
     for (int i = 0; i < n; i++)
     {
          if (a[i] < second_small && a[i] != small)
          {
               second_small = a[i];
          }
          if (a[i] > second_large && a[i] != large)
          {
               second_large = a[i];
          }
     }
     cout << "Second Largest -> " << second_large << endl;
     cout << "Largest -> " << large << endl;
     cout << "Smallest -> " << small << endl;
     cout << "Second Smallest -> " << second_small << endl;
}

int main()
{
     int size;
     int a[] = {2, 8, 3, 5, 1, 7, 4};
     size = sizeof(a) / sizeof(a[0]);
     // cout << size << endl;
     second_Large_small(a, size);
     return 0;
}

/*
In function 'void second_Large_small(int*, int)':
second_largest.cpp:10:5: error: 'sort' was not declared in this scope
     sort(arr, arr + n);
     ^~~~
second_largest.cpp:10:5: note: suggested alternative: 'qsort'
     sort(arr, arr + n);
     ^~~~
     qsort
second_largest.cpp: In function 'int main()':
second_largest.cpp:21:21: error: expected primary-expression before ']' token
     size = sizeof(a[]) / sizeof(a[0]);*/