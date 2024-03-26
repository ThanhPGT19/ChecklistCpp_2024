#include "vector.h"
// template <>int vector<int>::size = 0;
// template <>int vector<int>::capacity = 0;
template <class T>
vector<T>::vector(){
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
    if (this->pt != NULL)
    {
        for (int i = 0; i < this->size; i++)
        {
            std::cout << this->pt[i] << std::endl;
        }
    }else {
        std:: cout<< "This vector no element"<<std::endl;
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
    if (size > capacity)
    {
        int temp = this->size;
        size = 0;
        T *ptr = this->pt;
        this->capacity = 2 * capacity;
        this->pt = new T[capacity];
        for (int i = 0; i < temp; i++)
        {
                // std:: cout << "push pt"<<std::endl;
                pt[this->size] = ptr[this->size];
                this->size++;
        }
        delete ptr; 
    }
}
template <class T>
void vector<T>::pop_back(){
    this->size--;
}
template <class T>
vector<T>& vector<T>:: operator=(vector<T> &rhs){
    if(this->pt!=NULL)this->pt=NULL;
    this->capacity = rhs.capacity;
    this->size = rhs.size;
    this->pt = new T[this->capacity];
    for(int i=0; i<this->size;i++){
        this->pt[i]=rhs.pt[i];
    }
    return *this;
    
};
template <class T>
T& vector<T>:: operator[](int index){
    return this->pt[index];
};
/* Size of vector */
template <class T>
int vector<T>:: vsize(){
    return this->size;
};
/* Check for the empty vector */
template <class T>
bool vector<T>:: empty(){
    return (this->size==0);
};
/* Add the element into the Position Pos*/
template <class T>
void vector<T>:: insert(int pos, T newElement){
    size++;
    for(int i=size-1 ; i>pos;i--){
        pt[i]=pt[i-1];
    }
    pt[pos]=newElement;
};
/* Check whether the vector is empty */
template <class T>
void vector<T>:: erase(int pos){
    for(int i=pos;i<size;i++){
        pt[i]=pt[i+1];
    }
    this->size--;
};
/* Free all the vector */
template <class T>
void vector<T>:: clear(){
    size=0;
};
