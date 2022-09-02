#include "array.h"

int main()
{
    int len;
    cout<<"Enter the size of the Array: ";
    cin>>len;
    Array a1(len);
    Array a2(len);
    Array res(len);
    cout <<"For the first Array : "<<endl;
    a1.getData();
    cout<<"For the second Array : "<<endl;
    a2.getData();
    res = a1.add(a2);
    res.display();
    return 0;
}