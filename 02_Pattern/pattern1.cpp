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

  cout<<"<----------------Pattern 11----------------------->"<<endl;
// 1
// 01
// 101
// 0101
// 10101 
 for(int i=0;i<5;i++){
   if(i%2==0){
      for(int j=0;j<=i;j++){
         if(j%2==0){
            cout<<1;
         }else{
            cout<<0;
         }
      }
   }else{
      for(int j=0;j<=i;j++){
         if(j%2==0){
            cout<<0;
         }else{
            cout<<1;
         }
      }
   }
   cout<<endl;
 }

  cout<<"<----------------Pattern 12----------------------->"<<endl;

// 1      1
// 12    21
// 123  321
// 12344321

for(int i=0;i<4;i++){
 for(int j=0;j<4;j++){
    if(j<=i){
        cout<<1+j;
    }else{
        cout<<" ";
    }
 }
 for(int k=0;k<4;k++){
    if(k<4-i-1){
        cout<<" ";
    }else{
        cout<<4-k;
    }
 }
 cout<<endl;
}
  cout<<"<----------------Pattern 13----------------------->"<<endl;

int sum=1;
for(int i=0;i<5;i++){
    for(int j=0;j<=i;j++){
        cout<<sum;
        sum++;
    }
    cout<<endl;
}

  cout<<"<----------------Pattern 14----------------------->"<<endl;
// A
// AB
// ABC
// ABCD
// ABCDE
for(int i=0;i<5;i++){
    for(int j=0;j<=i;j++){
        cout<<char(65+j);
    }
    cout<<endl;
}

  cout<<"<----------------Pattern 15----------------------->"<<endl;
// ABCDE
// ABCD
// ABC
// AB
// A
for(int i=0;i<5;i++){
    for(int j=0;j<5-i;j++){
        cout<<char(65+j);
    }
    cout<<endl;
}

  cout<<"<----------------Pattern 16----------------------->"<<endl;
// A
// BB
// CCC
// DDDD
// EEEEE
  for(int i=0;i<5;i++){
    for(int j=0;j<=i;j++){
        cout<<char(65+i);
    }
    cout<<endl;
  }
  cout<<"<----------------Pattern 17----------------------->"<<endl;
//    A
//   ABA
//  ABCBA
// ABCDCBA
  for(int i=0;i<4;i++){
     int total=0;
    for(int j=0;j<4;j++){
        if(j<4-i-1){
            cout<<" ";
        }else{
           cout<<char(65+total);
           total++;
        }
    }
    int total1=64;
    for(int k=0;k<i;k++){
        
        cout<<char(total1+i);
        total1--;
    }
    cout<<endl;
  }
    cout<<"<----------------Pattern 18----------------------->"<<endl;

  for(int i=0;i<5;i++){
    int total=69-i;
    for(int j=0;j<=i;j++){
        cout<<char(total);
        total++;

    }
    cout<<endl;
  }

    cout<<"<----------------Pattern 19----------------------->"<<endl;
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********    
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(j<5-i){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        for(int k=0;k<5;k++){
            if(k<i){
                cout<<" ";
            }else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(j<=i){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        for(int k=0;k<5;k++){
            if(k<5-i-1){
                cout<<" ";
            }else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

    cout<<"<----------------Pattern 20----------------------->"<<endl;
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *  
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(j<=i){
            cout<<"*";
        }else{
            cout<<" ";
        }
    }
    for(int k=0;k<5;k++){
        if(k<5-i-1){
            cout<<" ";
        }else{
            cout<<"*";
        }
    }
    cout<<endl;
  }
  for(int i=0;i<4;i++){
     for(int j=0;j<5;j++){
        if(j<5-i-1){
            cout<<"*";
        }else{
            cout<<" ";
        }
     }
     for(int k=0;k<5;k++){
        if(k<=i){
            cout<<" ";
        }else{
            cout<<"*";
        }
     }
     cout<<endl;
  }

      cout<<"<----------------Pattern 21----------------------->"<<endl;
// ****
// *  *
// *  *
// ****
 for(int i=0;i<4;i++){
    if(i==0 || i==3){
      for(int j=0;j<4;j++){
        cout<<"*";
      }
    }else{
        for(int j=0;j<4;j++){
        if(j==0 || j==3){
            cout<<"*";
        }else{
            cout<<" ";
        }
        }
    }
    cout<<endl;
 }
       cout<<"<----------------Pattern 22----------------------->"<<endl;
// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444  
   int n=4;
   for(int i=0;i<2*n-1;i++){
    for(int j=0;j<2*n-1;j++){
        int top=i;
        int bottom=2*n-2-i;
        int left=j;
        int right=2*n-2-j;

        cout<<(n-min(min(top,bottom),min(left,right)));
    }
    cout<<endl;
   }

}