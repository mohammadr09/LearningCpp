#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> x;

    cout << "Enter the number of elements: " << endl;

    int n;
    cin >> n;

    for(int i; i != n + 1; i++){
        cout << "Enter element " << i << " ";
        int y;
        cin >> y;

        x.push_back(y);
    }

    int sum = 0;

    for (int i = 0; i != n; ++i) {
        sum += x[i];
    }

    cout << "The sum of the elements is - " << sum << endl;
}
