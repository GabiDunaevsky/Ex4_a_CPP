#pragma once
#include "vector"
#include "string"
#include <exception>
#include <stdexcept>
#include <iostream>
#include "Character.hpp"
#include "Cowboy.hpp"
#include "Ninja.hpp"
#include "OldNinja.hpp"
#include "YoungNinja.hpp"
#include "TrainedNinja.hpp"


namespace ariel{
     class Team{
        private:
             std::vector<Character*> characters;
             Character* leader;
            
        public:
            Team(Character* leader);
            void add(Character* character);
            void attack(Team* team);
            int stillAlive();
            void print();
    };
}