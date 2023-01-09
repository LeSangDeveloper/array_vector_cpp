#include<iostream>
#include "array_vector.h"

using namespace std;

int main() {
    cout << "test ";
    ArrayVector<int> a;
    a.reserve(20);
    cout << "reserve ";
    a.insert(0, 3);
    cout << a[0] << " " << a[1] << endl;
    return 0;
}