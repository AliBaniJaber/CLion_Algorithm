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

void Algorithm::merge_sort(int *inputarray, int start, int end)
{

    if(start < end)
    {
        int split_point=start+(end-start)/2;
        merge_sort(inputarray,start,split_point);
        //print_array(inputarray,20);
        merge_sort(inputarray,split_point+1,end);
        cout<<"count"<<count++<<endl;

        merge(inputarray,start,split_point,end);

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
    }
    for(int j=0;j<size_secand_array;j++)
    {
        secand_array[j]=inputarray[split_point+1+j];
    }

    int i=0,j=0,k=1;
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











}








