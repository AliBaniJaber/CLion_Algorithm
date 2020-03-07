//
// Created by Ali_Msi on 3/4/2020.
//

#ifndef ALGORITHM_LINKEDLIST_H
#define ALGORITHM_LINKEDLIST_H

#include "NODE.h"
typedef bool Success_or_failure;

class LinkedList {
private:
    NODE* head;
public:
    LinkedList();
    ~LinkedList();
    NODE* gethead();
    Success_or_failure setHead(NODE* new_head);
    NODE* getNext(NODE* to_get_next);
    NODE* getPrev();
    Success_or_failure addNewNode_withSort(int data);
    Success_or_failure deleteNode(int data);
    NODE* Search(int data);
    Success_or_failure sortLinkedList();
    void print_list();




};


#endif //ALGORITHM_LINKEDLIST_H
