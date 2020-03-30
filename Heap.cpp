//
// Created by Ali_Msi on 3/30/2020.
//

#include "Heap.h"
#include <iostream>


using namespace std;
void Heap::addElment(int item)
{
    if(!this->isFill())
       this->Storage[capict++]=item;
    else
        {
          this->Expand();
          this->Storage[capict++]=item;
        }
}
void Heap::print_data()
{
cout<<"the number of elemant "<<this->capict<<endl ;
cout<<"the size is free "<<this->length-this->capict<<endl;
cout<<" the data  ";
    for(int i=0 ;i<capict ;i++)
    {
        cout<<this->Storage[i] <<"  " ;

    }
    cout<<endl;
}
int Heap::numberOfFreeSlot()
{
    return this->length-this->capict;
}
void Heap::Expand()
{
    int newsize=this->length*2;
    int tmp[this->length];
    for(int i=0;i<this->length;i++)
        tmp[i]=this->Storage[i];
    this->Storage=new int[newsize];
    for(int i=0;i<this->length;i++)
        this->Storage[i]=tmp[i];

    this->length=newsize;

}
Heap::Heap()
{
    this->length=3;
    this->Storage=new int[this->length];
}
bool Heap::isFill()
{
    if(this->length==this->capict)
        return true;
    return false;
}
int Heap::size()
{
    return this->length;

}
int Heap::indexOf(int item)
{
   for(int i ; i<this->capict ;i++)
   {
       if(this->Storage[i]==i)
           return i;
   }
   return -1;

}