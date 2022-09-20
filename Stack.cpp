#include "Stack.h"
Stack :: Stack()
{
    this->size=1;
    this->top=0;
    arr=new int[size];
}
Stack :: Stack(int cap)
{
    this->size=cap;
    this->top=-1;
    arr=new int[size];
}
void Stack :: pushData(int val)
{
    if(top==size)
        cout<<"OVERFLOW"<<endl;
    else
    {
        ++top;
        arr[top]=val;
    }
}
int Stack :: popData()
{
    if(top==-1)
        return -1;
    else
    {
        top--;
        return (arr[top]);
    }
}
void Stack :: display()
{
    int n=popData()
    if(n==-1)
        cout<<"UNDERFLOW"<<endl;
    else
        cout<<"Popped value = "<<n<<endl;
}