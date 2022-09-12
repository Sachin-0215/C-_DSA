#include <iostream>

using namespace boost;

int main()
{
    using namespace std;
    cout << "Please work hard so that you can feel proud to your mom dad from your work. Give up is easy but it is not makes you successful person." << endl;
    
    cout << "Boost " << boost::boost << boost::level;

    return 0;
}

namespace boost
{
    int boost = 100;
    char level = 'A';
}

//  In function 'int main()':
// namespace.cpp:7:21: error: 'boost' is not a namespace-name
//      using namespace boost;
//                      ^~~~~
// namespace.cpp:7:26: error: expected namespace-name before ';' token
//      using namespace boost;
//                           ^
// namespace.cpp:8:25: error: 'boost' has not been declared
//      cout << "Boost " << boost::boost << boost::level;
//                          ^~~~~
// namespace.cpp:8:41: error: 'boost' has not been declared
//      cout << "Boost " << boost::boost << boost::level;

