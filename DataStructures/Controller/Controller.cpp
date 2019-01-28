//
//  Controller.cpp
//  DataStructures
//
//  Created by Gardner, Andrew on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"

Controller :: Controller()
{
    this -> specialNumber = 123456;
}

void Controller :: start()
{
    cout << "This is inside the start method" << endl;
    cout << "this is how you access a variable: " << specialNumber << endl;
    cout << "seperate chunks with the << just like a + and Strings in Java" << endl;
    specialNumber = 123;
    string answer;
    cout << "Type in your name" << endl;
    getline(cin, answer);
    cout << "you typed: " << answer << endl;
}
