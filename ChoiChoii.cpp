#include <io.h>
#include <fcntl.h>
#include <string>
#include <iostream>
using namespace std;

int main() {
    _setmode(_fileno(stdout), _O_U16TEXT);
    wstring Str = L"Ti?ng Vi?t";
    wcout << Str << endl;
}
