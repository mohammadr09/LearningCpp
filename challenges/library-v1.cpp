#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

struct Book {
    string title;
    string author;
    int year;
    float price;
};

int main() {
    cout << "# of Books: ";
    int num;
    cin >> num;

    Book library[num];

    for (int i = 0; i < num; i++) {
        cout << "Enter details of Book " << i + 1 << ":\n";
        cin.ignore();
        cout << "Title: ";
        getline(cin, library[i].title);

        cout << "Author: ";
        getline(cin, library[i].author);
        
        cout << "Publication Year: ";
        cin >> library[i].year;

        cout << "Price: ";
        cin >> library[i].price;
        cout << endl;
    }

    cout << "DETAILS OF BOOKS:" << endl;

    // Details
    for (int i = 0; i < num; i++) {
        cout << "Book " << i + 1 << endl;
        cout << "Title: " << library[i].title << endl;
        cout << "Author: " << library[i].author << endl;
        cout << "Publication Year: " << library[i].year << endl;
        cout << "Price: " << library[i].price << endl;
    }

    return 0;
}