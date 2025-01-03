#include<iostream>
using namespace std ;

//Take day number and print corresponding day 

int main(){
    cout<<"Enter the day number"<<endl;
    int n;
    cin>>n;

    switch(n){
        case 1:
          cout<<"Monday"<<endl;
          break;
        case 2:
          cout<<"Tuesday"<<endl;
          break;
        case 3:
          cout<<"Wednesday"<<endl;
          break;
        case 4:
          cout<<"Thursday"<<endl;
          break;
        case 5:
          cout<<"Friday"<<endl;
          break;
        case 6:
          cout<<"Saturday"<<endl;
          break;
        case 7:
          cout<<"Sunday"<<endl;
          break;
        default:
          cout<<"Enter correct day number";
          break;
    }
}