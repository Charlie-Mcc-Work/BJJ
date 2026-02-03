#ifndef SUBMISSION_H
#define SUBMISSION_H

#include <string>
#include <vector>

class Submission {
public:
        std::string name;
        std::string description;
        std::vector<std::string> 
        double successRate;

        // Constructor
        Submission(std::string subName, std::string desc, double chances);

