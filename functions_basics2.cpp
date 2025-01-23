//function me value store kr skte hain

#include<iostream>
using namespace std;


int add(int num1 , int num2){
   int sum = num1 + num2;
   return sum;
}

int add(int num1 , int num2, int num3){
   int sum = num1 + num2 + num3;
   return sum;
}


int main(){

// ab hum jaise jaise cout ki vlaues change usi hisab se functions call honge aur ouput aayega

int a = 5;
int b = 7;

 cout << add (a , b , 2) <<endl;
 return 0;

}