#include<iostream>

using namespace std; 

int factorial(int n){
    // (return n*factorial);
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}
// factorial(4)=4*factorial(3);
// factorial(4)=4*3*factorial(2);
// factorial(4)=4*3*2*factorial(1);
// factorial(4)=4*3*2*1;
// factorial(4)=24;
int main(){
    // Factorial of a number:
    // 6!=6*5*4*3*2!=720
    // 0!=1 by defination
    // 1!=1 by defination
    // n!=n*(n-1)!
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    cout<<"The Factorial of"<<a<<"is"<<factorial(a)<<endl;
 return 0;
  }