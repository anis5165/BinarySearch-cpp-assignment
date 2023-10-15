#include<iostream>
using namespace std;
int main(){
    int arr[5][6] = {{0,0,0,0,1,1},{0,0,1,1,1,1},{0,0,0,1,1,1},{1,1,1,1,1,1},{0,0,0,1,1,1}};
    int m = 5;
    int n = 6;
    int row  = -1;
    int maxOnes = -1;
    int x = 1;
    for(int i=0;i<m;i++){
        int count = 0;
        int lo = 0;
        int hi = n-1;
        int ans = -1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(arr[i][mid]==x){
                if(mid==0){
                    ans = mid;
                    break;
                }
                else if(arr[i][mid-1]!=x){
                        ans = mid;
                        break;
                }
                else hi = mid-1;
            }
            else if(arr[i][mid]>x) hi = mid-1;
            else lo = mid+1;
        }
        if(ans!=-1) count = n-ans;
        cout<<count<<endl;
        if(maxOnes<count){
            maxOnes = count;
            row = i;
        }
    }
    cout<<row<<" "<<maxOnes;
}