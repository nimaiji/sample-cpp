#include <iostream>

using namespace std;

/*
 * if you want returning an object by reference
 * it should be 'static'
 */

int &getOk() {
    static int n = 10;
    return n;
}

int &getWrong() {
    // Compile runtime error
    // g++ warning: reference to stack memory associated with local variable 'n'
    int n = 10;
    return n;
}

int main() {
    //getOk();
    //getWrong();
    return 0;
}