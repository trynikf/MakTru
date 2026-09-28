#include "io.hpp"
#include "sorting.hpp"

int main(){
    int arr[] = {12, 8, -2, -2, 0, 1, 1, 7};
    const int arr_size = sizeof(arr) / sizeof(arr[0]);

    tmv::myPrint("Массив до сортировки:", arr, "Длина массива до сортировки:" , arr_size);

    tmv::bubbleSort(arr, arr_size);

    tmv::myPrint("Массив после сортировки:", arr, "Длина массива после сортировки:" , arr_size);

}
