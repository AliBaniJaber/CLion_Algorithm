#pragma once
class Algorithm
{
public:
    Algorithm();
    bool insertion_sort_inc(int* inputarray, int length);
    bool insertion_sort_dec(int* inputarray, int length);
    bool print_array(int* inputarray, int length);
    bool print_matrix(int *arr, int row, int col);
    bool multplication_matrix_blok(int *input_array1 , int *input_array2 , int row , int col);
    bool quicksort(int* inputarray , int start , int end);

private:
    int parttion(int *inputdata ,int start, int end );


};

