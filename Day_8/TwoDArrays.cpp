#include<iostream>

using namespace std;

int main(){
    
    int chaiSales[3][7] ={
        {85,96,59,75,86,25,69}, //shop 1 sales for 7 days
        {95,86,97,61,58,67,28}, //shop 2 sales for 7 days
        {95,67,38,26,75,64,85}  //shop 3 sales for 7 days
    };
    
    for (int i = 0; i < 3; i++)
    {
        cout<<"I am at "<<i+1<<" Shop ---"<<endl;
        for (int j = 0; j < 7; j++)
        {
            cout<<chaiSales[i][j]<<" Cups"<<endl;
        }
        cout<<endl;
        
    }
    

    return 0;
   
}