#include "vector.h"
template <>int vector<int>::size = 0;
template <>int vector<int>::capacity = 0;
template <class T>
vector<T>::vector(){
            this->pt2=NULL;
            this->pt = new T;
            std::cout << "Hello constructor Vector" << std::endl;
            capacity = 1;
}
template <class T>
vector<T>::vector(T d){
            this->pt = new T[d];
            this->capacity = d;
}
template <class T>
void vector<T>::printvector()
{
    if (this->pt == NULL && this->pt2 != NULL)
    {
        for (int i = 0; i < this->size; i++)
        {
            std::cout << this->pt2[i] << std::endl;
        }
    }
    else if (this->pt2 == NULL && this->pt != NULL)
    {
        for (int i = 0; i < this->size; i++)
        {
            std::cout << this->pt[i] << std::endl;
        }
    }
}
template <class T>
void vector<T>::push_back(T x)
{
    if (pt != NULL)
    {
        pt[this->size] = x;
        // std:: cout << "push thanh cong"<<std::endl;
        size++;
    }
    else if (pt2 != NULL)
    {
        pt2[this->size] = x;
        // std:: cout << "push thanh cong"<<std::endl;
        size++;
    }
    if (size > capacity)
    {
        int temp = this->size;
        size = 0;
        if (pt2 == NULL)
        {
            // std:: cout << "push pt2"<<std::endl;
            this->capacity = 2 * capacity;
            this->pt2 = new T[capacity];
            for (int i = 0; i < temp; i++)
            {
                pt2[this->size] = pt[this->size];
                this->size++;
            }
            this->pt = NULL;
        }
        else if (pt == NULL)
        {
            this->capacity = 2 * capacity;
            this->pt = new T[capacity];
            for (int i = 0; i < temp; i++)
            {
                // std:: cout << "push pt"<<std::endl;
                pt[this->size] = pt2[this->size];
                this->size++;
            }
            this->pt2 = NULL;
        }
    }
}