#include "io.hpp"
#include "sorting.hpp"

int main(){
    int arr[] = {};
    const int arr_size = sizeof(arr) / sizeof(arr[0]);

    TMV::MyPrint("Массив до сортировки:", arr, "Длина массива до сортировки:" , arr_size);

    TMV::BubbleSort(arr, arr_size);

    TMV::MyPrint("Массив после сортировки:", arr, "Длина массива после сортировки:" , arr_size);

}
