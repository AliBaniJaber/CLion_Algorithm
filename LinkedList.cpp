//
// Created by Ali_Msi on 3/4/2020.
//
#include "LinkedList.h"
#include "NODE.h"
#include <stdio.h>


const bool Success= true;

LinkedList::LinkedList()
{
    this->head=new NODE;
    this->head->ID=0;
    this->head->NEXT= NULL;
    this->head->PREV= NULL;


}
LinkedList::~LinkedList()
{
    delete this->head;

}
NODE* LinkedList::gethead()
{
    return this->head;
}
Success_or_failure LinkedList::setHead(NODE *new_head)
{
    this->head=new_head;
    return Success;
}
//NODE* LinkedList::
