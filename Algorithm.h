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
    void quicksort(int* inputarray , int start , int end);
//    void Algorithm::quicksort(int *inputarray, int start, int end)
    void merge_sort(int* inputarray ,int start , int end );
    double power(int base ,int po);
    ///from git hub



private:
    int parttion(int *inputdata ,int start, int end );
     void swap(int*A , int*B);

    void merge(int *inputarray, int start, int split_point, int end);
};

