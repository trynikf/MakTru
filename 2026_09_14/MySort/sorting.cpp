#include "sorting.hpp"

void tmv::bubble_sort(int *arr, const int length){
    int elem = 1;
    while (elem < length){
        for (int i = 0; i < length-elem; i++){
            if (arr[i] > arr[i+1]){
                const int swapper = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = swapper;
            }
        }
        elem++;
    }
}