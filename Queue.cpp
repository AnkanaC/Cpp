#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;
class Queue
{
    public :
        int n,rear,front;
        vector <int> que;
        Queue()
        {
            n=0;
            rear=0;
            front=0;
        }
        Queue(int limit, int nf, int nr)
        {
            n=limit;
            front=nf;
            rear=nr;
        }
        void PushData(int num)
        {
            if(rear==(n-1))
                cout<<"Queue Overflow"<<endl;
            else
            {
                if(front==-1 && rear==-1)
                {
                    front=0;
                    rear=0;
                }
                else
                    rear++;
                que.push_back(num);
            }
        }
        int PopData()
        {
            if(front==-1 && rear==-1)
                return(-9999);
            else
            {
                int val=que.at(front);
                if(front==rear)
                {
                    front=-1;
                    rear=-1;
                }
                else
                    front++;
                return val;
            }
        }
        void display()
        {
            if(PopData()==-9999)
                cout<<"Queue Underflow !"<<endl;
            else
                cout<<PopData()<<endl;
        }
};
int main()
{
    int num,n,choice;
    Queue ob();
    cout<<"Enter the size of the queue : ";
    cin>>n;
    Queue obj(n,-1,-1);
    while(true)
    {
        cout<<"\n Menu \n1. Insert Element \n2. Delete Element \n3. Exit"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1 : cout<<"Enter a number to push : ";
                     cin>>num;
                     obj.PushData(num);
                     break;

            case 2 : if(obj.PopData()==-9999)
                        cout<<"Queue Underflow !"<<endl;
                     else
                        cout<<obj.PopData();
                     break;

            case 3 : obj.display();
                     break;

            default : exit(0);
        }
    }
    return 0;
}