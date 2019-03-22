//
//  Controller.hpp
//  DataStructures
//
//  Created by Gardner, Andrew on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include "../Model/Nodes/Node.hpp"
#include "../Model/Nodes/LinearNode.hpp"
#include "FileController.hpp"
#include "../Testers/LinearTester.hpp"
#include "/Users/agar7800/C++ Projects/DataStructures/DataStructures/Testers/GraphTester.hpp"
using namespace std;

class Controller
{
    

private:
    void usingNodes();
    void testLinear();
    void testGraph();
public:
    void start();
    void testFiles();
};

#endif /* Controller_hpp */
