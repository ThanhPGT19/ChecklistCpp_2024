#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
    template <class T>
    class vector
    {
    private:
        T *pt;
        static int size;
        static int capacity;

    public:
        vector();
        vector(T d);
        void push_back(T x);
        void pop_back();
        void printvector();
        vector &operator=(vector &rhs);
        T &operator[](int index);
        /* Size of vector */
        int vsize();
        /* Check for the empty vector */
        bool empty();
        /* Add the element into the Position Pos*/
        void insert(int pos, T newElement);
        /* Check whether the vector is empty */
        void erase(int pos);
        /* Free all the vector */
        void clear();
    };
#include "vector.cpp"
#endif