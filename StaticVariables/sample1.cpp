#include <iostream>

using namespace std;


int getY() {
    static int y;
    y++;
    return y;
}

int main() {
    cout << "Y:\t" << func() << endl;
    cout << "Y:\t" << func() << endl;
    cout << "Y:\t" << func() << endl;
    return 0;
}