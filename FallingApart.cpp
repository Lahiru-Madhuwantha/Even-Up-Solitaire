#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> pieces(n);
    for (int i = 0; i < n; i++) {
        cin >> pieces[i];
    }

    sort(pieces.rbegin(), pieces.rend());

    int aliceSum = 0;
    int bobSum = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            aliceSum += pieces[i];
        } else {
            bobSum += pieces[i];
        }
    }

    cout << aliceSum << " " << bobSum << endl;

    return 0;
}
