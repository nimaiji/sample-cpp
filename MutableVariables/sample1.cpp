#include <iostream>

using namespace std;

class Sample{
public:
    int x;
    mutable int y;
    Sample(int x,int y):x(x),y(y){};
};

int main(){
    const Sample sample(10,10);
    cout<<"Y:\t"<<sample.y<<endl;
    sample.y += 10;
    cout<<"Y:\t"<<sample.y<<endl;
    return 0;
}