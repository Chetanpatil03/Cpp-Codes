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
    time_t orderDate;
};

struct Customer
{
    string customerID;
    string customerName;

};

int main(){
    vector<Product> products = {
        {101,"Laptop","Electronics"},
        {102,"SmartPhone","Electronics"},
        {103,"I-Phone","Electronics"},
        {104,"Coffee Maker","Kitchen"},
        {105,"Blender","Kitchen"},
        {106,"Desk Lamp","Home"}
    };

    deque<string>recentCustomers = {
        "C001","C002","C003","C004","C005"
    };


    return 0;
}




