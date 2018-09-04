#include <iostream>
#include <string>
#define MAX_T_LEN 10001

using namespace std;

int next_arr[MAX_T_LEN];

void get_next(const string &T, const int t_length);
int count(const string &T, const string &S);


int main() {
    int N;
    cin >> N;
    string T;
    string S;
    int result = 0;
    int t_length = 0;
    int s_length = 0;
    while(N--) {
        cin >> T;
        cin >> S;
        t_length = T.length();
        s_length = S.length();
        if(t_length > s_length) {
            result = 0;
        } else {
            get_next(T, t_length);
            result = count(T,S);
        }
        cout << result << "\n";
    }
    
}

void get_next(const string &T, const int t_length) {
    int temp = 0;
    if(t_length > 0) {
        next_arr[0] = -1;
    } else {
        return;
    }
    for(int i = 1; i < t_length; i ++) {
        temp = next_arr[i - 1] + 1;
        while(!(T[temp] == T[i])&&(temp != 0)) {
            temp = next_arr[temp - 1] + 1;
        }
        next_arr[i] = temp;
    }
}

int count(const string &T, const string &S) {
    int i = 0;
    int j = 0;
    int result = 0;
    int t_len = T.length();
    int s_len = S.length();
    while(j < s_len) {
        if(T[i] == S[j]) {
            i++;
            j++;
        } else {
            if(i == 0) {
                j ++;
            } else {
                i = next_arr[i];
            }
        }
        if(i >= t_len) {
            result ++;
            j = j - i + 1;
            i = 0;
        }
    }
    return result;
}