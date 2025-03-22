#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int firstUniqChar(string s) {
    unordered_map<char, int> charCount;

    for (char c : s) {
        charCount[c]++;
    }


    for (int i = 0; i < s.size(); i++) {
        if (charCount[s[i]] == 1) {
            return i;
        }
    }


    return -1;
}


int main() {
    string s = "leetcode";
    int index = firstUniqChar(s);
    cout << "The index of the first non-repeating character is: " << index << endl;

    return 0;
}