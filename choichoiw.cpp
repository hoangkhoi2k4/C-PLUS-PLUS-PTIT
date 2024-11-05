#include <iostream>
#include <cstring>
#include <stack>
#include <vector> 

using namespace std;

int n, a[101][101];
bool used[101];
vector<int> adj[101];

void dfs(int u){
    stack<int> st;
    st.push(u);
    cout << u << " ";
    used[u] = true;
    while(!st.empty()){
        int s = st.top(); st.pop();
        for(int v : adj[s]){
            if(!used[v]){
                st.push(s);
                st.push(v);
                used[v] = true;
                cout << v << " ";
                break;
            }
        }
    }
}

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) {
            cin >> a[i][j]; 
            if(a[i][j]) adj[i].push_back(j);
        }
    }
    memset(used, false, sizeof(used));
    dfs(1);
    return 0;
}
