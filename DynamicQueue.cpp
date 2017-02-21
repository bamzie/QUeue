//
//  DynamicQueue.cpp
//  DayinStack
//
//  Created by Brian Morales on 2/19/17.
//  Copyright © 2017 Brian Morales. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;
template<class T>
class DynamicQue
{
private:
    struct QueueNode
    {
        T value;
        QueueNode* next;
    };
    
    QueueNode* front;
    QueueNode* rear;
    int numitems;
public:
    //contructor
    DynamicQue()
    {   front = NULL;
        rear = NULL;
        numitems = 0;
    }
    // destructor
    ~DynamicQue()
    {   clear();    }
    
    // Function to that inserts the value of numitem at the end of the queue
    void enqueue(T data)
    {
        QueueNode* n = new QueueNode;
        n->value = data;
        n->next = NULL;
        
        if(isEmpty())
        {
            front = n;
            rear = n;
        }
        else
        {
            rear->next = n;
            rear = n;
        }
        
         numitems++;
    }
    
    //Function that removes the value at the front of the queue, and copies it into data
    void dequeue(T &data)
    {
        QueueNode* temp;
        
        if(isEmpty())
            cout << "The queue is empty!!\n";
        else
        {
            data = front->value;
            temp = front;
            front = front->next;
            delete temp;
        
            numitems--;
        }
    }
    
    //Empty function to chech if the dynamic que is empty
    bool isEmpty()
    {
        return numitems == 0;
    }
    
    //function to clear the dynamic queue
    void clear()
    {
        T values; //dummy variable
        
        while(!isEmpty())
            dequeue(values);
        
        
    }
};

/*int main()
{
    DynamicQue<string> que;
    string team;
    
    cout << "Enter 5 soccer teams\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Please enter a soccer team: ";
        getline(cin, team);
        que.enqueue(team);
    }
    
    cout << "These are the teams you entered: \n";
    for (int i = 0; i < 5; i++)
    {
        que.dequeue(team);
        cout << team << endl;
    }
}*/
