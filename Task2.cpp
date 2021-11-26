#include <iostream>
#include <string>

using namespace std;

int main(){
    char c;
    string s, s0;

    cin >> c;
    cin >> s >> s0;

    for(int i = 0; i < s.length(); ++i) {
        if(s[i] == c) {
            s.insert(i, s0);

            i += s0.length();
        }
    }

    cout << s;

    system("pause");
    return 0;
}
