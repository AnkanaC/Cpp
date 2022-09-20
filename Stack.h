#include<iostream>
using namespace std;
class Stack
{
    static int size,top;
    int *arr;
    public:
        Stack();
        Stack(int size);
        pushData(int val);
        popData();
        display();
};