/*Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n]
inclusive in sorted order.
There is only one repeated number in nums, return this repeated number.*/
#include<iostream>
using namespace std;
int main(){
    int v[] = {1,2,3,3,4};
    int n = 5;
    int lo = 0;
    int hi = n-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(v[mid]==mid+1) lo = mid+1;
        else if(v[mid]==v[mid-1]){
            cout<<v[mid];
            break;
        }
        else hi = mid-1;
    }
}
