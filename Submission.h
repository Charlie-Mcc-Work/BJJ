#ifndef SUBMISSION_H
#define SUBMISSION_H

#include <string>
#include <vector>

class Submission {
public:
        std::string name;
        std::string description;
        std::string attacking_zone;
        double baseSuccessRate;
        std::vector<std::string> defenses;

        // Constructor
        Submission();
        Submission(std::string subName, std::string desc, double chances);

        std::string getName();
        std::string getDescription();
        std::string getAttackingZone();
        double getBaseSuccessRate();
        std::vector<std::string> getDefenses();
        void addDefense(std::string defense);
};
#endif