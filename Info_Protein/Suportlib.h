#ifndef SUPORTLIB_H
#define SUPORTLIB_H

#include <string>

struct AminoAcid {
    std::string name;
    float molecularWeight;
    std::string threeLetters;
    char oneLetter;
};


void developerMenu(char *code);

#endif
