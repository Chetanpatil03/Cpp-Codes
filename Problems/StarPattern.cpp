#include <bits/stdc++.h> 
using namespace std;

void printPattern(int n) {
	// Write your code here.
	// string spaces = " ";

	for(int i = 1;i<=n;i++){

		for(int j = 0; j < n-i; j++){
			cout<<" ";
		}
		for(int k=1 ; k <= 2 * i - 1;k++){
			cout<<"*";
		}

		cout<<endl;
	}
}

int main(){
    int n=4;
    printPattern(n);
}