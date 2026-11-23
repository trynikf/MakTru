#include "io.hpp"

#include <iostream>

void tmv::my_print(
        const char* const comment,
        const int *arr,
        const char* const comment2,
        const int length){
    std::cout << comment << "\n";

    for (int i = 0;i < length; i++){
        std::cout << arr[i] << " ";
    }

    std::cout << "\n" << comment2 << ' ' << length << "\n";
}