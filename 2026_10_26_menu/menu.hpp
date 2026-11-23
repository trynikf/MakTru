#pragma once

namespace tmv{
    struct MenuItem{
        const char* const title;
        const MenuItem* (*func)(const MenuItem* current);

        const MenuItem* parent;

        const MenuItem* const* children = nullptr;
        const int children_count = 0;
    };
}



