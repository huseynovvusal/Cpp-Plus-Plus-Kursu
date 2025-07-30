#include <iostream>

using namespace std;

int main()
{
    //    short int qisa = -32768;
    //    short qisa = -32768;
    //    signed short qisa = -32768; // signed -,0,+ <-> unsigned 0,+
    //    unsigned short qisa = 32769; // overflow

    //    cout << qisa << endl;

    //    long int x = 1000000;
    //    long x = 1000000;
    //    long long x = 1000000000000000000;

    //    cout << x << endl;

    cout << "sizeof(short) " << sizeof(short) << endl;
    cout << "sizeof(long) " << sizeof(long) << endl;
    cout << "sizeof(long long int) " << sizeof(long long int) << endl;
    cout << "sizeof(long double) " << sizeof(long double) << endl;

    return 0;
}
