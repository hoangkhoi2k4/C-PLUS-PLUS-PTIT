#include<bits/stdc++.h> 
using namespace std; 

// Ham chuyen tat ca cac ky tu hoa trong xau s thanh ky tu thuong
string chuyen(string s){
    for(int i=0;i<s.size();i++){ // Lap qua tung ky tu trong xau s
        if(s[i]>='A'&&s[i]<='Z') // Neu ky tu la hoa
            s[i]+=32; // Chuyen thanh thuong bang cach cong them 32
    }
    return s; // Tra ve xau da chuyen
}

int main(){
    string s; // Khai bao xau s
    getline(cin,s); // Nhap xau s tu ban phim
    chuyen(s); // Goi ham chuyen cho xau s
    stringstream ss(chuyen(s)); // Tao mot doi tuong stringstream ss tu xau da chuyen
    string s1; // Khai bao xau s1
    stringstream the(chuyen(s)); // Tao mot doi tuong stringstream the tu xau da chuyen
    while(ss>>s1){} // Doc tung tu trong ss vao s1 cho den khi het ss
    cout<<s1; // In ra tu cuoi cung cua ss, dong thoi la tu cuoi cung cua s
    string s2; // Khai bao xau s2
    while(the>>s2){ // Doc tung tu trong the vao s2 cho den khi het the
        if(s2!=s1){ // Neu tu hien tai khac voi tu cuoi cung cua s
            cout<<s2[0]; // In ra ky tu dau tien cua tu hien tai
        }
    }
    cout<<"@ptit.edu.vn"; 
    return 0;
}


