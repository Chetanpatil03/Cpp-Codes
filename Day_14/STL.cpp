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



void addproduct(vector<Product> &products){
    Product product;
    
    cout<<"Enter id:";
    cin>>product.productID;
    cout<<"Enter product name:";
    cin>>product.name;
    cout<<"Enter category:";
    cin>>product.category;

    products.push_back(product);
}

void disproducts(const vector<Product>& products){
    for(const Product& str : products){
        cout<<"Id : "<<str.productID<<", Name : "<<str.name<<", Category : "<<str.category<<endl;
    }
}

int main(){
    vector<Product> products = {
        {101,"Laptop","Electronics"},
        {102,"SmartPhone","Electronics"},
        {103,"I-Phone","Electronics"},
        {104,"Coffee Maker","Kitchen"},
        {105,"Blender","Kitchen"},
        {106,"Desk Lamp","Home"}
    }; //the product list type of structure Products

    // vector<Customer> customers = {
    //     {"C001","Alice"},  
    //     {"C002","Bob"},  
    //     {"C003","Chetan"},  
    //     {"C004","Prafull"},  
    //     {"C005","Harry"},  
    // };

    // deque<string>recentCustomers = {
    //     "C001","C002","C003","C004","C005"
    // }; //to manage the recent customer

    // recentCustomers.push_back("C006");
    // recentCustomers.push_front("C007");

    // list<Order>orderHistory; //to manage order history

    // orderHistory.push_back({1,101,1,"C001",time(0)});
    // orderHistory.push_back({2,102,3,"C003",time(0)});
    // orderHistory.push_back({3,103,4,"C005",time(0)});

    // //set

    // set<string>categories;

    // //auto direct the compiler to use the initialize expression of declared variale. to deduce its type
    // //it will find the datatype automatically.

    // for(const auto &product: products){ //individual product traversing acrross products.
    //     categories.insert(product.category);

    // }

    // //use of key and value pair

    // map<int,int>productStock = {
    //     {101,10},
    //     {102,20},
    //     {103,10},
    //     {104,15},
    //     {105,30},
    //     {106,5}
    // };

    // //multimap to if same customer order multiple time

    // multimap<string,Order>customerOrders;

    // for (const auto &order  : orderHistory)
    // {   
    //     customerOrders.insert({order.customerID,order});
        
    // }

    // //unorder map does not have order. unsorted manner.

    // unordered_map<string,string> customerData = {
    //     {"C001","Alice"},
    //     {"C002","Bob"},
    //     {"C003","Chetan"},
    //     {"C004","Prafull"},  
    //     {"C005","Harry"}, 
    // };//higher efficiency because it is unordered.

    // unordered_set<int> uniqueProductIDs;

    // for(const auto &product : products){
    //     uniqueProductIDs.insert(product.productID);
    // }
    

    // cout<<"Menu : ";
    // int ch;
    // while (1)
    // {
    //     cout<<"1.Add product 2.Add customer 3.Purchase product 4.Exit"<<endl;
    //     cin>>ch;
    //     switch (ch)
    //     {
    //     case 1:
    //         addprduct();
    //         break;
        
    //     default:
    //         break;
    //     }
    // }

    addproduct(products);
    disproducts(products);
    
    return 0;
}




