#include<iostream>
using namespace std;

int main(){

 cout<<"<----------------Pattern 1----------------------->"<<endl;
// *****
// *****
// *****
// *****
// *****
   for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cout<<"*";
    }
    cout<<endl;
   }

 cout<<"<----------------Pattern 2----------------------->"<<endl;
// *
// **
// ***
// ****
// *****
   for(int i=0;i<5;i++){
    for(int j=0;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
   }


 cout<<"<----------------Pattern 3----------------------->"<<endl;
// 1
// 12
// 123
// 1234
// 12345
   for(int i=0;i<5;i++){
    for(int j=0;j<=i;j++){
        cout<<j+1;
    }
    cout<<endl;
   }

 cout<<"<----------------Pattern 4----------------------->"<<endl;
// 1
// 22
// 333
// 4444
// 55555
   for(int i=0;i<5;i++){
    for(int j=0;j<=i;j++){
        cout<<i+1;
    }
    cout<<endl;
   }

 cout<<"<----------------Pattern 5----------------------->"<<endl;
// *****
// ****
// ***
// **
// *
   for(int i=0;i<5;i++){
    for(int j=0;j<5-i;j++){
        cout<<"*";
    }
    cout<<endl;
   }

 cout<<"<----------------Pattern 6----------------------->"<<endl;

// 12345
// 1234
// 123
// 12
// 1
   for(int i=0;i<5;i++){
    for(int j=0;j<5-i;j++){
        cout<<j+1;
    }
    cout<<endl;
   }


 cout<<"<----------------Pattern 7----------------------->"<<endl;
//     *
//    ***
//   *****
//  *******
// *********
   for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(j<5-i-1){
            cout<<" ";
        }else{
            cout<<"*";
        }
    }
    for(int k=0;k<5;k++){
        if(k<i){
            cout<<"*";
        }else{
            cout<<" ";
        }
    }
    cout<<endl;

   }


 cout<<"<----------------Pattern 8----------------------->"<<endl;
// *********
//  *******
//   *****
//    ***
//     *
   for(int i=0;i<5;i++){
    for(int j=0;j<4;j++){
        if(j<i){
            cout<<" ";
        }else{
            cout<<"*";
        }
    }
    for(int k=0;k<5;k++){
        if(k<5-i){
            cout<<"*";
        }else{
            cout<<" ";
        }
    }
    cout<<endl;
   }

 cout<<"<----------------Pattern 9----------------------->"<<endl;
//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *
   for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(j<5-i-1){
            cout<<" ";
        }else{
            cout<<"*";
        }
    }
    for(int k=0;k<5;k++){
        if(k<i){
            cout<<"*";
        }else{
            cout<<" ";
        }
    }
    cout<<endl;

   }
   for(int i=0;i<5;i++){
    for(int j=0;j<4;j++){
        if(j<i){
            cout<<" ";
        }else{
            cout<<"*";
        }
    }
    for(int k=0;k<5;k++){
        if(k<5-i){
            cout<<"*";
        }else{
            cout<<" ";
        }
    }
    cout<<endl;
   }

 cout<<"<----------------Pattern 10----------------------->"<<endl;
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
 for(int i=0;i<5;i++){
    for(int j=0;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
 }
 for(int i=0;i<4;i++){
    for(int j=0;j<4-i;j++){
        cout<<"*";
    }
    cout<<endl;
 }




}