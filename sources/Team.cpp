#include "exception"
#include "vector"
#include <exception>
#include <stdexcept>
#include <iostream>
#include <bits/stdc++.h>
#include "Team.hpp"

using namespace std;

namespace ariel {
    Team::Team(Character* leader){
        this->leader = leader;
        // this->characters.push_back(leader);
        this->add(leader);
    }
    void Team::add(Character* character){
        if(this->characters.size() >= 10){
             throw std::invalid_argument("there are more then 10 characters can't add a new one for this team");
        }
        this->characters.push_back(character);
    }
    void Team::attack(Team* team){

    }
    int Team::stillAlive(){
        return(this->characters.size());
    }
    void Team::print(){
        
    }
}