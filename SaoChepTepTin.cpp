#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inputFile("PTIT.in"); 
    std::ofstream outputFile("PTIT.out"); 

        std::string line;
        while (std::getline(inputFile, line)) {
            outputFile << line << std::endl; 
        }


    inputFile.close(); 
    outputFile.close(); 

    return 0;
}

