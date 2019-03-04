//
//  Controller.cpp
//  Vector
//
//  Created by Gardner, Andrew on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"

Controller :: Controller()
{
    
}

void Controller :: start()
{
    cout << "This is inside the start method" << endl;
    cout << "seperate chunks with the << just like a + and Strings in Java" << endl;
    for( i = 0; i < 4; i++)
    {
        cout << minion[i] << endl;
        
    }

    for( i = 0; i < 4; i++)
    {
        cout << dru[i] << endl;
    }
   
}

