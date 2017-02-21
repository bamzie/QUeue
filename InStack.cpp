//
//  InStack.cpp
//  DayinStack
//
//  Created by Brian Morales on 2/15/17.
//  Copyright © 2017 Brian Morales. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Inventory.h"
using namespace std;
class DayInStack : public Inventory
{
private:
    struct StackNode
    {
        Inventory value;
        StackNode *next;
    };
    StackNode* bottom;
    
public:
    //Constructor
    DayInStack()
    { bottom = NULL;   }
    
    //Destructor
    ~DayInStack()
    {
        while (bottom != NULL)
        {
            StackNode* d  = bottom;
            bottom = bottom->next;
            delete d;
        }
    }
    
    
    //stack operations
    void push(Inventory data)
    {
        StackNode* n = new StackNode;
        n->value = data;
        n->next = NULL;
        if (isEmpty())
        {
            bottom = n;
            return;
        }
        
        n->next = bottom;
        bottom = n;
    }
    
    void pop(Inventory &data)
    {
        StackNode* temp = NULL;
        if(isEmpty())
            cout << "Stack is empty.\n";
        else
        {
            data = bottom->value;
            temp = bottom->next;
            delete bottom;
            bottom = temp;
        }
    }
    bool isEmpty()
    {
        return bottom == NULL;
    }
    
    
};

/*int main()
{
    int swich = 0;
    int count = 0;
    int sitem;
    string mdate;
    int lnum;
    Inventory data;
    DayInStack queue;
    
    cout << "Welcome, I will record your inventory. When you are done entering data type in -1.\n";
   
    while(swich != -1)
    {
        cout << "Enter the serial number of the item: ";
        cin >> sitem;
        data.setSerialNum(sitem);
        cin.ignore();
        
        cout << "Enter the manufacture date: ";
        getline(cin, mdate);
        data.setManuDate(mdate);
        
        cout << "Enter the lot number: ";
        cin >> lnum;
        data.setLotNum(lnum);
        
        queue.push(data);
        count++;
        cout << "Enter -1 if you would like to quit: ";
        cin >> swich;
        
    }
    cout << endl;
    
    while(count)
    {
        cout << "Inventory Item " << count << ": \n";
        queue.pop(data);
        data.print();
        count--;
        cout << endl;
    }
    
}*/

