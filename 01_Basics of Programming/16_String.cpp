//Basic of string 

#include<iostream>
using namespace std;

int main(){
    string s="Striver";
    int len =s.size();
    s[len-1]='S';
    cout<<s;
}