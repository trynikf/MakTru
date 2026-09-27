#include "sorting.hpp"

void TMV::BubbleSort(int *arr, const int length){
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