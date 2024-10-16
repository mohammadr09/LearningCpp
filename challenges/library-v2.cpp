#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Book {
    private:
        string title;
        string author;
        string isbn;
        float price;

    public:
        Book(string t, string a, string i, float p) {
            title = t;
            author = a;
            isbn = i;
            price = p;
        }

    void displayDetails() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << isbn << endl;
        cout << "Price: " << price << endl;
    }

    void updatePrice(float newPrice) {
        price = newPrice; // Here, we're just setting the newPrice as the default price
    }
};

struct Library {
    vector<Book> books;

    void addBooks(const Book& book) {
        books.push_back(book);
    }
};

int main() {


    return 0;
}