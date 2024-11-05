#include <iostream>
#include <string>

std::string multiply(std::string str1, std::string str2) {
    int len1 = str1.size();
    int len2 = str2.size();

    std::string result(len1 + len2, '0');

    for (int i = len1 - 1; i >= 0; i--) {
        int carry = 0;
        for (int j = len2 - 1; j >= 0; j--) {
            int sum = (str1[i] - '0') * (str2[j] - '0') + (result[i + j + 1] - '0') + carry;
            carry = sum / 10;
            result[i + j + 1] = (sum % 10) + '0';
        }
        result[i] += carry;
    }

    size_t startpos = result.find_first_not_of('0');
    if (std::string::npos != startpos) {
        return result.substr(startpos);
    }

    return "0";
}

std::string lastTwoDigits(std::string a, std::string b, std::string c, std::string d) {
    std::string x = multiply(a, b);
    x = multiply(x, c);
    x = multiply(x, d);

    size_t len = x.length();
    if (len >= 2) {
        return x.substr(len - 2);
    }
    return x;
}

int main() {
    std::string a, b, c, d;
    std::cin >> a >> b >> c >> d;

    std::string result = lastTwoDigits(a, b, c, d);
    std::cout << result ;

    return 0;
}
