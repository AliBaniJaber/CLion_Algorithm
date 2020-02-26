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
//    int i, j;
//    for (i = 0; i < m; i++)
//        for (j = 0; j < n; j++)
//            cout<< *((arr+i*n) + j);
//
//            return true ;
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

int Algorithm::parttion(int *inputdata, int start, int end)
{
    /// array  inputdata[start , . . . , end ]//
    int x=inputdata[start];
    for(int j=0 ; j<start+1 ; j++)
    {
        if(inputdata[j]<=x)

    }
}




bool Algorithm::quicksort(int *inputarray, int start, int end) {
    int index_pivot;
    if (start < end )
        index_pivot=parttion( inputarray , start ,index_pivot-1);
        index_pivot=parttion( inputarray , index_pivot+1 ,end);

}




