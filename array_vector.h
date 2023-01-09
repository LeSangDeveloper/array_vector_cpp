#ifndef ARRAY_VECTOR_H
#define ARRAY_VECTOR_H

#include<string>

class RuntimeException {
    private:
        string errorMsg;
    public:
        RuntimeException(string& msg const)
        : errorMsg(msg) {}
};

template<typename E>
class ArrayVector {
    private:
        int capacity;
        int n;
        E* A;
    public:
        int size() const;
        bool empty() const;
        E& operator[](int n);
        E& at(int i) throw(RuntimeException);
        void reverse(int N);
        void insert(int o, const E& e);
}

#endif