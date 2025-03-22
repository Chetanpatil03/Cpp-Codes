#include<iostream>

using namespace std;

int totalChaiServered(int chai[],int size){
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total = total + chai[i];
    }

    return total;
    
}

int main(){

    int chaiServered [7] ={85,90,88,92,89,57,95};

    int totalCups = totalChaiServered(chaiServered,7);
    cout<<"Total Cups servered : "<<totalCups<<endl;


    return 0;
   
}