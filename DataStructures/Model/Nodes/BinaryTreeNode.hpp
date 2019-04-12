//
//  BinaryTreeNode.h
//  DataStructures
//
//  Created by Gardner, Andrew on 4/12/19.
//  Copyright © 2019 CTEC. All rights reserved.
//
#include DoubleNode
#include LinearNode

#ifndef BinaryTreeNode_hpp
#define BinaryTreeNode_hpp

template <class Type>
class BinaryTreeNode : public Node<Type>
{
private:
BinaryTreeNode<Type> * root;
BinaryTreeNode<Type> * leftChild;
BinaryTreeNode<Type> * rightChild;

public:
BinaryTreeNode();
Node(Type data);
BinaryTreeNode(Type data, BinaryTreeNode<Type> * root, BinaryTreeNode<Type> * leftChild, BinaryTreeNode<Type> * rightChild);

BinaryTreeNode<Type> * getRootNode();
BinaryTreeNode<Type> * getLeftChild();
BinaryTreeNode<Type> * getRightChild

void setRootNode(BinaryTreeNode<Type> * root);
void setLeftChild(BinaryTreeNode<Type> * leftChild);
void setRightChild(BinaryTreeNode<Type> * rightChild);
};
template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode() : Node<Type>()
{
    root = nullptr;
    leftChild = nullptr;
}

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode(Type data) : Node<Type>(data)
{
    root = nullptr;
    rightChild = nullptr;
}

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode(Type data, BinaryTreeNode<Type> *root, BinaryTreeNode<Type>* rightChild) : Node<Type>(data)
{
    this->leftChild = leftChild;
    this->rightChild = rightChild;
}

template <class Type>
void BinaryTreeNode<Type> :: setRightChild(BinaryTreeNode<Type>* rightChild)
{
    this->rightChild = rightChild;
}

template <class Type>
void BinaryTreeNode<Type> :: setLeftChild(BinaryTreeNode<Type>* leftChild)
{
    this->leftChild = leftChild;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getLeftChild()
{
    return leftChild;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRightChild()
{
    return rightChild;
}

#endif /* BinaryTreeNode_h */
