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
#include "/Users/agar7800/C++ Projects/DataStructures/DataStructures/Model/NonLinear/BinarySearchTree.hpp"

class BinaryTreeTester
{
private:
    BinaryTreeNode<int> testNode;
    BinarySearchTree<int> testTree;
public:
    void treeStuff();
    void doTreeStuff();
    
    void BinaryTreeTester :: doTreeStuff()
    {
        testTree.insert(7);
        testTree.insert(1);
        testTree.insert(24);
        testTree.insert(6);
        testTree.insert(66);
        testTree.insert(5);
        testTree.insert(25);
        testTree.insert(4380);
        testTree.insert(99);
        testTree.insert(9001);
        testTree.insert(101);
        
        testTree.inOrderTraversal();
        testTree.preOrderTraversal();
        testTree.postOrderTraversal();
    }
};
#endif /* BinaryTreeTester_h */
