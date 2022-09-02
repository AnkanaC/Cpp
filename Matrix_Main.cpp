#include "matrix.h"

int main()
{
    int row,col;
    cout<<"Enter the row and the column size of the Matrix : ";
    cin>>row>>col;
    Matrix obj1(row,col);
    Matrix obj2(row,col);
    Matrix res(row,col);
    cout <<"For the first Matrix : "<<endl;
    obj1.getData();
    cout<<"For the second Matrix : "<<endl;
    obj2.getData();
    res = obj1.add(obj2);
    res.display();
    return 0;
}