#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    char a;
    cout << "Enter Numbers:" << endl;
    cin >> n1 >> n2;
    cout << "Enter Operator" << endl;
    cin >> a;
    switch(a){
        case '+':
            cout << n1+n2 << endl;
        break;
        case '-':
            cout << n1-n2 << endl;
        break;
        case '*':
            cout << n1*n2 << endl;
        break;
        case '/':
            cout << n1/n2 << endl;
        break;
    }
}