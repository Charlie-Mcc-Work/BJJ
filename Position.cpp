#include "Position.h"
#include <iostream>

Position::Position(std::string posName, std::string desc) {
    name = posName;
    description = desc
}

void Position::display() {
    std::cout << "\n=== " << name << " ===\n";
    std::cout << "\n=== " << description << " ===\n";
    for (int i = 0; i < options.size(); i++) {
        std::cout << i + 1 << ". " << options[i] << "\n";
    }
}

void Position::addSubmission(std::string submission) {
    options.push_back(submission);
}

void Position::addTransition(std::string transition) {
    options.push_back(transition);
}
