#include <iostream>
#include <string>
using namespace std;

class Book {
    string title;
    string author;
    int price;

public:
    Book() {
        title = "None";
        author = "None";
        price = 0;
    }

    Book(string t, string a, int p) {
        title = t;
        author = a;
        price = p;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Book book1;
    Book book2("C++ ", "Samarth", 500);

    book1.display();

    cout << endl;

    book2.display();

    return 0;
}