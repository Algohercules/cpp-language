#include<iostream>
using namespace std;

//finding maximum and minimum element of an array

int getMin(int array1[], int n){
    
    int min = INT16_MAX;

    for(int i=0; i<=n; i++){
        if(array1[i] > min){
            min = array1[i];
        }
    }

    return min;
}


int getMax(int array1[], int n){
    
    int max = INT16_MIN;

    for(int i=0; i<=n; i++){
        if(array1[i] > max){
            max = array1[i];
        }
    }

    return max;
}






int main() {

    int size;
    cin >> size;

    int array1[100];

     //taking input in an array

    for(int i=0; i<=0; i++){
        cin >> array1[i];
    }


    cout<<"maximum value is"  <<getMax(array1, size)  <<endl;
    cout<<"minimum value is"  <<getMin(array1, size)  <<endl;


    return 0;

}
