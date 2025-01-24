//function me value store kr skte hain

#include<iostream>
#include<cmath>
using namespace std;

/*
int add(int num1 , int num2){
   int sum = num1 + num2;
   return sum;
}

int add(int num1 , int num2, int num3){
   int sum = num1 + num2 + num3;
   return sum;
}


int main(){

// ab hum jaise jaise cout ki vlaues change usi hisab se functions call honge aur output aayega

int a = 5
int b = 7;

 cout << add (a , b , 2) <<endl;
 return 0;

}
*/

/*
function prototype :--
if we want to define a function after the function call, we need to use the function prototype
*/

// pow function:--

/*
int main(){

   cout << pow(2,3) <<endl;
   cout << sqrt(24) <<endl;
   
   int ans = sqrt(24);
   cout << ans <<endl;

   double doubleans = sqrt(24);
   cout << doubleans <<endl;

   }
   */

//scope of variables :--


/*
int main(){
     int apples = 5;
     cout << apples;
}



//the value of variable apple is only accessible in the curly brackets of int main function, not outside of it 
*/

/*



for (int i=0; i<=n; i++){
 cout << i; -->i will be printed
}
cout << i;  --> error
  


* two variables in same scope with same name is not allowed.

*two variables with same name but in two different scopes are alowed



int main(){

int p = 5;
while(){
float p =5.7;
cout << p;  -->5.7
}

cout <<p; -->5
}



*local variables are the variables defined in one block

*global variables are the variables which  exist such that they can be used in multiple function at ht same time

*if there exist a local variable with the same name as of global variable inside a function then 

local variable >> global variable

*/

// int p = 5;
// int main(){
//    int p = 7;
//    cout << p;   // --> 7

//    //scope resolution operator : to access global variable in the local variable scope


// }



// formal parametersand actual parameters
  

// void function name (int param1 , int param2){

//            ||code
// }

// int main(){
//    int a = 1; b = 2;
//    function name (a,b)  ---> actual parameters
// }

 

//  pass by value ---> parameter vlues are copied to another variables


// void changevalue (int z){
//    z = 100;
// }

// int main(){
//    int a = 5;
//    changevalue(a);
//    cout << a;

// }



// pass by reference  ---> parameter values are actually passed

// int main (){
//    int p = 5;
//    int &q = p;

//    q++;
//    cout << p <<endl;  

//     cout << &p <<endl;
//     cout << &q <<endl;
   
   // }


   