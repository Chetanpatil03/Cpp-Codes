#include<iostream>
using namespace std;

int main()
{
    for (int  i = 0; i < 15; i++)
    {
        if (i==5)
        {
            cout<<"This iteration will skipped";
            continue;
        }
        else if (i==10)
        {
            cout<<"Break the loop";
            break;
        }
        else{
            cout<<i<<endl;
        }
        
        
    }
    
}