#include <iostream>

using namespace std;

void swap(int &a, int &b) {
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int x = 10, y = 20;
    cout << "Before Swap:" << endl;
    cout << "X:\t" << x << endl;
    cout << "Y:\t" << y << endl;
    cout << "---------------------" << endl;
    swap(x, y);
    cout << "After Swap:" << endl;
    cout << "X:\t" << x << endl;
    cout << "Y:\t" << y << endl;
    return 0;
}