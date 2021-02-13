#include <iostream>

using std::cout;
using std::endl;

/* function with potential division by 0 exception */
int abc (int a, int b, int c)
{
    if (a <= 0 || b <= 0 || c <= 0)
        throw "All parameters should be > 0";
    return a + b * c + b / c;
}

int main()
{
    cout << abc(2,1,0) << endl;
}

