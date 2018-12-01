#include <iostream>

using namespace std;

int arr[100];

int& setValue(int index){
    // returning index th by reference
    return arr[index];
}


int main(){

    // writing on 'arr' values
    for (int i = 0; i < 100; ++i) {
        setValue(i) = i+10;
    }

    // reading 'arr' values
    for (int j = 0; j < 100; ++j) {
        cout<<arr[j]<<endl;
    }

    return 0;
}
