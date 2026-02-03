#ifndef POSITION_H
#define POSITION_H

#include <string>
#include <vector>

class Position {
public:
        std::string name;
        std::string description;
        std::vector<std::string> submissions;
        std::vector<std::string> transitions;

        // Constructor
        Position(std::string posName, std::string desc);

        // Methods
        void display();
        void addSubmission(std::string submission);
        void addTransition(std::string transition);
};

#endif
