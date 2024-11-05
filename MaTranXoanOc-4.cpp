#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a[n * n];
    
    for (int i = 0; i < n * n; i++)
        cin >> a[i];
    
    sort(a, a + n * n);
    
    int top = 0, bot = n - 1, left = 0, right = n - 1;
    
    int mt[n][n], x = 0;
    
    while (top <= bot && left <= right) {
        for (int i = left; i <= right; i++)
            mt[top][i] = a[x++];
        
        top++;
        
        for (int i = top; i <= bot; i++)
            mt[i][right] = a[x++];
        
        right--;
        
        if (top <= bot) {
            for (int i = right; i >= left; i--)
                mt[bot][i] = a[x++];
            
            bot--;
        }
        
        if (left <= right) {
            for (int i = bot; i >= top; i--)
                mt[i][left] = a[x++];
            
            left++;
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << mt[i][j] << " ";
        
        cout << endl;
    }
    
    return 0;
}


