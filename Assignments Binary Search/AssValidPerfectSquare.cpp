//Given a number ‘n’. Predict whether ‘n’ is a valid perfect square or not.
#include<iostream>
using namespace std;
int main(){
    int n = 36;
    int  lo = 0;
    int hi = n;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        int m = mid;
        int y = n;
        if(m*m==y){
            flag=true;
            cout<<"Yes";
            break;
        }
        else if(m*m>y) hi = mid-1;
        else lo = mid+1;
    }
    if(flag==false) cout<<"No";
}