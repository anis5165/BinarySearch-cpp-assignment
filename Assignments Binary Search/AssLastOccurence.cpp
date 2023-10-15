/*Given a sorted array of n elements and a target ‘x’. Find the last occurrence of ‘x’ in the array. If ‘x’
does not exist return -1. */
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {1,2,2,3,3,3,4,4,4,4,5,5,9};
    int n = v.size();
    int x = 3;
    
    //binary searching
    int lo = 0;
    int hi = n-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo +(hi-lo)/2;
        if(v[mid]=n-1){
            flag = true;
            cout<<mid;
            break;
        }
        else if(v[mid]==x){
            if(v[mid+1]!=x){
                flag = true;
                cout<<mid;
                break;
            }
            else lo = mid+1;
        }
        else if(v[mid]>x) hi = mid-1;
        else lo = mid+1;
    }
    if(flag==false) cout<<-1;
}