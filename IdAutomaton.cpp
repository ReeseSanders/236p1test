#include "IdAutomaton.h"

void IdAutomaton::S0(const std::string& input) {
    if (isalpha(input[index])) {
        std::cout << "This is a letter : " << input[index] << std::endl;
        inputRead = 1;
        index++;
        S1(input);
    }
    else {
        Serr();
    }
}

void IdAutomaton::S1(const std::string& input) {
    if (isspace(input[index])) {return;}
    if (index == input.size()) {return;}
    if (!isalnum(input[index])) {
        inputRead = 0;
        return;
    }
    inputRead++;
    index++;
    S1(input);
    return;
}
