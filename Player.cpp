#include "Player.h"


Player::Player() {
    name = "None";
    points = 20;
    stats["strength"] = 1;
    stats["agility"] = 1;
    stats["flexibility"] = 1;
    stats["stamina"] = 1;

    skills["triangle"] = 1;
    skills["rnc"] = 1;
    skills["kimura"] = 1;
    skills["kneebar"] = 1;
    skills["armbar"] = 1;
    skills["guillotine"] = 1;

    skills["top_mount"] = 1;
    skills["top_back"] = 1;
    skills["top_guard"] = 1;
    skills["top_sidecontrol"] = 1;

}

Player::Player(std::string p_name) {
    Player();
    name = p_name;
}

std::string Player::getName() {
    return name;
}

int Player::getPoints() {
    return points;
}

void Player::setPoints(int s_points) {
    points = s_points;
}

int Player::getStat(std::string stat) {
    return stats["stat"];
}

int Player::setStat(std::string stat, int value) {
    if (value <= getPoints()) {
        stats[stat] = value;
        setPoints(getPoints() - value);
    } 
    return points;
}

int Player::getSkill(std::string skill) {
    return skills["skill"];
}

int Player::setSkill(std::string skill, int value) {
    if (value <= getPoints()) {
        skills[skill] = value;
        setPoints(getPoints() - value);
    } 
    return points;
}

void Player::setStartStatuses() {
    statuses["stamina"] = stats["stamina"];
    statuses["right_elbow"] = MAX_PART_HP;
    statuses["left_elbow"] = MAX_PART_HP;
    statuses["right_shoulder"] = MAX_PART_HP;
    statuses["left_shoulder"] = MAX_PART_HP;
    statuses["right_wrist"] = MAX_PART_HP;
    statuses["left_wrist"] = MAX_PART_HP;
    statuses["right_knee"] = MAX_PART_HP;
    statuses["left_knee"] = MAX_PART_HP;
    statuses["right_ankle"] = MAX_PART_HP;
    statuses["left_ankle"] = MAX_PART_HP;
    statuses["neck"] = MAX_PART_HP;
}

void Player::setStatus(std::string status, int value) {
    if (MAX_PART_HP < value) {
        value = MAX_PART_HP;
    }
    statuses[status] = value;
}

int Player::getStatus(std::string status) {
    return statuses[status];
}