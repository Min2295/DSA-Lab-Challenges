#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int longPalindrome(string s) {
    unordered_map<char, int> charCount;
    int length = 0;
    bool hasOdd = false;

    for (char c : s) {
        charCount[c]++;
    }

    for (auto& pair : charCount) {
        if (pair.second % 2 == 0) {
            length += pair.second; 
        } else {
            length += pair.second - 1; 
            hasOdd = true; 
        }
    }

    if (hasOdd) {
        length++;
    }

    return length;
}

int main() {
    string s = "abccccdd";
    int result = longPalindrome(s);
    cout << "The length of the longest palindrome that can be built is: " << result << endl;

    return 0;
}