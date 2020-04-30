#include <iostream>
#include <string>

using namespace std;

string a[13] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string b[13] = {"", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};

void earth2mar(int number) {
    if (number < 13) {
        cout << a[number] << endl;
    } else {
        int first = number / 13;
        int second = number % 13;
        if (second == 0) {
            cout << b[first] << endl;
        } else {
            cout << b[first] << " " << a[second] << endl;
        }

    }
}

void mar2earth(string s) {
    if (s.length() <= 3) {
        for (int i=0; i<13; i++) {
            if (s == a[i]) {
                cout << i << endl;
            }
            if (s == b[i]) {
                cout << i*13 << endl;
            }
        }
    } else {
        string first = s.substr(0, 3);
        string second = s.substr(4, 3);
        int num1 = 0, num2 = 0;
        for(int i=0; i<13; i++) {
            if (first == b[i]) {
                num1 = i;
            }
            if (second == a[i]) {
                num2 = i;
            }
        }
        cout << num1*13+num2 << endl;
    }
}

int main() {
    int N;
    cin >> N;
    getchar();
    for(int i=0; i<N; i++) {
        string input;
        getline(cin, input);
        if (isalpha(input[0])) {
            mar2earth(input);
        } else {
            earth2mar(stoi(input));
        }

    }
    return 0;
}