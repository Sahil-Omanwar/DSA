//Conditionals

#include<iostream>
using namespace std;
//Programme takes in age and print if you are adult or not 
int main(){
    int age;
    cout<<"What is your age"<<endl;
    cin>>age ;

    if(age<0 || age>120){
        cout<<"Put your age right "<<endl;
    }else if(age<18){
        cout<<"You are not an adult"<<endl;
        
    }else{
        cout<<"You are adult "<<endl;
    }
}