/* throwing exception of type int */
#include <iostream>

using std::cout;
using std::endl;
using std::exception;

int abc(int a, int b, int c)
{
    if (a < 0 || b < 0 || c < 0) 
        throw 1;
    if (a == 0 || b == 0 || c ==0)
        throw 2;
    return a + b *c + b / c;
}

int main()
{
    try {
        cout << abc(2,1,0) << endl;
        cout << abc(-1,-2,-4) << endl;
        cout << abc(0,0,0) << endl;
    }
    catch (const int& e) {
        cout << "Caught " << e << endl;
    }
}
