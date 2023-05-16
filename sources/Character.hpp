#pragma once
#include "vector"
#include "string"
#include <exception>
#include <stdexcept>
#include <iostream>
#include "Point.hpp"
// #include "Cowboy.hpp"
// #include "Ninja.hpp"

namespace ariel{
     class Character{
        private:
            std::string name;
            Point loc;
            int targetPoints;
            
        public:
            Character();
            Character(std::string name , Point loc);
            // virtual ~Character();
            bool isAlive();
            double distance(const Character& character);
            void hit(int hitPower);
            std::string getName();
            Point getLocation();
            std::string print();
    };
}