#include "exception"
#include "vector"
#include <exception>
#include <stdexcept>
#include <iostream>
#include <bits/stdc++.h>
#include "Point.hpp"
/*
Sources for this class:
https://www.geeksforgeeks.org/program-calculate-distance-two-points/

*/

using namespace std;

namespace ariel {
    Point::Point(double xVal, double yVal){
        this->xVal = xVal;
        this->yVal = yVal;
    }

    double Point::distance(const Point& point){
        return sqrt(pow(this->xVal - point.xVal, 2) + pow(this->yVal - point.yVal, 2) * 1.0);
    }
    void Point::print(){
        string str = "(" + std::to_string(this->xVal) + "," + std::to_string(this->yVal) + ")";
        cout << str << endl;
    }
    Point Point::moveTowards(const Point& src ,const Point& dest, double distance){
        return *this;
    }
    void Point::setX(double xVal){
        this->xVal = xVal;
    }
    void Point::setY(double yVal){
        this->yVal = yVal;
    }
    double Point::getX(){
        return this->xVal;
    }
    double Point::getY(){
        return this->yVal;
    }

}