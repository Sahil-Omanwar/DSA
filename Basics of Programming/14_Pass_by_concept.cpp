//In this we will learn about pass by value and pass by referance concept 
//Arrays are always passed by ref
#include<iostream>
using namespace std;

//Pass by val
void DoSome(int num){
    num+=5;
    
}

//Pass by ref
void DoSome1(int &num){
    num+=5;
}

int main(){
    int num=10;
    DoSome(num);
    cout<<num<<endl;
    DoSome1(num);
    cout<<num<<endl;
}