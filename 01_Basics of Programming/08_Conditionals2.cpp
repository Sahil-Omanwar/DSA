//Conditionals on marking system
#include<iostream>
using namespace std;

int main(){
    int marks;

    cout<<"Enter the marks"<<endl;
    cin>>marks;

    if(marks<25){
        cout<<"Your grade is F";
    }else if(marks<45){
        cout<<"Your grade is E";
    }else if(marks<49){
        cout<<"Your grade is D";
    }else if(marks<59){
        cout<<"Your grade is C";
    }else if(marks<79){
        cout<<"Your grade is B";
    }else{
        cout<<"Your grade is A";
    }
}