//
//  FileController.hpp
//  DataStructures
//
//  Created by Gardner, Andrew on 2/5/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include <stdio.h>
#include "/Users/agar7800/C++ Projects/DataStructures/DataStructures/Resources/CrimeData.hpp"
#include "/Users/agar7800/C++ Projects/DataStructures/DataStructures/Resources/Music.hpp"
#include "/Users/agar7800/C++ Projects/DataStructures/DataStructures/Model/Linear/Array.hpp"
#include "/Users/agar7800/C++ Projects/DataStructures/DataStructures/Model/Linear/LinkedList.hpp"
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
    static LinkedList<CrimeData> readDataToList(string filename);
    //static BinarySearchTree<CrimeData> readDataToTree(string filename);
    
    static vector<Music> musicDataToVector(string filename);
    
    static Array<Music> musicDataToArray(string filename);
    
    static LinkedList<Music> musicDataToList(string filename);
};





#endif /* FileController_hpp */
