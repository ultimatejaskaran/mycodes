#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i=2;
    while(i<n){
        if(n%i==0){
            cout << "This Number is not a Prime Number";
            break;    
        }
    i++;    
    }
    if(i==n){ 
    cout << "This is a Prime Number" << endl;
    }
    return 0;
}
