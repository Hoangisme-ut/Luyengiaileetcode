#include <iostream>
#include <string>
using namespace std;

string longestCommonPrefix(string strs[], int n) {
    // nếu mảng rỗng
    if (n == 0) return "";

    // lấy chuỗi đầu tiên làm prefix ban đầu
    string prefix = strs[0];

    // duyệt các chuỗi còn lại
    for (int i = 1; i < n; i++) {

        // lặp cho đến khi strs[i] bắt đầu bằng prefix
        while (true) {
            // kiểm tra có bắt đầu bằng prefix không
            if (strs[i].find(prefix) == 0) {
                break; // đúng thì thoát
            }

            // nếu không thì cắt bớt 1 ký tự cuối
            prefix = prefix.substr(0, prefix.length() - 1);

            // nếu prefix rỗng thì trả về luôn
            if (prefix == "") {
                return "";
            }
        }
    }

    return prefix;
}

class Solution {
public:
    string longestCommonPrefix(string strs[], int n) {
        if (n == 0) return "";

        // duyệt từng vị trí ký tự của chuỗi đầu tiên
        for (int j = 0; j < strs[0].length(); j++) {
            char c = strs[0][j];

            // so với tất cả các chuỗi còn lại
            for (int i = 1; i < n; i++) {
                // nếu hết chuỗi hoặc khác ký tự
                if (strs[i].length() == j || strs[i][j] != c) {
                    return strs[0].substr(0, j);
                }
            }
        }

        return strs[0];
    }
};


int main() {
    string strs[] = {"flower", "flow", "flight"};
    int n = 3;

    cout << longestCommonPrefix(strs, n);

    return 0;
}