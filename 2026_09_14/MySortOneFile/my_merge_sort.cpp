#include <iostream>
#include <cstdlib>

void merge(int* arr, int* buffer, int left, int mid, int right);
void merge_sort(int* arr, int* buffer, int left, int right);
void print_array(const char* comment, const int* arr, int length);

int main() {
    std::cout << "Введите длину массива:" << std::endl;

    int len;
    std::cin >> len;
    if (len <= 0) return 0;

    int* array = new int[len];
    int* buffer = new int[len];

    for (int i = 0; i < len; i++) {
        array[i] = std::rand() % len;
    }

    print_array("Массив до сортировки:", array, len);

    merge_sort(array, buffer, 0, len - 1);

    print_array("Массив после сортировки:", array, len);

    delete[] buffer;
    delete[] array;

    return 0;
}

void merge(int* arr, int* buffer, int left, int mid, int right) {
    int length_left = mid - left + 1;
    int length_right = right - mid;

    int* L_ptr = buffer;
    int* R_ptr = buffer + length_left;

    for (int i = 0; i < length_left; i++) {
        L_ptr[i] = arr[left + i];
    }

    for (int j = 0; j < length_right; j++) {
        R_ptr[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;

    while (i < length_left && j < length_right) {
        if (L_ptr[i] <= R_ptr[j]) {
            arr[k++] = L_ptr[i++];
        } else {
            arr[k++] = R_ptr[j++];
        }
    }

    while (i < length_left) {
        arr[k++] = L_ptr[i++];
    }

    while (j < length_right) {
        arr[k++] = R_ptr[j++];
    }
}

void merge_sort(int* arr, int* buffer, int left, int right) {
    if (left >= right) return;

    int mid = left + (right - left) / 2;

    merge_sort(arr, buffer, left, mid);
    merge_sort(arr, buffer, mid + 1, right);
    merge(arr, buffer, left, mid, right);
}

void print_array(const char* comment, const int* arr, int length) {
    std::cout << comment << std::endl;
    for (int i = 0; i < length; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
