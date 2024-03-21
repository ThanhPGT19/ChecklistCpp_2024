#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
    template <class T>
    class vector
    {
    private:
        T *pt;
        T *pt2;
        static int size;
        static int capacity;

    public:
        vector();
        vector(T d);
        void push_back(T x);
        void printvector();
    };
#endif