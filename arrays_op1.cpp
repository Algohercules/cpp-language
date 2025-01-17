#include <iostream>
using namespace std;

void printarray( ) {

}

int main() {

    //declare
    int number[15];

    //accessing an arary
    cout << "value of 14th index is" << number[14] << endl;

     //initialising an array
     int second[3] = {5 , 7 , 11};

     //accessing
    cout << "value of 2nd index is" << second[2] << endl;

     int third[15] = {2,7};

     int n = 15;

     cout << "printing the array" <<endl;

      for(int i = 0; i <= n; i++){
      cout << third[i] <<" ";
     }


   int fourth[10] = {0};
   cout<<"printing the array"<<endl;

    n = 10;

   //priting the array
   for(int i=0; i<=n; i++)
   cout<< fourth[i] <<" ";
   
}