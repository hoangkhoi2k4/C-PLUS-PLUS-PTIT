#include <iostream>
#include <string>

std::string kiTu(const std::string& s) {
    std::string kiTu = ""; // khoi tao mot xau rong de luu tru kq ma hoa

    int count = 1;
    for (int i = 0; i < s.length(); i++) {
        // Kiem tra ki tu hien tai va ki tu tiep theo neu giong nhau tang count len 1
        if (s[i] == s[i + 1]) {
            count++;
        } else {
            // Khi gap ki tu khac, them ki tu vua kiem tra vao encodedString
            kiTu += s[i] + std::to_string(count);
            count = 1;
        }
    }

    return kiTu;
}

int main() {
    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {
        std::string s;
        std::cin >> s;
        std::cout << kiTu(s) << std::endl;
    }

    return 0;
}


