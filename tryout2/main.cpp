//
//  main.cpp
//  tryout2
//
//  Created by Biro Laszlo on 14.06.22.
//

#include "myClass.hpp"
#include <iostream>
#include <iomanip>

int main(int argc, const char * argv[]) {
    
   myClass n_class("Nikolett", 32, 157, 62, true);
   
   std::cout << "Name: " << n_class.get_name() << std::endl
      << "Age: " << n_class.get_age() << std::endl
      << "Weight: " << n_class.get_weight() << std::endl
      << "Height: " << n_class.get_height() << std::endl
      << "Pregnant: " << std::boolalpha << n_class.get_pregnant() << std::endl;
   std::cout << std::endl;
   n_class.talk("");
   n_class.dance("");
   std::cout << std::endl;
   n_class.talk("");
   
    return 0;
}
