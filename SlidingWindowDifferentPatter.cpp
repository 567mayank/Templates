#include<bits/stdc++.h>
using namespace std;
// Sliding window different pattern
// with no particular size
// Here the window is expanded and shrunk based on the condition 
// of having exactly k any condition in the subarray.
int fun(vector<int>&nums,int k){
    if(k<0) return 0;
    int i=0;
    int ans=0;
    int c=0;
    for(int j=0;j<nums.size();j++){
        if(){   //condition
            c++;
        } 
        while(c>k){
            // reduce c according to condition
            i++;
        }
        ans+=(j-i+1);
    }
    return ans;
}
int slidingWindow(vector<int>&nums,int k){
    // exact(k)=atmost(k)-atmost(k-1)
    return fun(nums,k)-fun(nums,k-1);
}
int main(){
    vector<int> nums={1,2,1,2,3};
    int k=2;
    slidingWindow(nums,k);
}


// LC question -> 
//     1248
//     922
//     930