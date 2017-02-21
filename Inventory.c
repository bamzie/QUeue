//
//  Inventory.cpp
//  DayinStack
//
//  Created by Brian Morales on 2/19/17.
//  Copyright © 2017 Brian Morales. All rights reserved.
//
#ifdef
#include <stdio.h>
#include <iostream>
using namespace std;

class Inventory
{
protected:
    int serialNum;
    string manuDate;
    int lotNum;
public:
    Inventory()
    {
        serialNum = 0;
        manuDate = "";
        lotNum = 0;
    }
    
    void setSerialNum(int data)
    {   serialNum = data;   }
    void setManuDate(string data)
    {   manuDate = data;    }
    void setLotNum(int data)
    {   lotNum = data;      }
    
    int getSerialNum() const
    {   return serialNum;   }
    string getManuDate() const
    {   return manuDate;    }
    int getLotNum() const
    {   return lotNum;      }
    
    void print()
    {
        cout << "Serial Number: " << serialNum << endl;
        cout << "Manufacture Date: " << manuDate << endl;
        cout << "Lot Number: " << lotNum << endl;
    }
    
};
#endif
