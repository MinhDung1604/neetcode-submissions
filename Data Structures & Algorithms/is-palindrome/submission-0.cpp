class Solution {
public:
    bool isPalindrome(string s) {
        int front = 0;
        int back = s.size() - 1;
        while (front < back) {
            cout << s[front] << s[back];
            while (front < back && !isAlphaNum(s[front])) front ++;
            while (front < back && !isAlphaNum(s[back])) back--;
            if ((char) tolower(s[front]) != (char) tolower(s[back])) {
                return false;
            }


            front++;
            back--;
        }
        return true;
    }

    bool isAlphaNum(char c) {
        return (c >= 'A' && c <= 'Z' ||
                c >= 'a' && c <= 'z' ||
                c >= '0' && c <= '9');
    }
};
