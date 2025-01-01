#include<iostream>
using namespace std;

// sum of two numbers


int sum(int a, int b){     //parameters
    cin>>a;
    cin>>b;
    int s = a + b;
    return s;

}

int main() {
    
cout << sum(10 , 5)  <<endl;   //arguments


return 0;

}