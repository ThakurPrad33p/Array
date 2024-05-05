#include<iostream>
#include<vector>
using namespace std;

int maxDiff(vector<int>arr){
    int prefix = 0, ans = INT_MIN;
    int n = arr.size();
    int maxSuffix = arr[n-1];
    for(int i = n-1;i>=0;i--){
        maxSuffix = max(maxSuffix,arr[i]);
    }
    
    for(int j= 0;j<n-1; j++){
        ans = max(ans,abs((arr[j]-arr[j+1])));
    }
    return ans;
}

int main(){
    cout<<"Enter size: ";
    int n;
    cin>>n;
    vector<int>v(n);
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    cout<<"Maximum Difference is : "<<maxDiff(v);
}