#include <iostream>
using namespace std;

//arrays with functions

void printarray(int arr[], int size ) {
    
    cout << "printing the array" << endl;
    
    for(int i = 0; i <= size; i++){
        cout << arr[i] <<" ";
    }
    cout << " print done " << endl;
}

int main() {

    //declare
    int number[15];

    //accessing an arary
    cout << "value of 14th index is" << number[14] << endl;

     //initialising an array
     int second[3] = {5 , 7 , 11};

     //acessing
    cout << "value of 2nd index is" << second[2] << endl;

     int third[15] = {2,7};
     int n = 15;

    printarray ( third , 15);

    //initialising all locations with 0

    int fourth[10] = {0};

    n = 10;

    printarray( fourth, 10);

    //finding size of array

    int fourthsize = sizeof(fourth)/sizeof(int);
    cout<<"size of fourth is " << fourthsize <<endl;



}

