#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> elements;

    cout << "Enter the number of numbers you want in your element: ";
    int n;
    cin >> n;

    for (int i; i != n + 1; i++) {
        cout << "Enter element " << i << " ";
        int y;
        cin >> y;

        elements.push_back(y);
    };

    reverse(elements.begin(), elements.end());

    cout << "The reversed array is: \n";
    for (int value: elements) {
        cout << value << endl;
    };

    return 0;
}