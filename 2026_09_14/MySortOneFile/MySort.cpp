#include<iostream>

void bubbleSort(int *arr, const int length);

void printArray(int *arr, const int length){
    for (int i = 0; i < length; i++){
        std::cout << arr[i] << " ";
    }
}
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
    
    std::cout << "Массив до сортировки:\n";
    printArray(array, len);

    bubbleSort(array, len);

    std::cout << "\nМассив после сортировки:\n";
    printArray(array, len);

    return 0;
}

void bubbleSort(int *arr, const int length){
    int elem = 1;
    while (elem < length){
        for (int i = 0; i < length-elem; i++){
            if (arr[i] > arr[i+1]){
                int swapper = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = swapper;
                
            }
        }
        elem++;
    }
}