#include "Stack.h"
#include<stdlib.h>
int main()
{
    int len,choice,val;
    cout<<"Enter the size of the Stack: ";
    cin>>len;
    Stack obj(len);
    while(true)
    {
        cout <<"Enter your choice : \n1. Push\n2. Pop\n3. Exit "<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1 : cout<<"Enter a number to push"<<endl;
                     cin>>val;
                     obj.pushData(val);
                     break;

            case 2 : obj.display();
                     break;

            case 3 : exit(0); 
        }
    }
    return 0;
}