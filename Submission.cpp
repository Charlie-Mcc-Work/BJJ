#include "Submission.h"
#include <iostream>

Submission::Submission() {
}

Submission::Submission(std::string subName, std::string desc, double chances) {
    name = subName;
    description = desc;
    baseSuccessRate = chances;
}

std::string Submission::getName() {
    return name;
}

std::string Submission::getDescription() {
    return description;
}

std::string Submission::getAttackingZone() {
    return attacking_zone;
}

double Submission::getBaseSuccessRate() {
    return baseSuccessRate;
}

std::vector<std::string> Submission::getDefenses() {
    return defenses;
}
void Submission::addDefense(std::string defense) {
    defenses.push_back(defense);
}