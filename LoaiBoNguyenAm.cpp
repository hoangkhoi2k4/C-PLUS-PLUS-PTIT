#include <iostream>
#include <string>
using namespace std;

// Ham kiem tra xem mot ki tu co phai nguyen am khong
bool check(char c) {
  c = tolower(c); // Chuyen ve dang viet thuong
  return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}

//Ham loai bo cac nguyen am trong xau s va tra ve kq
string remove(string S) {
  string result = ""; //Xau kq ban dau rong
  for (int i = 0; i < S.length(); i++) { //Duyet qua tung ki tu trong s
    if (!check(S[i])) { // neu ki tu khong phai la nguyen am
      result = "." +result ; // Them dau cham vao
      result += tolower(S[i]); // Them ki tu viet thuong vao
    }
  }
  return result; // Tra ve xau kq
}

int main() {
  string S; 
  cin >> S; 
  cout << remove(S) << endl; 
  return 0;
}


