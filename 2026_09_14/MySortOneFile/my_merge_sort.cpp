#include<iostream>
#include<stdlib.h>

void merge(
    int* const *arr,
    int* const *buffer,
    const int left,
    const int mid,
    const int right);
void merge_sort(
    int* const arr,
    int* const buffer,
    const int left,
    const int right);
void print_array(
    const char* const comment, 
    const int *arr, 
    const int length);

int main(){
    std::cout << "Введите длину массива:" << std::endl;

    int len;
    std::cin >> len;

    int *array = new int[len];
    int* const buffer = new int[len];
    for (int i = 0; i < len; i++){
        array[i] = rand() % len;
    }
    
    print_array("Массив до сортировки: ", array, len);

    merge_sort(array, buffer, 0, len-1);

    delete[] buffer;

    print_array("Массив после сортировки: ", array, len);

    return 0;
}

void merge(
    int* const arr,
    int* const buffer,
    const int left,
    const int mid,
    const int right){
    
    const int length_left = mid - left + 1;
    const int length_right = right - mid;

    int* const L_ptr = buffer;
    int* const R_ptr = buffer + length_left;

    for (int i = 0; i < length_left; i++){
        *(L_ptr + i) = *(arr + left + i);
    }

    for (int j = 0; j < length_right; j++){
        *(R_ptr + j) = *(arr + mid + 1 + j);
    }

    const int* const L_end = L_ptr + length_left;
    const int* const R_end = R_ptr + length_right;

    int* curr_L = L_ptr;
    int* curr_R = R_ptr;
    int* curr_arr = arr + left;

    while (curr_L < L_end && curr_R < R_end) {
        if (*curr_L <= *curr_R) {
            *curr_arr = *curr_L;
            ++curr_L;
        } else {
            *curr_arr = *curr_R;
            ++curr_R;
        }
        ++curr_arr;
    }

    while (curr_L < L_end) {
        *curr_arr = *curr_L;
        ++curr_L;
        ++curr_arr;
    }

    while (curr_R < R_end) {
        *curr_arr = *curr_R;
        ++curr_R;
        ++curr_arr;
    }
}

void merge_sort(
    int* const arr,
    int* const buffer,
    const int left,
    const int right){
    
    if (left >= right) return;

    const int mid = left + (right - left) / 2;

    merge_sort(arr, buffer, left, mid);
    merge_sort(arr, buffer, mid + 1, right);

    merge(arr, buffer, left, mid, right);
}
    
void print_array(
    const char* const comment, 
    const int *arr, 
    const int length){
    std::cout << comment << std::endl;
    for (int i = 0; i < length; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}