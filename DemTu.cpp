#include <iostream>
#include <string>
#include <sstream>

int demtu(const std::string& s) {
    std::stringstream ss(s);
    std::string word;
    int count = 0;

    while (ss >> word) {
        count++;
    }

    return count;
}

int main() {
    int t;
    std::cin >> t;
    std::cin.ignore();

    for (int i = 0; i < t; i++) {
        std::string S;
        std::getline(std::cin, S);

        int cnt = demtu(S);
        std::cout << cnt << std::endl;
    }

    return 0;
}


