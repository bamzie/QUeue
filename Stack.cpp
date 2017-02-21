//
//  Stack.cpp
//  DayinStack
//
//  Created by Brian Morales on 2/20/17.
//  Copyright © 2017 Brian Morales. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
#define MAX 8

int main()
{
    stack<int, vector<int> >iStack;
    
    for (int i = 2; i < MAX; i += 2)
    {
        cout << "Pushing " << i << endl;
        iStack.push(i);
    }
    
    cout << "THe size of the stack is: ";
    cout << iStack.size() << endl;
    
    for (int i = 2; i < MAX; i += 2)
    {
        cout << "Popping " << iStack.top() << endl;
        iStack.pop();
    }
}
