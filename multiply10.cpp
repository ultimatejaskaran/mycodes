#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a Number upto 10 :"<<endl;
    cin >> n;

    for(int i=1; i<=10; i++){
        cout << n << " X " << i <<"  = "<< n*i << endl;
        
    } 
    return 0; 
}