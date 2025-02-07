#include "Suportlib.h"
#include <string>
#include <iostream>

AminoAcid newAminoAcid();

int main(int argc, char *argv[]) {
    if (argc == 2) {
        developerMenu(argv[1]);
    } else {

        std::string inputSequence = "";

        std::cout << "Enter the protein sequence 1 amino acid letter." << std::endl;
        std::cout << "Sequence: ";
        std::cin >> inputSequence;

        std::cout << inputSequence << std::endl;
    }

    return 0;
}

AminoAcid newAminoAcid() {
    AminoAcid aa;
    std::cout << "New amino acid entry" << std::endl;
    std::cout << "Name: ";
    std::cin.ignore();
    std::getline(std::cin, aa.name);

    std::cout << "Molecular weight: ";
    std::cin >> aa.molecularWeight;

    std::cout << "Three letters designation: ";
    std::cin >> aa.threeLetters;

    std::cout << "One letter designation: ";
    std::cin >> aa.oneLetter;

    std::cout << "Amino acid stored." << std::endl;
    return aa;
}

