#include "linked_list.h"
// Thêm phần tử vào đầu List
template <class T>
void Node<T>::Add_element_Head(Node **ptr, T val)
{
    Node *head = new Node(val);
    // std:: cout<< head<<" SCOP"<<std::endl;
    if (*ptr == NULL)
        *ptr = head;
    else
    {
        head->pt_next = *ptr;
        *ptr = head;
    }
}
// Print List
template <class T>
void Node<T>::Print_List(Node *head)
{
    Node *pt = head;
    while (pt != NULL)
    {
        std::cout << pt->data << std::endl;
        pt = pt->pt_next;
    };
}
// Thêm phần tử vào cuối List
template <class T>
void Node<T>::Add_element_Tail(Node *head, T val)
{
    Node *tail = new Node(val);
    Node *pt = head;
    while (pt->pt_next != NULL)
    {
        pt = pt->pt_next;
    }
    pt->pt_next = tail;
}
// Thêm phần tử vào vitri bất kỳ List
template <class T>
void Node<T>::Add_element_Pos(Node *head, int pos, T val)
{
    Node *newelement = new Node(val);
    Node *pt = head;
    int count = 0;
    while (pt != NULL && count != pos - 1)
    {
        pt = pt->pt_next;
        count++;
    }
    if (count != pos - 1)
    {
        return;
    }
    else
    {
        newelement->pt_next = pt->pt_next;
        pt->pt_next = newelement;
    }
}
// Xóa phần tử đầu List
template <class T>
void Node<T>::Del_element_Head(Node **ptr)
{
    if ((*ptr)->pt_next == NULL)
    {
        delete *ptr;
        *ptr = NULL;
    }
    else
    {
        Node *pt = *ptr;
        *ptr = (*ptr)->pt_next;
        delete pt;
    }
}
// Xóa phần tử cuối List
template <class T>
void Node<T>::Del_element_Tail(Node *head)
{
    Node *pt = head;
    Node *ptr = head->pt_next;
    while (ptr->pt_next != NULL)
    {
        pt = pt->pt_next;
        ptr = ptr->pt_next;
    }
    delete ptr;
    pt->pt_next = NULL;
}
// Xóa phần tử vtri bất kỳ List
template <class T>
void Node<T>::Del_element_Pos(Node *head, int pos)
{
    Node *pt = head;
    Node *ptr = head->pt_next;
    int count = 0;
    while (ptr->pt_next != NULL && count != pos - 1)
    {
        pt = pt->pt_next;
        ptr = ptr->pt_next;
        count++;
    }
    if (count != pos - 1)
    {
        return;
    }
    else
    {
        pt->pt_next = ptr->pt_next;
        delete ptr;
    }
}