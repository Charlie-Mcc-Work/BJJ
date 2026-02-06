#ifndef POSITION_H
#define POSITION_H

#include <string>
#include <vector>

class Position {
public:
        std::string name;
        std::string description;
        int points;
        std::vector<std::string> submissions;
        std::vector<std::string> transitions;

        // Constructor
        Position();
        Position(std::string posName, std::string desc, int p_points);

        // Methods
        void addSubmission(std::string submission);
        std::vector<std::string> getSubmissions();
        void addTransition(std::string transition);
        std::vector<std::string> getTransitions();
        int getPoints();
};

#endif
