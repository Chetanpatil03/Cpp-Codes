

#include <iostream>
#include <vector>
using namespace std;

void miniMaxSum(vector<int> arr) {
    
    long int total = 0;
    int min = arr[0], max = arr[0];
    
    for(int i=0; i<arr.size(); i++) {
        total += arr.at(i);
        
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    

    
    cout<<total - max<<" "<<total - min;

}


int main() {
    // Your code goes here
    vector<int> arr;
    arr.push_back(5);
    arr.push_back(4);
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(1);

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout<<arr.at(i);
    // }
    
    miniMaxSum(arr);

    return 0;
}