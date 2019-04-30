//
//  BinaryTreeTester.h
//  DataStructures
//
//  Created by Gardner, Andrew on 4/12/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp

#include "/Users/agar7800/C++ Projects/DataStructures/DataStructures/Model/Nodes/BinaryTreeNode.hpp"
#include "/Users/agar7800/C++ Projects/DataStructures/DataStructures/Model/NonLinear/BinarySearchTree.hpp"

class BinaryTreeTester
{
private:
    BinaryTreeNode<int> testNode;
    BinarySearchTree<int> testTree;
public:
    void doTreeStuff();
};
#endif /* BinaryTreeTester_h */
