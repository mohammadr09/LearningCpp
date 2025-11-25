#include <iostream>

using namespace std;

class Rectangle {
    private:
        double width;
        double height;

    public:
        Rectangle(double w, double h) {
            width = w;
            height = h;
        }

        double getWidth() {
            return this->width;
        }

        double getHeight() {
            return this->height;
        }

        void setWidth(double width) {
            this->width = width;
        }

        void setHeight(double height) {
            this->height = height;
        }

        double area() {
            return this->height * this->width;
        }

        double perimeter() {
            return 2 * this->height + 2 * this->width;
        }
};