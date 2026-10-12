#include<iostream>
#include<stdlib.h>

void fill_arr(int* const arr,const int length);
void print_arr(const int* const arr,const int length);
int sum_arr(const int* const arr,const int length);

int main() {
    int count_arr;

    std::cout << "Введите количество массивов" << std::endl;
    std::cin >> count_arr;

    for (int i = 0; i < count_arr; i++) {
        int size_arr;
        std::cout 
            << "Введите размер " 
            << i + 1
            << "-го массива"
            << std::endl;
        std::cin >> size_arr;
        std::cout << i+1 << " последовательность" << std::endl;

        int arr_sum;
        int *arr = new int [size_arr];
        fill_arr(arr, size_arr);
        print_arr(arr, size_arr);
        arr_sum = sum_arr(arr, size_arr);
            
        std::cout << std::endl;
        std::cout 
            << "Среднее " 
            << i + 1 
            <<  "-го массив = " 
            << double(arr_sum) / size_arr
            << std::endl;
        
        delete[] arr;
    }
    return 0;
}


void fill_arr(int* arr,const int length) {
    for (int i = 0; i < length; i++)
    {
        arr[i] = rand() % 10;
    }
}

void print_arr(const int* arr,const int length) {
    const char space = ' ';
    for (int i = 0; i < length; i++) {
        std::cout << arr[i] << space;
    }
}

int sum_arr(const int* arr,const int length) {
    int sum_arr = 0;
    for (int i = 0; i < length; i++) {
        sum_arr += arr[i];
    }
    return sum_arr;
}
