//
//  Controller.cpp
//  DataStructures
//
//  Created by Gardner, Andrew on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"


void Controller :: start()
{
    cout << " Welcome to the data structures app" << endl;
    usingNodes();
}

void Controller :: usingNodes()
{
    LinearNode<int> mine(5);
    LinearNode<string> wordHolder("words can be stored too");
    cout << mine.getData() << endl;
    cout << wordHolder.getData() << endl;
    wordHolder.setData("replaced text");
    cout << wordHolder.getData() << endl;
    
    vector<Music> tunez = FileController :: musicDataToVector("/Users/agar7800/C++ Projects/DataStructures/DataStructures/Resources/music.csv");
}

void Controller :: testFiles()
{
    for(int i = 234; i < 256; i++)
    {
        cout << index << ": contents are: " << musicDataToVector[i] << endl;
        
    }
    
}
