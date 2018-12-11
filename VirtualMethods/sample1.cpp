#include <iostream>

using namespace std;

class sample1 {
public:
    virtual void method1() = 0;

    virtual void method2() {
        cout << "sample1 : method2" << endl;
    };
};

class sample2 : sample1 {
public:
    void method1() {
        cout << "sample2 : method1" << endl;
    }
};

class sample3 : sample2 {
public:
    void method1() {
        cout << "sample3 : method1" << endl;
    }

    void method2() {
        cout << "sample3 : method2" << endl;
    }
};

int main() {
    sample2 s2;
    sample3 s3;
    s2.method1();
    s3.method1();
    s3.method2();
    return 0;
}