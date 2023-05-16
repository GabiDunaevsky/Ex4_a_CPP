#pragma once
#include "vector"
#include "string"
#include <exception>
#include <stdexcept>
#include <iostream>


namespace ariel{
     class Point{
        private:
            double xVal;
            double yVal;
            
        public:
            Point();
            Point(double xVal , double yVal);
            double distance(const Point& point);
            void print();
            Point moveTowards(const Point& src ,const Point& dest, double distance);
            void setX(double xVal);
            void setY(double yVal);
            double getX();
            double getY();
    };
}