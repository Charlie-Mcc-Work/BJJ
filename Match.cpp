#include "Position.h"
#include <iostream>


Position::Position() {
    name = "None";
    description = "None";
    points = 0;
}

Position::Position(std::string posName, std::string desc, int p_points) {
    name = posName;
    description = desc;
    points = p_points;
}

void Position::addSubmission(std::string submission) {
    submissions.push_back(submission);
}

std::vector<std::string> Position::getSubmissions() {
    return submissions;
}

void Position::addTransition(std::string transition) {
    transitions.push_back(transition);
}

std::vector<std::string> Position::getTransitions() {
    return transitions;
}

int Position::getPoints() {
    return points;
}
