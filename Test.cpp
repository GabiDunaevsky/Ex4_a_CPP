#include "doctest.h"

#include "sources/Character.hpp"
#include "sources/OldNinja.hpp"
#include "sources/YoungNinja.hpp"
#include "sources/TrainedNinja.hpp"
#include "sources/Cowboy.hpp"
#include "sources/Team.hpp"
// #include "sources/Team2.hpp"
#include <random>
#include <chrono>

using namespace ariel;

    TEST_CASE("checc Point") {
        Point point1{1, 1};
        Point point2{2, 2};
        Point point3{-2, -1};
        CHECK_EQ(point1.distance(point2), point2.distance(point1));
        CHECK_EQ(point1.distance(point1), 0);
        CHECK_EQ(point1.distance(point2), 1.414214);
        CHECK_EQ(point2.distance(point3), 4.123106);
        CHECK_EQ(point1.distance(point3), 3);
        point3.setX(1);
        CHECK_EQ(point3.getX(), 1);
        point3.setY(1);
        CHECK_EQ(point3.getY(), 1);
        CHECK_EQ(point1.distance(point3), 0);
    }

    TEST_CASE("Check Ninja") {
        Point point1{1, 1};
        Point point2{2, 2};
        Point point3{3, 3};
        Point point4{4,4};
        TrainedNinja ninjaT{"gabi", point1};
        YoungNinja ninjaY{"Gal" , point2};
        OldNinja ninjaOld{"Idan" , point3};
        Ninja ninjaR{"Dana" , point4};
        CHECK_EQ(ninjaT.distance(ninjaY), ninjaY.distance(ninjaT));
        CHECK_EQ(ninjaT.distance(ninjaY), 1.414214);
        CHECK_EQ(ninjaR.getLocation().getX() , 4);
        CHECK_EQ(ninjaR.getLocation().getY() , 4);
        CHECK_EQ(ninjaR.getName() , "Dana");
        CHECK_FALSE(!(ninjaR.isAlive()));
        CHECK_EQ(ninjaY.distance(ninjaOld), 4.123106);
    }

    TEST_CASE("Check Cowboy") {
        Point point1{1, 1};
        Point point2{2, 2};
        Cowboy gabi{"gabi", point1};
        Cowboy dana{"dana", point2};
        CHECK_EQ(gabi.distance(dana), dana.distance(gabi));
        CHECK_EQ(gabi.distance(dana), 1.414214);
        CHECK_EQ(dana.getName() , "Dana");
        CHECK_FALSE(!(gabi.hasboolets()));
        CHECK_FALSE(!(gabi.isAlive()));
    }

    TEST_CASE("Check team") {
        Point point1{1, 1};
        Point point2{2, 2};
        Cowboy gabi{"gabi", point1};
        Cowboy dana{"dana", point2};
        Team team1{&gabi};
        Team team2{&dana};
        CHECK_FALSE(!(team1.stillAlive()));
        team1.add(&dana);
        CHECK_FALSE(!(team1.stillAlive()));
    }


