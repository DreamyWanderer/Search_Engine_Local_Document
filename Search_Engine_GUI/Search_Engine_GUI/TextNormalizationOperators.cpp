#include "textNormalizationOperators.h"
using namespace std;

extern int nStopwords;
extern wstring discards[1942];
extern int convert[1 << 16];
extern wstring tokens;

const float eps = 0.005;

int countWords(wstring* &cur, int n){
    if (n == 0) return 0;
    int cnt = 1, ans = 0;
    for (int i = 1; i < n; i++){
        if (cur[i] == cur[i - 1]) cnt++;
        else{
            if (1.00 * cnt / n >= eps && cur[i - 1].length() != 0) ans++;
            cnt = 1;
        }
    }
    if (1.00 * cnt / n >= eps && cur[n - 1].length() != 0) ans++;
    return ans;
}

int countInitialWords(wstring &s){
    int ans = 0;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == L' ' || s[i] == L'\n') ans++;
    }
    return ans + 1;
}

void removeStopwords(wstring &s){
    for (int i = 0; i < nStopwords; i++){
        while (true){
            int pos = s.find(L" " + discards[i] + L" ");
            if (pos != -1){
                s.erase(pos, discards[i].length() + 1);
            }
            else break;
        }
    }
}

void unsignedDocument(wstring &s){
    for (int i = 0; i < s.length(); i++){
        if (convert[s[i]] != -1){
            s[i] = convert[s[i]];
        }
        if ('A' <= s[i] && s[i] <= 'Z'){
            s[i] = (s[i] - 'A' + 'a');
        }
    }
}

bool isToken(wchar_t c){
    for (int i = 0; i < tokens.length(); i++){
        if (c == tokens[i]) return true;
    }
    return false;
}

void standardized(wstring &word){
    while (word.length() && isToken(word[0])){
        word.erase(0, 1);
    }    
    while (word.length() && isToken(word[word.length() - 1])){
        word.erase(word.length() - 1, 1);
    }
}
