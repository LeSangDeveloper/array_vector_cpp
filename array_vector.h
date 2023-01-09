#ifndef ARRAY_VECTOR_H
#define ARRAY_VECTOR_H

#include<string>

class RuntimeException {
    private:
        std::string errorMsg;
    public:
        RuntimeException(const std::string& msg) {errorMsg = msg;}
        std::string getMessage() const {return errorMsg;}
};

template<typename E>
class ArrayVector {
    private:
        int capacity;
        int n;
        E* A;
    public:
        ArrayVector();
        int size() const;
        bool empty() const;
        E& operator[](int n) throw(RuntimeException);
        E& at(int i) throw(RuntimeException);
        void reserve(int N);
        void insert(int o, const E& e);
};

#endif