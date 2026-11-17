#include"menu_functional.hpp"

#include<cstdlib>
#include<iostream>


const tmv::MenuItem* tmv::show_menu(const MenuItem* current){
    std::cout << "Привет мой путешественник " << std::endl;
    for (int i = 1; i < current->children_count;i++){
        std::cout << current->children[i]->title << std::endl;
    }
    std::cout << current->children[0]->title << std::endl;
    std::cout << "Перемещение > ";

    int user_write;
    while (!(std::cin >> user_write) || user_write < 0 || user_write >= current->children_count) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Неверный ввод! Введите число от 0 до " << current->children_count - 1 << " > ";
    }

    std::cout << std::endl;
    return current->children[user_write];
}

const tmv::MenuItem* tmv::exit(const MenuItem* current){
    std::exit(0);
}

const tmv::MenuItem* tmv::select_item(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const tmv::MenuItem* tmv::go_back(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent->parent;
}