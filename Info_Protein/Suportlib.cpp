#include "Suportlib.h"
#include <iostream>
#include <fstream>

void developerMenu(char *code) {
    bool control;

    if (*code == 'D') {
        control = true;
    } else {
        control = false;
    }

    while (control) {
        std::cout << "Development menu" << std::endl;
        std::cout << "1. Add amino acids." << std::endl;
        std::cout << "2. Exit." << std::endl;
        control = false;
    }
}
