#include<iostream>
using namespace std;
//Increase modularity
//Types of fuction include:1)void 2)return 3)parameterised 4)non paramerterised


//void function
void print_name(){
    cout<<"Sahil";
}

//return function
int age(){
    return 22;
}

//parametersied 
int sum(int a ,int b){
    return a+b;
}

//non parameterised
int weight(){
    return 85;
}
int main(){
   print_name();
   cout<<endl;
   int ans=age();
   cout<<"Your age is"<<ans<<endl;

   int ans1=sum(10,20);
   cout<<"Sum of two numbers is "<<ans1<<endl;

   int weigh=weight();
   cout<<"Your weight is "<<weigh;
}