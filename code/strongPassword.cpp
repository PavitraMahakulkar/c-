#include <iostream>
#include <string>

using namespace std;

int calculateTime(const string &s) {
    int time = 2; 
    for (size_t i = 1; i < s.size(); ++i) {
        if (s[i] == s[i - 1]) {
            time += 1;
        } else {
            time += 2;
        }
    }
    return time;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string best_password;
        int max_time = -1;
        for (size_t i = 0; i <= s.size(); ++i) {
            for (char c = 'a'; c <= 'z'; ++c) {
                string new_password = s.substr(0, i) + c + s.substr(i);
                int new_time = calculateTime(new_password);
                if (new_time > max_time) {
                    max_time = new_time;
                    best_password = new_password;
                }
            }
        }
        cout << best_password << endl;
    }
    return 0;
}