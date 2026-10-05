#include <iostream>

void fill_arr(int* arr, int length);
float sum_arr(int* arr, int length);
void print_arr(int* arr, int length);

int main()
{
    int size_arr;
    float arr_sum;
    int count_arr;

    std::cout << "Введите количество массивов" << std::endl;
    std::cin >> count_arr;

    for (int i = 0; i < count_arr; i++){
            std::cout 
                << "Введите длину " 
                << i + 1
                << " последовательности"
                << std::endl;
            std::cin >> size_arr;
            std::cout << i+1 << " последовательность" << std::endl;

            int *arr = new int [size_arr];
            fill_arr(arr, size_arr);
            print_arr(arr, size_arr);
            arr_sum = sum_arr(arr, size_arr);
            
            std::cout << std::endl;
            std::cout 
                << "Среднее " 
                << i + 1 
                <<  " последовательности = " 
                << arr_sum / size_arr
                << std::endl;
        }
    return 0;
}


void fill_arr(int* arr, int length){
    for (int i = 0; i < length; i++)
    {
        arr[i] = rand() % 10;
    }
}

float sum_arr(int* arr, int length){
    float sum_arr = 0;
    for (int i = 0; i < length; i++){
        sum_arr += arr[i];
    }
    return sum_arr;
}
void print_arr(int* arr, int length){
    for (int i = 0; i < length; i++){
        std::cout << arr[i] << ' ';
    }
}