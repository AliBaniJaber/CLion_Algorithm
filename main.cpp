#include<iostream>
using namespace std;
#include"Algorithm.h"
#include "LinkedList.h"
#include "Heap.h"
#include <stdio.h>
#include "NODE.h"



int main() {

//    int  inputarray[20] = {20,19,18,17,3,15,14,13,12,11,10,0,8,7,6,5,4,3,2,1};
//
//    int length = 20;
//    Algorithm* obj = new Algorithm();
//
//    obj->heapsort(inputarray,length);
//    obj->print_array(inputarray,length);
//------------------------part 1 --------------------------------
//    cout << "--------------insertion sort -------------"<<endl;
//    cout << "befor insertion sort: "<<endl;
//    bool val= obj->print_array(inputarray, length);
//    bool result_inserion_sort = obj->insertion_sort_inc(inputarray, length);
//    cout << "after insertion sort inc: " << endl;
//    bool val2 = obj->print_array(inputarray, length);
//    cout << "after inserion sort dec:" << endl;
//    bool result_of_insertion_sort_dec=obj->insertion_sort_dec(inputarray, length);
//    bool val3 = obj->print_array(inputarray, length);
//    cout << "--------------insertion sort done ------------- " << endl;
//
//-------------------------part 2 --------------------------------
//
//    int **matrix=new int*[2];
//    for(int i=0; i<3 ; i++){
//        matrix[i]= new int[3];
//    }
//    int ={
//    [1,2,3,4],
//    [1,2,3,4]
//    [1,2,3,4]
//    [1,2,3,4]};
//
//    for(int i=0;i<4 ;i++)
//        for(int j=0;j<4 ;j++)
//            matrix[i][j]=i+j;
//
//
//    int M1[3][ 3];
//
//    int arr[][3] = {{1, 2, 3}, {4, 5, 6}};
//    bool pp=obj->multplication_matrix_blok((int *)arr ,(int *)arr , 2 , 3 );
//
//    obj->merge_sort(inputarray,0,length-1);
//    bool re=obj->print_array(inputarray,length);
//    cout<<"hg" ;
//
//    int arr[] = {12, 11, 13, 5};
//    int arr_size = 4;
//
//    printf("Given array is \n");
//    obj->print_array(arr, arr_size);
//
//    obj->merge_sort(inputarray, 0, length-1);
//
//    printf("\nSorted array is \n");
//    obj->print_array(inputarray, length);
//
//    cout<<obj->binary_search(inputarray,0,20,5);
//    obj->print_array(inputarray,20);
//    obj->quicksort(inputarray,0,20);
//    obj->print_array(inputarray,20);
//
//
//   student * node;
//   node=new student;
//   node->id=52;
//   cout<<node->id;
//
//
//
//   LinkedList *XX=new LinkedList();
//   XX->addNewNode_withSort(2);
//
//   XX->print_list();

Heap *obj=new Heap();


while (1)
{
    int status;
    cout<<"1_add new data  "<<endl;
    cout<<"2_isFill?"<<endl;
    cout<<"3_delet  data"<<endl;
    cout<<"4_Number of free Sloat"<<endl;
    cout<<"5_size?"<<endl;
    cout<<"6_number of exist data"<<endl;
    cout<<"7_print data"<<endl;
    cout<<"8_end;"<<endl;
    cout<<"9_index of "<<endl;

    cin>>status;
   if(status==8){
       break;}
   else if(status==7)
   {
       obj->print_data();
   }
   else if(status==6)
   {
       cout<<" number of elemant :"<<obj->capict<<endl<<endl;
   }
   else if(status==5)
   {
       cout<<" Size :"<<obj->size()<<endl<<endl;
   }
   else if(status==4)
   {
       cout<<"Number of free Sloat :"<<obj->numberOfFreeSlot()<<endl<<endl;
   }
   else if(status==3)
   {
       //edit to delet
       int item;
       cout<<"enter item :";
       cin>>item;
       int index=obj->indexOf(item);
       obj->deletElemant(index);


   }
   else if(status==2)
   {
      cout<<" the Storage is : "<<obj->isFill()<<endl;
   }
   else if(status==1)
   {
       int item;
       cout<<"enter item :";
       cin>>item;
       obj->addElment(item);
   }
   else if(status==9)
   {
       int item ;
       cout<<" Enter the Item :";
       cin>>item;
       int res=obj->indexOf(item);
       if(res==-1)
           cout << "the item not fount "<<endl<<endl;
       else cout<<" the index of "<<item <<" is :"<<res<<endl<<endl;


   }
cout<<endl<<endl;
}


    return 0;
}




