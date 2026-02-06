#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include <unordered_map>

class Player {
public:
        std::string name;
        int points;
        std::unordered_map<std::string, int> stats;
        std::unordered_map<std::string, int> skills;
        std::unordered_map<std::string, int> statuses;
        const int MAX_PART_HP = 100;

        // Constructor
        Player();
        Player(std::string p_name);

        // Methods
        std::string getName();
        int getPoints();
        void setPoints(int s_points);
        int getStat(std::string stat);
        void setStat(std::string stat, int value);
        int getSkill(std::string skill);
        int setSkill(std::string skill, int value);
        void setStartStatuses();
        void setStatus(std::string status, int value);
        int getStatus(std::string status);
};

#endif
