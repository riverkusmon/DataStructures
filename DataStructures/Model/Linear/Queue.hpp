//
//  Queue.h
//  DataStructures
//
//  Created by Gardner, Andrew on 2/11/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Queue_hpp
#define Queue_hpp

#include "LinkedList.hpp"

#include <iostream>
using namespace std;

template <class Type>
class Queue : public LinkedList<Type>
{
public:
    Queue();
    ~Queue();
    
    //Queue methods
    void enqueue(Type data);
    Type d
}



#endif /* Queue_h */
