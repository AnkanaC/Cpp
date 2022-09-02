#include<iostream>
using namespace std;
class Array
{
    int *arr;
    int len;
    public :
        Array(int len);
        void getData();
        void display();
        Array add(Array ob);
};
