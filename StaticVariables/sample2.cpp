#include <iostream>

using namespace std;

class Sample {
public:
    static int count;

    Sample() {
        count++;
        cout << "You have " << count << " 'Sample' objects." << endl;
    }
};

int Sample::count = 0;

int main() {
    Sample sample1;
    Sample sample2;
    return 0;
}