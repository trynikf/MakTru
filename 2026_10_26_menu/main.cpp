#include<iostream>

#include"menu.hpp"
#include"menu_functional.hpp"
#include"menu_items.hpp"


int main(){
    const tmv::MenuItem* current = &tmv::MAIN;
    do{
        current = current->func(current);
    }while(true);

    return 0;
}