#include <iostream>
using namespace std;

int main(){
    int a=5;

    int *ptr = &a;

    cout << a <<endl;
    cout << &a << endl;
    cout << ptr << endl;

    return 0;
}

// whenever creating a pointer point it somewhere.