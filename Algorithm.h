#pragma once
//int N;

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
    void merge_sort(int* inputarray ,int start , int end );
    double power(int base ,int po);
    int fibonacciNumber(int number);
    //void multiply(int A[][N], int B[][N], int C[][N]);
     void heapify(int *input,int index ,int size);
     void heapsort(int *inputarray, int size);
    void bucket_sort(int data[] , int length);
    void bucket_sort_neg_pos();
    ///from git hub



private:
    int parttion(int *inputdata ,int start, int end );
    void swap(int*A , int*B);
    void merge(int *inputarray, int start, int split_point, int end);
    void squer_matrex1110(int *Array);
    int max(int *inputdata ,int length);
    float number_to_divid(int data);

};

