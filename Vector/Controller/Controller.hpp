//
//  Controller.hpp
//  Vector
//
//  Created by Gardner, Andrew on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp
#include <vector>
#include <iostream>
#include <string>
using namespace std;

class Controller
{
private:
    vector<int> minion{ 10, 20, 30 };
    vector<string> dru {"dsds", "afsd", "sadfsdaf"};
    int i;
public:
    Controller();
    void start();

};

#endif /* Controller_hpp */
