#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number Week day";
    cin>>n;

    switch (n)
    {
    case 1:
        cout<<"Sunday";
        break;
    case 2:
        cout<<"Monday";
        break;
    case 3:
        cout<<"Tuesday";
        break;
    case 4:
        cout<<"Wednsday";
        break;
    case 5:
        cout<<"Thursday";
        break;
    case 6:
        cout<<"Friday";
        break;
    case 7:
        cout<<"Saturday";
        break;
    default:
        break;
    }

    if (n==4||n==3)
    {
        cout<<"Middle of the week......";
    }
    else if (n==7||n==1)
    {
        cout<<"Weekends...........";
    }
    else{
        cout<<"Week days this shall pass";
    }

}