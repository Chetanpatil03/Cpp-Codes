#include<iostream>
#include<vector>
#include<set>
#include<deque>
#include<list>
#include<map>
#include<string>
#include<ctime>
#include<unordered_set>
#include<unordered_map>

using namespace std;

struct Product
{
    int productID;
    string name;
    string category; //structure shcema
};

struct Order
{
    int orderID;
    int productID;
    int quantity;
    string customerID;
};



