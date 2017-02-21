//
//  main.cpp
//  DayinStack
//
//  Created by Brian Morales on 2/15/17.
//  Copyright © 2017 Brian Morales. All rights reserved.
//

#include <iostream>
using namespace std;

template<class T> class DayInStack
{
private:
    struct StackNode
    {
        T value;
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
    void push(T data)
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
    
    void pop(T &data)
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
    string value;
    
    DayInStack<string> stack;
    
    cout << "Pushing value 1 in stack...\n";
    stack.push(" doing");
    
    cout << "Pushing value 2 in stack...\n";
    stack.push("how you");
    
    cout << "Pushing value 3 in stack...\n";
    stack.push("hello ");
    
    cout << "Popping values...\n";
    
    stack.pop(value);
    cout << value;
    stack.pop(value);
    cout << value;
    stack.pop(value);
    cout << value << endl;
}*/
