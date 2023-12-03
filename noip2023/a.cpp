#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 判断第i个字符串是否能达到最小字典序
bool canBeMinLexicographical(const string& s, const vector<string>& sortedWords) {
    string temp = s;
    sort(temp.begin(), temp.end());

    return temp == sortedWords[0];
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> words(n);
    vector<string> sortedWords(n);

    // 读取单词并进行排序
    for (int i = 0; i < n; ++i) {
        cin >> words[i];
        sortedWords[i] = words[i];
        sort(sortedWords[i].begin(), sortedWords[i].end());
    }

    // 对每个单词进行判断
    for (int i = 0; i < n; ++i) {
        // 将第i个字符串以最小字典序排序
        string currentWord = words[i];
        sort(currentWord.begin(), currentWord.end());

        // 将其他字符串以最大字典序排序
        vector<string> tempSortedWords = sortedWords;
        sort(tempSortedWords.begin(), tempSortedWords.end(), greater<string>());

        // 判断第i个字符串是否能达到最小字典序
        if (canBeMinLexicographical(currentWord, tempSortedWords)) {
            cout << "0";
        } else {
            cout << "1";
        }
    }

    return 0;
}