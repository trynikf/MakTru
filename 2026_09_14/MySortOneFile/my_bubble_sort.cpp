#include<iostream>

void bubble_sort(int *arr, const int length);
void print_array(
    const char* const comment, 
    int *arr, 
    const int length);

int main(){
    std::cout << "Введите длину массива:\n";

    int len;
    std::cin >> len;

    int *array = new int[len];
    std::cout << "Введите массив:\n";

    for (int i = 0; i < len; i++){
        int number;
        std::cin >> number;
        array[i] = number;
    }
    
    print_array("Массив до сортировки: ", array, len);

    bubble_sort(array, len);

    print_array("Массив после сортировки: ", array, len);

    return 0;
}

void bubble_sort(int *arr, const int length){
    int elem = 1;
    while (elem < length){
        bool swapped = false;
        for (int i = 0; i < length-elem; i++){
            if (arr[i] > arr[i+1]){
                int swapper = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = swapper;
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
        elem++;
    }
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