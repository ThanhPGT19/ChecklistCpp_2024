#include "linked_list.h"
int main()
{
    Node<int> *head = new Node(5);
    // std:: cout<< head<<std::endl;
    head->Add_element_Head(&head, 7);
    head->Add_element_Head(&head, 11);
    head->Add_element_Head(&head, 15);
    head->Add_element_Pos(head, 3, 3030);
    head->Print_List(head);
    std::cout << "------------" << std::endl;
    head->Del_element_Head(&head);
    head->Del_element_Tail(head);
    head->Del_element_Pos(head, 2);
    // std:: cout<< head<<std::endl;
    head->Print_List(head);
    return 0;
}