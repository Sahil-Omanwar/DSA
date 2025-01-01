//Basics of arrays
//if entire data of similar type
//they are based on 0 based indexing
//they are linearly stored
//0th is stored at any where in memory but after 0th every other are stored linearly




#include<iostream>
using namespace std;

int main(){

    int arr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    
    for(int i=0;i<5;i++){
        cout<<"Sahil"<<arr[i]<<endl;
    }

}