//Given a sorted binary array, efficiently count the total number of 1’s in it.
#include<iostream>
using namespace std;
int main(){
    int arr[] = {0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    int n = 26;
    int x = 1;
    int lo = 0;
    int hi = n-1;
    int ans = -1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==x){
            if(arr[mid-1]!=x){
                ans = mid;
                break;
            }
            else hi = mid-1;
        }
        else if(arr[mid]>x) hi = mid-1;
        else lo = mid+1;
    }
    if(ans==-1) cout<<0;
    else cout<<n-ans;
}