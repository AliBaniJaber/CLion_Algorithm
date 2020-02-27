#include<iostream>
using namespace std;
#include"Algorithm.h";
#include <stdio.h>



int main() {

    int  inputarray[20] = {20,19,18,17,3,15,14,13,12,11,10,0,8,7,6,5,4,3,2,1};

    int length = 20;
    Algorithm* obj = new Algorithm();

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

//-------------------------part 2 --------------------------------

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


//    int M1[3][ 3];
//
//    int arr[][3] = {{1, 2, 3}, {4, 5, 6}};
//    bool pp=obj->multplication_matrix_blok((int *)arr ,(int *)arr , 2 , 3 );

//    obj->merge_sort(inputarray,0,length-1);
//    bool re=obj->print_array(inputarray,length);
//    cout<<"hg" ;

    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = 6;

 //   printf("Given array is \n");
 //   obj->print_array(arr, arr_size);

   // obj->merge_sort(inputarray, 0, length-1);

    //printf("\nSorted array is \n");
   // obj->print_array(inputarray, length);

    //cout<<obj->binary_search(inputarray,0,20,5);
  //  obj->print_array(inputarray,20);
   // obj->quicksort(inputarray,1,20);
    //obj->print_array(inputarray,20);


    return 0;
}
