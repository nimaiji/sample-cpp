#include <iostream>

using namespace std;

int &sum(int &a, int &b) {
    static int c;
    c = a + b;
    return c;
}

void pow(int &a, int p) {
    const int c = a;
    for (int i = 1; i <= p; ++i) {
        a *= c;
    }
}

int main() {
    int a = 10, b = 2;
    cout << "A:\t" << a << endl;
    cout << "B:\t" << b << endl;
    cout << "A+B:\t" << sum(a, b) << endl;
    pow(a, b);
    cout << "A^b:\t" << a << endl;
    return 0;
}