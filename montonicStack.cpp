#include<bits/stdc++.h>
using namespace std;

// Monotonic stack implementation
// here both function try to find index of next strictly smaller element
vector<int> left(vector<int>&nums){
    stack<int> s;
    int n=nums.size();
    vector<int> ans(n,-1);
    for(int i=0;i<n;i++){
        while(s.size()>0&&nums[s.top()]>=nums[i]) s.pop();
        if(s.size()>0) ans[i]=s.top();
        s.push(i);
    }
    return ans;
}
vector<int> right(vector<int>&nums){
    stack<int> s;
    int n=nums.size();
    vector<int> ans(n,n);
    for(int i=n-1;i>=0;i--){
        while(s.size()>0&&nums[s.top()]>=nums[i]) s.pop();
        if(s.size()>0) ans[i]=s.top();
        s.push(i);
    }
    return ans;
}
int main(){
    vector<int> nums={1,3,4,3,1};
    vector<int> lt=left(nums);
    vector<int> rt=right(nums);
    // use both vectors according to conditions of question
}