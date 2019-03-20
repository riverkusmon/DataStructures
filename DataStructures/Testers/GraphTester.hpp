//
//  GraphTester.h
//  DataStructures
//
//  Created by Gardner, Andrew on 3/20/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef GraphTester_hpp
#define GraphTester_hpp

#include "/Users/agar7800/C++ Projects/DataStructures/DataStructures/Model/NonLinear/Graph.hpp"
#include <iostream>

class GraphTester
{
private:
    Graph<string> puzzle;
    void setup();
    void compareTraversals();
    void findCheapestTraversal();
    
public:
    void testGraphs();
};

#endif /* GraphTester_h */
