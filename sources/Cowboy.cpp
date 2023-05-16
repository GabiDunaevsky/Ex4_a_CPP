#include "exception"
#include "vector"
#include <exception>
#include <stdexcept>
#include <iostream>
#include <bits/stdc++.h>
#include "Cowboy.hpp"

using namespace std;

namespace ariel {
    Cowboy::Cowboy(string name, Point point) : Character(name, point){
        // this->name = name;
        // this->loc.setX(point.getX());
        // this->loc.setY(point.getY());
        // this->bouletAmount = 6;
        // this->targetPoints = 110;
    }
    void Cowboy::shoot(Character* enemy){
    }
    bool Cowboy::hasboolets(){
        if(this->bouletAmount > 0){
            return true;
        }
        return false;
    }
    void Cowboy::reload(){
        this->bouletAmount = 6;
    }
    // std::string print() {
    //     return "";
    // }
}