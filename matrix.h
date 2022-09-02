#include<iostream>
using namespace std;
class Matrix
{
    int **mat;
    int row;
    int col;
    public :
        Matrix(int row,int col);
        void getData();
        void display();
        Matrix add(Matrix ob);
};
