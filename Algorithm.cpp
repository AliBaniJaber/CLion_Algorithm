#include "Algorithm.h"
#include <cstddef>
#include <stdbool.h>
#include <iostream>
#include <stdio.h>

using namespace std;
bool Algorithm::insertion_sort_inc(int* inputarray , int length)
{
    // ----------information about function -----------------
    /*
    * this function  sort array increase
    * array based to zero
    * return  true when the operathio done
    * return false when a problem in function or data
    *
    */

    if (inputarray == NULL)
    {
        return	false;
    }




    //------------local varibel ----------
    int slower = 1;
    int faster = 0;
    int key = 0;
    //------------------------------------
    for (slower; slower < length; slower++)
    {
        key = inputarray[slower];
        faster = slower - 1;
        while (faster >= 0 && inputarray[faster]>key)
        {
            inputarray[faster + 1] = inputarray[faster];
            inputarray[faster] = key;
            faster -= 1;
        }


    }

    //-----when done
    return true;
    // write by Ali Bani-Jaber
}
Algorithm::Algorithm()
{
    cout << endl << "---------- hello Course Algorithm ----------" << endl << endl << endl;;
    // write by Ali Bani-Jaber

}
bool Algorithm::insertion_sort_dec(int* inputarray, int length)
{
    // ----------information about function -----------------
/*
* this function  sort array decrease
* array based to zero
* return  true when the operathio done
* return false when a problem in function or data
*
*/


    if (inputarray == NULL)
    {
        return	false;
    }




    //------------local varibel ----------
    int slower = 1;
    int faster = 0;
    int key = 0;
    for (slower; slower < length; slower++)
    {
        key = inputarray[slower];
        faster = slower - 1;
        while (faster >= 0 && inputarray[faster] < key)
        {
            inputarray[faster + 1] = inputarray[faster];
            inputarray[faster] = key;
            faster -= 1;
        }


    }

    //-----when done
    return true;
    // write by Ali Bani-Jaber

}
bool Algorithm::print_array(int* inputarray, int length)
{
    /*
    *the format [-,-,-,-,-]
    * return true when print array
    * return false else
    * when array is empty print empty and return true
    */
    if (inputarray == NULL)
    {
        cout << "empty arrray" << endl;
        return true;
    }
    else
    {
        cout << "[";
        for (int index = 0; index < length; index++)
        {
            cout << inputarray[index] <<"";
            if (index == length - 1)
                cout <<"";
            else
                cout << " , ";
        }
        cout << " ]" << endl;
        return true;
    }

    // write by Ali Bani-Jaber

}
bool Algorithm::print_matrix(int *arr, int row, int col) {

    /**
     * if matrix empty  print  empty
     * this function print a matrix as this format
     *{ [ -, ,- ,- ...]
     * [ -, ,- ,- ...]
     * [ -, ,- ,- ...]
     * ...............
     * ...............
     * [ -, ,- ,- ...] }
     *
     */
    if (row == 0 && col == 0) {
        cout << "empty " << endl;
        return false;
    } else {
        cout << " { ";
        for (int local_row = 0; local_row < row; local_row++) {
            cout << "[  ";
            for (int j = 0; j < col; j++) {
                if (j == 0)
                    cout <<*((arr+local_row*col) + j);
                else
                    cout << " , " <<*((arr+local_row*col) + j);

            }
            if(local_row==row-1)cout << " ] " ;
            else cout << " ] " << endl;

        }
        cout << " } " << endl;
        return true;

    }
}
bool Algorithm::multplication_matrix_blok(int *input_array1, int *input_array2, int row, int col)
{
    /**
     * this function multplication two matrix using blok Algorithm and return true when Finished
     * if matrix not squer return false
     *
     */

    int matrix1[row][col];
    int matrix2[row][col];

    if(row!=col)return false;
    ///-----------------------this loop  to fill two matrix -------------------
    for(int local_row=0 ; local_row<row;local_row++)
    {
        for(int local_col=0;local_col<col;local_col++)
        {
            matrix1[local_row][local_col]= *((input_array1+local_row*col) + local_col);
            matrix2[local_row][local_col]=*((input_array2+local_row*col) + local_col);

        }
        cout<<endl;

    }
    ///-----------------------------------------------------------------------------






    return true;

}
int count=0;
void Algorithm::quicksort(int *inputarray, int start, int end)
{
    if(start<end)
    {
        int index_pivot=parttion(inputarray,start,end);
        quicksort(inputarray,start,index_pivot-1);
        quicksort(inputarray,index_pivot+1,end);

    }

}
void Algorithm::merge_sort(int *inputdata, int start, int end)
{
//    int split_point=start+(end-start)/2;
//
//    if(start < end)
//    {
//        merge_sort(inputarray,start,split_point);
//        //print_array(inputarray,20);
//        merge_sort(inputarray,split_point+1,end);
//        //cout<<"count"<<count++<<endl;
//
//        merge(inputarray,start,split_point,end);
//
//    }

    if (start < end)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int split_point = start+(end-start)/2;

        // Sort first and second halves
        merge_sort(inputdata, start, split_point);
        merge_sort(inputdata, split_point+1, end);

        merge(inputdata, start, split_point, end);
    }


}
void Algorithm::merge(int *inputarray, int start, int split_point, int end)
{
    int size_first_array=split_point-start+1;
    int size_secand_array=end-split_point;

    int first_array[size_first_array];//10 //0-9
    int secand_array[size_secand_array];//10 10..19

    for(int i=0;i<size_first_array;i++)
    {
        first_array[i]=inputarray[start+i];
      // cout<<first_array[i]<<"   ";

    }
    for(int j=0;j<size_secand_array;j++)
    {
        secand_array[j]=inputarray[split_point+1+j];
    }

    int i=0,j=0,k=start;
    while (i < size_first_array && j < size_secand_array)
    {
        if(first_array[i]<=secand_array[j])
        {
            inputarray[k]=first_array[i];
            i++;

        }
        else
        {
            inputarray[k]=secand_array[j];
            j++;
        }
        k++;


    }
    while (i<size_first_array)
    {
        inputarray[k]=first_array[i];
        i++;
        k++;
    }
    while (j<size_secand_array)
    {
        inputarray[k]=secand_array[j];
        j++;
        k++;
    }

//    int i, j, k;
//    int size_first_array = split_point - start + 1;
//    int size_secound_array =  end - split_point;
//
//    int first_array[size_first_array], secound_array[size_secound_array];
//
//    for (i = 0; i < size_first_array; i++)
//        first_array[i] = inputdata[start+ i];
//    for (j = 0; j < size_secound_array; j++)
//        secound_array[j] = inputdata[split_point + 1+ j];
//
//    i = 0; // Initial index of first subarray
//    j = 0; // Initial index of second subarray
//    k = l; // Initial index of merged subarray
//    while (i < size_first_array && j < size_secound_array)
//    {
//        if (first_array[i] <= secound_array[j])
//        {
//            inputdata[k] = first_array[i];
//            i++;
//        }
//        else
//        {
//            inputdata[k] = secound_array[j];
//            j++;
//        }
//        k++;
//    }
//
//    /* Copy the remaining elements of L[], if there
//       are any */
//    while (i < size_first_array)
//    {
//        inputdata[k] = first_array[i];
//        i++;
//        k++;
//    }
//
//    /* Copy the remaining elements of R[], if there
//       are any */
//    while (j < size_secound_array)
//    {
//        inputdata[k] = secound_array[j];
//        j++;
//        k++;
//    }
//










}
int Algorithm::parttion(int *inputdata, int start, int end)
{
    int key=inputdata[start];
//    int length=end-start;

    int i=start,j=start+1;
    for( ;j<end ;j++ ) {
        if (key >= inputdata[j])
        {
            i++;
        swap(&inputdata[i], &inputdata[j]);
       }
    }



    swap(&inputdata[start],&inputdata[i]);
    return i;


}
void Algorithm::swap(int *A, int *B)
{
    int tmp =*A;
    *A=*B;
    *B=tmp;

}
double Algorithm::power(int base, int po)
{
    if(po==1)
        return base;
    else{
      if(po%2!=0)
          return base *power(base,po/2)*power(base ,po/2);
      else
          return power(base, po/2)*power(base ,po/2);

    }

}
int Algorithm::fibonacciNumber(int number)
{
    if(number<=1)
        return number;
    return  fibonacciNumber(number-1)+fibonacciNumber(number-2);
}
void Algorithm::squer_matrex1110(int *matrex)
{
    int local_matrex[2][2]={{1 ,1},{1,0}};
    int rersult[2][2];
    for(int row=0;row<2;row++)
    {
        for(int col=0; col<2 ;col++)
        {
            rersult[row][col]=0;
            for(int k=0 ; k<2; k++)
            {
                rersult[row][col]=rersult[row][col]+(local_matrex[row][k]*local_matrex[k][col]);

            }
        }
    }

}
void Algorithm::heapify(int *input,int index ,int size)
{

    int larg_index=index;
    int left_index=2*index;
    int right_index=2*index+1;
    if(left_index<size && input[left_index]>input[larg_index])
        larg_index=left_index;
    if(right_index < size && input[right_index]>input[larg_index])
        larg_index=right_index;
    if(larg_index!=index){
        swap(&input[index],&input[larg_index]);
        heapify(input,larg_index,size);
    }

}
void Algorithm::heapsort(int *inputarray, int size)
{
    for(int i=size/2 -1 ; i>=0 ; i--)
    {
        heapify(inputarray ,i,size);

    }
    for (int i=size-1; i>=0; i--)
    {
        // Move current root to end
        swap(&inputarray[0], &inputarray[i]);

        heapify(inputarray,0 ,i);
    }

}
