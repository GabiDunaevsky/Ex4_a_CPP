#include "exception"
#include "vector"
#include <exception>
#include <stdexcept>
#include <iostream>
#include <bits/stdc++.h>
#include "Ninja.hpp"

using namespace std;

namespace ariel {
    Ninja::Ninja(std::string name, Point point) : Character(name, point){
        // this->name = name;
        // this->loc.setX(point.getX());
        // this->loc.setY(point.getY());
    }
    void Ninja::move(Character* enemy){

    }
    void Ninja::slash(Character* enemy){

    }
    
}