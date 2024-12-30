//function me value store kr skte hain

#include<iostream>
using namespace std;

int printhello(){
    
    cout << "hello" <<endl;
   return 3;

}

// pehle hello print hoga phir 3 return hoga, returned 3 jaake value variable me store ho jayega phir hum us value ko use kr skte hain


int main () {

int val = printhello();
cout << "val = " << val << endl;

return 0;
}