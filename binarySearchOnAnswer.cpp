#include<bits/stdc++.h>
using namespace std;
bool check(){

}
int binarySearch(){
    int s=0;
    int e=INT_MAX;
    while(s<e){
        int mid=s+(e-s)/2;
        if(check(condition)){
            e=mid;
        }
        else{
            s=mid+1
        }
    }
    return e;
} 
int main(){
    binarySearch();
}