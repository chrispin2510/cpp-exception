#include <iostream>

using std::cout;
using std::endl;
using std::exception;

/* function with potential division by 0 exception */
int abc (int a, int b, int c)
{
    return a + b * c + b / c;
}

int main()
{
    try { cout << abc(2,1,0) << endl; }
    catch (const exception& e) {
        cout << "Caught " << e.what() << endl;
    }
    return 0;
}

