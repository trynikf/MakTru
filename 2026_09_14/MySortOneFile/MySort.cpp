#include<iostream>

void BubbleSort(int arr[], const int lenght);

int main(){
    std::cout << "Введите длину массива:\n";

    int len;
    std::cin >> len;

    int mas[len];
    std::cout << "Введите массив:\n";

    for (int i = 0; i < len; i++){
        int number;
        std::cin >> number;
        mas[i] = number;
    }
    std::cout << "Массив до сортировки:\n";
    for (int i = 0; i < len; i++){
        std::cout << mas[i] << " ";
    }
    BubbleSort(mas, len);
    std::cout << "\nМассив после сортировки:\n";
    for (int i = 0; i < len; i++){
        std::cout << mas[i] << " ";
    }
    return 0;
}

void BubbleSort(int *arr, const int lenght){
    int elem = 1;
    while (elem != lenght){
        for (int i = 0; i < lenght-elem; i++){
            if (arr[i] > arr[i+1]){
                int swapper = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = swapper;
                
            }
        }
        elem++;
    }
}