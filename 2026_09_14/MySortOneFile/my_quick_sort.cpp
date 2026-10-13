#include<iostream>
#include<stdlib.h>

void quick_sort(
    int *arr,
    const int left_limit, 
    const int right_limit);
void print_array(
    const char* const comment, 
    int *arr, 
    const int length);

int main(){
    std::cout << "Введите длину массива:" << std::endl;

    int len;
    std::cin >> len;

    int *array = new int[len];

    for (int i = 0; i < len; i++){
        array[i] = rand() % len;
    }

    const int left = 0, right = len-1;
    
    print_array("Массив до сортировки: ", array, len);

    quick_sort(array, left, right);

    print_array("Массив после сортировки: ", array, len);

    return 0;
}

void quick_sort(
    int *arr,
    const int left_limit, 
    const int right_limit){
    if (left_limit >= right_limit){
        return;
    }
    int i = left_limit, j = right_limit;
    int pivot = arr[left_limit + (right_limit - left_limit) / 2];
    while (i <= j){
        while (arr[i] < pivot) i++;
        while (arr[j] > pivot) j--;

        if (i <= j){
            int swapper = arr[i];
            arr[i] = arr[j];
            arr[j] = swapper;
            i++;
            j--;
        }
    }
    if (left_limit < j) quick_sort(arr, left_limit, j);
    if (i < right_limit) quick_sort(arr, i, right_limit);
}

void print_array(
    const char* const comment, 
    int *arr, 
    const int length){
    std::cout << comment << std::endl;
    for (int i = 0; i < length; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}