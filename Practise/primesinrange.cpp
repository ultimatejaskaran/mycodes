#include<iostream>
using namespace std;

int main(){

    int a,b;
    cin >> a >> b;

    if(a==1){  
        a++;
    }
    else{
        a=a;
    }

    for(int num=a; num<b; num++){
        int k;
        for(k=2; k<num; k++){
                if(num%k==0){
                    break;
                }
                else{
                    continue;
                }
        }
        if(num==k){
        cout << k << endl; 
        }
    }
    return 0;
    }