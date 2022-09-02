#include "array.h"
Array :: Array(int len)
{
   arr=new int[n];
   this->len=len; 
}
void Array::getData()
{
    cout<<"Enter "<<(this->len)<<" Elements for the array : ";
    for(int i=0;i<this->len;i++)
        cin>>arr[i];
}
void Array::display()
{
    for(int i=0;i<this->len;i++)
        cout<<arr[i]<<" ";
}
Array::add(Array ob)
{
    Array res(this->len);

    for (int i=0;i<ob.len;i++)
    {
        res.arr[i]=this->arr[i]+ob.arr[i];
    }
    return res;
}
