#if !defined LINKED_LIST_H__
#define LINKED_LIST_H__
#include <iostream>
template <class T>
class Node
{
private:
    T data;
    Node *pt_next;

public:
    Node(T val)
    {
        this->data = val;
        this->pt_next = NULL;
    }
    // In List
    void Print_List(Node *head);
    // Thêm phần tử vào đầu List
    void Add_element_Head(Node **ptr, T val);
    // Thêm phần tử vào cuối List
    void Add_element_Tail(Node *head, T val);
    // Thêm phần tử vào vitri bất kỳ List
    void Add_element_Pos(Node *head, int pos, T val);
    // Xóa phần tử đầu List
    void Del_element_Head(Node **ptr);
    // Xóa phần tử cuối List
    void Del_element_Tail(Node *head);
    // Xóa phần tử vtri bất kỳ List
    void Del_element_Pos(Node *head, int pos);
};
#include "linked_list.cpp"

#endif // LINKED_LIST_H__