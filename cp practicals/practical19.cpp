#include <iostream>
#include <string>
using namespace std;
int main() {
    string line, old_substring, new_substring;
    cout << "Enter a line of text: ";
    getline(std::cin, line);
    cout << "Enter the substring to be replaced: ";
    getline(std::cin, old_substring);
    cout << "Enter the new substring: ";
    getline(std::cin, new_substring);
    size_t pos = 0;
    while ((pos = line.find(old_substring, pos)) != string::npos) {
        line.replace(pos, old_substring.length(), new_substring);
        pos += new_substring.length();
    }
    
    cout << "The new line is: " << line << endl;
    
    return 0;
}
