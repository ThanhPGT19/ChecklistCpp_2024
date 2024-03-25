#include "linked_list.h"
template<class T> void Node <T> :: Add_element_Head(Node **ptr,T val){
    Node *head = new Node(val);
    //std:: cout<< head<<" SCOP"<<std::endl;
    if(*ptr == NULL) *ptr = head;
    else {
        head->pt_next = *ptr;
        *ptr = head;
    }
}
template <class T> void Node<T> :: Print_List(Node *head){
    Node *pt = head;
    int count =0;
    while(pt!=NULL){
        count ++;
        std::cout<<pt->data<<std::endl;
        pt = pt->pt_next;
        if(count==20){
            exit(1);
        }
    };
}
    //Thêm phần tử vào cuối List
template<class T> void Node <T> :: Add_element_Tail(Node *head,T val){
        Node *tail = new Node(val);
        Node *pt = head;
        while(pt->pt_next!=NULL){
            pt=pt->pt_next;
        }
        pt->pt_next=tail;
}
    //Thêm phần tử vào vitri bất kỳ List
template<class T> void Node <T> :: Add_element_Pos(Node *head, int pos , T val){
    Node *newelement = new Node(val);
    Node *pt = head;
    int count =0;
    while(pt!=NULL&&count!=pos-1){
        pt=pt->pt_next;
        count++;
    }
    if(count!=pos-1){
        return;
    }
    else{
        newelement->pt_next = pt->pt_next;
        pt->pt_next = newelement;
    }
}
    //Xóa phần tử đầu List
    template<class T> void Node <T> :: Del_element_Head(){}
    //Xóa phần tử cuối List
    template<class T> void Node <T> :: Del_element_Tail(){}
    //Xóa phần tử vtri bất kỳ List
    template<class T> void Node <T> :: Del_element_Pos(){}
int main (){
    Node<int>*head = new Node(5);
    //std:: cout<< head<<std::endl;
    head->Add_element_Head(&head,7);
    head->Add_element_Head(&head,11);
    head->Add_element_Head(&head,15);
    head->Add_element_Pos(head,3,3030);
    //std:: cout<< head<<std::endl;
    head->Print_List(head);
    return 0;
}