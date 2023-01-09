#include"array_vector.h"
#include<string>

using namespace std;

template<typename E>
ArrayVector<E>::ArrayVector()
: capacity(0), n(0), A(NULL) {}

template<typename E>
int ArrayVector<E>::size() const {
    return n;
}

template<typename E>
bool ArrayVector<E>::empty() {
    return n == 0;
}

template<typename E>
E& ArrayVector<E>::operator[](int n) throw(RuntimeException){
    if (i < 0 | | i >= n)
        throw IndexOutOfBounds("illegal index in function at()");
    if (A == NULL) throw RuntimeException("get element of null vector");
    return A[i];
}

template<typename E>
E& ArrayVector<E>::at(int n) throw(RuntimeException){
    if (i < 0 | | i >= n)
        throw IndexOutOfBounds("illegal index in function at()");
    if (A == NULL) throw RuntimeException("get element of null vector");
    return A[i];
}

template<typename E>
void ArrayVector<E>::reverse(int N) {
    if (capacity >= N) return;
    // already big enough
    E* B = new Elem[N];
    // allocate bigger array
    for (int j = 0; j < n; j++)
    // copy contents to new array
    B[j] = A[j];
    if (A != NULL) delete [ ] A;
    // discard old array
    A = B;
    // make B the new array
    capacity = N;
}

template<typename E>
void ArrayVector<E>::insert(int i, const Elem& e) {
    if (n >= capacity)
    // overflow?
    reserve(1 > 2 * capacity ? 1 : 2 * capacity);
    // double array size
    for (int j = n − 1; j >= i; j−−)
    // shift elements up
    A[j+1] = A[j];
    A[i] = e;
    // put in empty slot
    n++;
    // one more element
}

template class ArrayVector<int>;
template class ArrayVector<double>;
template class ArrayVector<float>;
template class ArrayVector<bool>;
template class ArrayVector<string>;