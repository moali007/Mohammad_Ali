#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter how many numbers you want to input: ";
    cin >> n;

    vector<int> input(n);
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; ++i) {
        cin >> input[i];
    }

    int count[10] = {0};
    
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
