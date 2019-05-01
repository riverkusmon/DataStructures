//
//  BinaryTreeNode.h
//  DataStructures
//
//  Created by Gardner, Andrew on 4/12/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef BinaryTreeNode_hpp
#define BinaryTreeNode_hpp

#include "Node.hpp"

template <class Type>
class BinaryTreeNode : public Node<Type>
{
private:
    BinaryTreeNode<Type> * root;
    BinaryTreeNode<Type> * left;
    BinaryTreeNode<Type> * right;
public:
    BinaryTreeNode();
    BinaryTreeNode(Type data);
    
    void setRootNode(BinaryTreeNode<Type> * root);
    void setRightNode(BinaryTreeNode<Type> * right);
    void setLeftNode(BinaryTreeNode<Type> * left);

    BinaryTreeNode<Type> * getRootNode();
    BinaryTreeNode<Type> * getLeftChild();
    BinaryTreeNode<Type> * getRightChild();
};
    template <class Type>
    BinaryTreeNode<Type> :: BinaryTreeNode() : Node<Type>()
    {
        root = nullptr;
        left = nullptr;
        right = nullptr;
    }
    
    template <class Type>
    BinaryTreeNode<Type> :: BinaryTreeNode(Type data) : Node<Type>(data)
    {
        root = nullptr;
        left = nullptr;
        right = nullptr;
    }
    
    template <class Type>
    BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRootNode()
    {
        return this->root;
    }
    
    template <class Type>
    BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRightChild()
    {
        return this->right;
    }
    
    template <class Type>
    BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getLeftChild()
    {
        return this->left;
    }
    
    template <class Type>
    void BinaryTreeNode<Type> :: setRootNode(BinaryTreeNode<Type> * newRoot)
    {
        root = newRoot;
    }
    
    template <class Type>
    void BinaryTreeNode<Type> :: setRightNode(BinaryTreeNode<Type> * right)
    {
        this->right = right;
    }
    
    template <class Type>
    void BinaryTreeNode<Type> :: setLeftNode(BinaryTreeNode<Type> * left)
    {
        this->left = left;
    }


#endif /* BinaryTreeNode_h */
