#include "io.hpp"
#include "sorting.hpp"

int main(){
    int arr[] = {12, 8, -2, -2, 0, 1, 1, 7};
    const int arr_size = sizeof(arr) / sizeof(arr[0]);

    tmv::my_print("Массив до сортировки:", arr, "Длина массива до сортировки:" , arr_size);

    tmv::bubble_sort(arr, arr_size);

    tmv::my_print("Массив после сортировки:", arr, "Длина массива после сортировки:" , arr_size);

}
