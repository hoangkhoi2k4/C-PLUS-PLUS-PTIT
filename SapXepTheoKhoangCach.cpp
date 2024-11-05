#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        multimap<int,int>a;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.insert({abs(m-x),x});
        }
        for(auto x: a){
            cout<<x.second<<" ";
        }
        cout<<endl;
    }
}

