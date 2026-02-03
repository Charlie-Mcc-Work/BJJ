#include "Submission.h"
#include <iostream>

Submission::Submission(std::string subName, std::string desc, double chances) {
    name = subName;
    description = desc;
    successRate = chances;
}

void Submission::display() {
    std:cout << "\n=== " << name << " ===\n";
    for (int i = 0; i < options.size(); i++) {
        std::cout << i + 1 << ". " << options[i] << "\n";
    }
}


void Submission::addwkk
