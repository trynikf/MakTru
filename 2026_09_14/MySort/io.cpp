#include "io.hpp"

#include <iostream>

void tmv::myPrint(const char* const comment, int *arr,const char* const comment2, const int length){
    std::cout << comment << "\n";

    for (int i = 0;i < length; i++){
        std::cout << arr[i] << " ";
    }

    std::cout << "\n" << comment2 << "\n" << length << "\n";
}