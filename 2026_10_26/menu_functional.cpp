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
    std::cin >> user_write;
    std::cout << std::endl;

    return current->children[user_write];
}

const tmv::MenuItem* tmv::exit(const MenuItem* current){
    std::exit(0);
}

const tmv::MenuItem* tmv::east (const MenuItem* current){
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const tmv::MenuItem* tmv::altai (const MenuItem* current){
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const tmv::MenuItem* tmv::golden_ring_of_russia (const MenuItem* current){
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const tmv::MenuItem* tmv::go_back_menu (const MenuItem* current){
    std::cout << current->title << std::endl << std::endl;
    return current->parent->parent;
}

const tmv::MenuItem* tmv::vladivostok (const MenuItem* current){
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const tmv::MenuItem* tmv::sahalin (const MenuItem* current){
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const tmv::MenuItem* tmv::habarovsk (const MenuItem* current){
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const tmv::MenuItem* tmv::go_back_travel (const MenuItem* current){
    std::cout << current->title << std::endl << std::endl;
    return current->parent->parent;
}
