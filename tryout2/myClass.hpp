//
//  myClass.hpp
//  tryout2
//
//  Created by Biro Laszlo on 14.06.22.
//

#ifndef myClass_hpp
#define myClass_hpp

#include <stdio.h>
#include <iostream>

class myClass {
private:
    std::string name;
    int* age;
    int* height;
    int weight;
    bool pregnant;
    
public:
    myClass() = default;
    myClass(std::string in_name, int in_age, int in_height, int in_weight, bool in_pregnant);
    std::string get_name();
    int get_age();
    int get_height();
    int get_weight();
    bool get_pregnant();
    
    void talk(std::string text);
    void dance(std::string dance_type);
    
    
    ~myClass();
};

#endif /* myClass_hpp */
