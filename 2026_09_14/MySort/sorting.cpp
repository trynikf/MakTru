#include "sorting.hpp"

void TMV::BubbleSort(int *arr, const int lenght){
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