#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> input = {1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30};
    unordered_map<int, int> count;

    for (int num : input) {
        for (int i = 1; i <= 9; i++) {
            if (num % i == 0) {
                count[i]++;
            }
        }
    }

    cout << "Output:\n{";
    for (int i = 1; i <= 9; i++) {
        cout << i << ": " << count[i];
        if (i != 9) cout << ", ";
    }
    cout << "}" << endl;

    return 0;
}
