#include<iostream>

using namespace std;

int main(){

    int Elements[] = {125,2,6,22,6,5,26,3,19,5,62,2,6};

    for (int elem : Elements)
    {
        cout<<elem<<" ";
    }
    
    return 0;
}