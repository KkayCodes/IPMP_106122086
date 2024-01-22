#include<bits/stdc++.h>
using namespace std;

unsigned int turnOffRightMostBit(unsigned int x){
    
    return (x & (x-1));
}

int main(){
    
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    
    unsigned int res = turnOffRightMostBit(x);
    
    cout<<"The result after turning off the rightmost bit is: "<<res;
    return 0;
}
