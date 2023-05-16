#pragma once
#include "Character.hpp"
// #include "YoungNinja.hpp"
// #include "OldNinja.hpp"
// #include "TrainedNinja.hpp"

namespace ariel {
    class Ninja : public Character {
        private:
            int speed;
        public:
            Ninja();
            Ninja(std::string name, Point point);
            // virtual ~Ninja();
            void move(Character* enemy);
            void slash(Character* enemy);
    };
}