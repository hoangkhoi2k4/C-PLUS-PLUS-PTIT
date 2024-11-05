#include<bits/stdc++.h>
using namespace std;


string chuanhoa(string s){
    if(s[0]<='z'&&s[0]>='a'){ // Neu ky tu dau tien la thuong
        s[0]-=32;
    }
    for(int i=1;i<s.size();i++){
        if(s[i]>='A'&&s[i]<='Z'){ // Neu ky tu la hoa
            s[i]+=32;
        }
    }
    return s;
}


string viethoa(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]>='a'&&s[i]<='z') // Neu ky tu la thuong
             s[i]-=32; 
    }
    return s;
}

int main(){
    string s;
    getline(cin,s);
    string s1;
    string s2;
    stringstream ss(s);
    stringstream the(s);
    while(ss >> s1){}
    while(the>>s2){
        int check=0; // Khai bao va khoi tao bien check bang 0
        if(s2!=s1){ // s2 khac ten
            cout<<" "<<chuanhoa(s2); // In ra mot khoang trang va xau da chuan hoa cua tu hien tai
            check=1;
        }
    }
    cout<<", "<<viethoa(s1);

    return 0;
}

