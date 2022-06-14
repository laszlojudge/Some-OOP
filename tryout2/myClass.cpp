//
//  myClass.cpp
//  tryout2
//
//  Created by Biro Laszlo on 14.06.22.
//

#include "myClass.hpp"

myClass::myClass(std::string in_name, int in_age, int in_height, int in_weight, bool in_pregnant) {
    name = in_name;
    age = new int;
    *age = in_age;
    height = new int;
    *height = in_height;
    weight = in_weight;
    pregnant = in_pregnant;
}

std::string myClass::get_name() {
    return name;
}
int myClass::get_age() {
    return *age;
}
int myClass::get_height() {
    return *height;
}
int myClass::get_weight() {
    return weight;
}
bool myClass::get_pregnant() {
    return pregnant;
}

void myClass::talk(std::string text) {
    std::cout << name << " says " << text << std::endl;
}
void myClass::dance(std::string dance_type) {
    std::cout << name << " is dancing. (" << dance_type << ")" << std::endl;
}


myClass::~myClass() {
    delete age;
    delete height;
    std::cout << "Deleted" << std::endl;
}
