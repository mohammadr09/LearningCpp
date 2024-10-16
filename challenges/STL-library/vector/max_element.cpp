#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> elements;

    cout << "Enter the number of elements you want in your array: ";
    int n;
    cin >> n;

    for (int i; i != n + 1; i++) {
        cout << "Enter element " << i << " ";

        int input;
        cin >> input;

        elements.push_back(input);
    }

    int maxElement = elements[0];
    for(int i = 0; i < elements.size(); i++) {
        if (elements[i] > maxElement) {
            maxElement = elements[i];
        };
    }

    cout << "Largest Element: " << maxElement << endl;
}