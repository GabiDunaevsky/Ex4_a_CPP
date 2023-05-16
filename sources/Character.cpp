#include "exception"
#include "vector"
#include <exception>
#include <stdexcept>
#include <iostream>
#include <bits/stdc++.h>
#include "Character.hpp"

using namespace std;

namespace ariel {
    Character::Character(std::string name , Point loc) : name(name), loc(loc) {
        this->name = name;
        this->loc.setX(loc.getX());
        this->loc.setY(loc.getY());
    }
    bool Character::isAlive(){
        if(this->targetPoints > 0){
            return true;
        }
        return false;
    }
    double Character::distance(const Character& character){
        return(this->loc.distance(character.loc));
    }
    void Character::hit(int hitPower){
        this->targetPoints -= hitPower;
    }
    string Character::getName(){
        return this->name;
    }
    Point Character::getLocation(){
        return this->loc;

    }
    string Character::print(){
        return "";
    }
}