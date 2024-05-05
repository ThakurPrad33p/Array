#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


bool divide(vector<int>v){
    int totalSum=0, prefix =0;
    for(int i =0; i<v.size();i++){
        totalSum+=v[i];
    }

    for(int i=0;i<v.size()-1;i++){
        prefix+= v[i];
        if(totalSum-prefix== prefix)
        return 1;
    }
    return 0;
}


int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    cout<<divide(v);
}