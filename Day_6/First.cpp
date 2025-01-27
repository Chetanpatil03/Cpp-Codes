#include<iostream>
using namespace std;

void printArray(int *a, int n)
{
    cout<<"Array elements are : ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"\t";
    }
}

int SumArray(int *a, int n)
{
    int sum ;
    for (int i = 0; i < n; i++)
    {
        sum = sum +i;
    }

    return sum;
    
}

int main()
{
    int arr[] = {15,56,5,9,8,476,9,59,7,6,9,5,2,6,94,75};
    int sz = sizeof(arr)/sizeof(int);
    printArray(arr,sz);
    cout<<"\nElements are : "<<sz<<endl;
    cout<<"\nThe addition of all elements in array is :: "<<SumArray(arr,sz);
    cout<<"\nThe Average is :: "<<SumArray(arr,sz)/sz;
    return 0;
}