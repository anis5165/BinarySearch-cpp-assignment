/* You have n coins and you want to build a staircase with these coins. The staircase consists of k
rows where the ith row has exactly i coins. The last row of the staircase may be incomplete.
Given the integer n, return the number of complete rows of the staircase you will build. */

#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int lo = 0;
    int hi = n;
    int ans = -1;
    while(lo<=hi){
        int k = lo + (hi-lo)/2;
        int m = k*(k+1)/2;
        if(m==n){
            cout<<k;
            ans = 1;
            break;
        }
        else if(m>n) hi = k-1;
        else lo = k+1;
    }
    if(ans==-1) cout<<hi;
}