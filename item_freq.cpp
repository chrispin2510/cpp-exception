#include <iostream>

using std::cout;
using std::endl;

/* return frequency of accourrence of item x */
template <class T, size_t N>
int fc(T (&a)[], T x)
{
    if (N < 1) { throw "array size is less than 1"; }
    size_t count = 0, i;
    for (i = 0; i < N; i++) {
        if (a[i] == x) { count++; }
    }
    return count;
}

int main()
{
    int a[] = {1,2,3,4,4,4,5};
    cout << "The occurence of 4 is ";
    try {
        cout << fc<int,0>(a,4) << " times.\n";
    }
    catch (const char*& e) {
        cout << "\nCaught " << e << endl;
    }
}
