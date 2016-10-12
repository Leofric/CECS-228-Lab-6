//
//  main.cpp
//  LabP6
//
//  Created by Alex Berthon on 10/10/16.
//  Copyright © 2016 Alex Berthon. All rights reserved.
//

#include <iostream>
#include "myDate.hpp"

int main() {
    
    myDate c1 = myDate(1, 10, 2010);
    myDate c2 = myDate(13, 2, 2000);
    
    std::cout<< (c1 == c2)  << std::endl;
    std::cout<< (c1!=c2)    << std::endl;
    std::cout<< (c1>c2)     << std::endl;
    std::cout<< (c1<c2)     << std::endl;
    std::cout<< (c1<=c2)    << std::endl;
    std::cout<< (c1>=c2)    << std::endl;

    return 0;
}
