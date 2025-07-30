#include <iostream>

using namespace std;

int main()
{
    // 1 bayt = 8 bit

    // 1 bit = 0/1
    // 2^(1) = 2
    // 2^8 = 256 // 127

    // 4 bayt = 32 bit
    // 2^32 = +, -, 0
    // 2^32 / 2 = 2^31
    // -2^31 -> 2^31 - 1

    // Float
    float f = 1.15;

    //    cout << f << endl;

    double d = 1.15555523;

    char c = 'a';

    c += 3;

    int sira = c;

    // a, b, c, d, e, ...

    //    cout << (int) c << endl;
    //    cout << c << ' ' << sira << endl;

    // 0, 1 -> 1 bit -> 1 bayt

    //    cout << sizeof(bool) << endl;

    cout << sizeof(double) << endl;

    return 0;
}
