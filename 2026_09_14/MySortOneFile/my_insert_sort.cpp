#include<iostream>

void insert_sort(int *arr, const int length);
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

    insert_sort(array, len);

    print_array("Массив после сортировки: ", array, len);

    return 0;
}

void insert_sort(int *arr, const int length){
    for (int i = 1; i < length; i++){
        const int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
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