#include"menu_items.hpp"

#include<cstddef>

#include"menu_functional.hpp"

const tmv::MenuItem tmv::VLADIVOSTOK = {
    "1 - Хочу в Владивосток!", tmv::vladivostok, &tmv::EAST
};
const tmv::MenuItem tmv::SAHALIN = {
    "2 - Хочу в Сахалин!", tmv::sahalin, &tmv::EAST
};
const tmv::MenuItem tmv::HABAROVSK = {
    "3 - Хочу в Хабаровск!", tmv::habarovsk, &tmv::EAST
};
const tmv::MenuItem tmv::GO_BACK_TRAVEL = {
    "0 - Хочу вернуться в путешествия!", tmv::go_back_travel, &tmv::EAST
};  

namespace {
    const tmv::MenuItem* const east_children[] = {
        &tmv::GO_BACK_TRAVEL,
        &tmv::VLADIVOSTOK,
        &tmv::SAHALIN,
        &tmv::HABAROVSK
    };
    const int east_size = sizeof(east_children) / sizeof(east_children[0]);
}

const tmv::MenuItem tmv::EAST = {
    "1 - Хочу переместиться на Дальний восток!", tmv::show_menu, &tmv::TRAVEL, east_children, east_size
};
const tmv::MenuItem tmv::ALTAI = {
    "2 - Хочу переместиться на Алтай!", tmv::altai, &tmv::TRAVEL
};
const tmv::MenuItem tmv::GOLDEN_RING_OF_RUSSIA = {
    "3 - Хочу переместиться на Золотое Кольцо России!", tmv::golden_ring_of_russia, &tmv::TRAVEL
};
const tmv::MenuItem tmv::GO_BACK_MENU = {
    "0 - Хочу вернуться в меню!", tmv::go_back_menu, &tmv::TRAVEL
};  

namespace {
    const tmv::MenuItem* const travel_children[] = {
        &tmv::GO_BACK_MENU,
        &tmv::EAST,
        &tmv::ALTAI,
        &tmv::GOLDEN_RING_OF_RUSSIA
    };
    const int travel_size = sizeof(travel_children) / sizeof(travel_children[0]);
}

const tmv::MenuItem tmv::TRAVEL = {
     "1 - Хочу путешествовать!", tmv::show_menu, &tmv::MAIN, travel_children, travel_size 
};
const tmv::MenuItem tmv::EXIT = {
     "0 - Ничего не хочу(" , tmv::exit, &tmv::MAIN
};

namespace {
    const tmv::MenuItem* const main_children[] = {
        &tmv::EXIT,
        &tmv::TRAVEL
    };
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}

const tmv::MenuItem tmv::MAIN = {
    nullptr, tmv::show_menu, nullptr, main_children, main_size
};



