#pragma once

#include"menu.hpp"

namespace tmv{
    const MenuItem* show_menu(const MenuItem* current);
    const MenuItem* exit(const MenuItem* current);
    const MenuItem* select_item(const MenuItem* current);
    const MenuItem* go_back(const MenuItem* current);
}