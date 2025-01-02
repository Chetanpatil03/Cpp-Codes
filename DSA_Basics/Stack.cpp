#include<iostream>
using namespace std;
int n;
class Stack
{
    int stk[10],top;
    public:
        void push();
        void pop();
        void dis();
    Stack(){
        top = -1;
    }
};

void Stack::push()
{
    int ele;
    if(top>=n-1){
        cout<<"Stack overflow ";
    }
    else
    {
        cout<<"Enter element : ";
        cin>>ele;
        top=top+1;
        stk[top] = ele;
    }
    
}

void Stack::pop()
{
    int ele;
    if(top<=-1){
        cout<<"Stack underflow";
    }
    else{
        ele = stk[top];
        cout<<"Deleted element are : "<<ele;
        top--; 
    }
}

void Stack::dis()
{
    if(top<=-1)
    {
        cout<<"Stack is empty";
    }
    else
    {
        cout<<"\nStack elements : ";
        for (int i = top; i >= 0; i--)
        {
            cout<<"\t"<<stk[i];
        }
        
    }
}

int main()
{
    cout<<"Enter size :";
    cin>>n;

    int ch;
    Stack s;
    cout<<"1.Push 2.Pop 3.Display 4.Delete";
    while (1)
    {
        cout<<"\nEnter choice : ";
        cin>>ch;
        switch (ch)
        {
        case 1: s.push();break;
        case 2: s.pop();break;
        case 3: s.dis();break;
        case 4: exit(0);
        default:
            break;
        }
    }
    
}