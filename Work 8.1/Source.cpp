#include <iostream>
#include <string>
#include <conio.h>

using namespace std;


//Описать класс «домашняя библиотека».Предусмотреть возможность работы
//с произвольным числом книг, поиска книги по какому - либо признаку(по
//автору, по году издания или категории), добавления книг в библиотеку,
//удаления книг из нее, доступа к книге по номеру.
//Написать программу, демонстрирующую все разработанные элементы
//класса.


class HomeLibrary {
private:
	string author;
	string categories;
	int year;

public:
	HomeLibrary(string author = "Unknouwn author", string categories = "Unknouwn categories", int year = 0);
	~HomeLibrary() {};

	string find_book_author(string author, HomeLibrary* book, int size);
	string find_book_categories(string categories, HomeLibrary* book, int size);
	string find_book_year(int year, HomeLibrary* book, int size);

	string convert_to_stirng();

	string get_author();
	void set_author(string author);
	string get_categories();
	void set_categories(string categories);
	int get_year();
	void set_year(int year);
};

int main() {
	setlocale(LC_ALL, "RUS");
	int size = 3;
	HomeLibrary* book = new HomeLibrary[size];

		book[0].set_author("FIRST");
		book[0].set_categories("1");
		book[0].set_year(2000);

		book[1].set_author("SECOND");
		book[1].set_categories("2");
		book[1].set_year(2015);

		book[2].set_author("THIRT");  
		book[2].set_categories("3"); 
		book[2].set_year(2020); 
		
		int ch;
		cout << "Нажмите на определенную клавишу, для выбора категории поиска книги - 1 Автор, 2 Категория, 3 Год издания\n---> ";
		cin >> ch;

		if (ch == 1) {
			string author;
			cout << "Введите автора: ";
			cin >> author;

			cout << book->find_book_author(author, book, size) << endl;
		}
		else if (ch == 2) {
			string categories;
			cout << "Введите категорию: ";
			cin >> categories;

			cout << book->find_book_categories(categories, book, size) << endl; 
		}
		else {
			int year;
			cout << "Введите категорию: ";
			cin >> year;

			cout << book->find_book_year(year, book, size) << endl;  
		}

	return 0;
}

HomeLibrary::HomeLibrary(string author, string categories, int year)
{
	this->author = author;
	this->categories = categories;
	this->year = year;
}

string HomeLibrary::find_book_author(string author, HomeLibrary* book, int size) {	
	for (int i = 0; i < size; i++) {
		if (author == book[i].get_author()) {
			return book[i].convert_to_stirng(); 
		}
	}
	return "You don't have a book with author \"" + author + "\"";
}

string HomeLibrary::find_book_categories(string categories, HomeLibrary* book, int size)
{
	for (int i = 0; i < size; i++) {
		if (categories == book[i].get_categories()) {
			return book[i].convert_to_stirng(); 
		}
	}
	return "You don't have a book with categories \"" + categories + "\"";
}

string HomeLibrary::find_book_year(int year, HomeLibrary* book, int size)
{
	for (int i = 0; i < size; i++) {
		if (year == book[i].get_year()) {
			return book[i].convert_to_stirng();
		}
	}
	return "You don't have a book with year \"" + to_string(year) + "\"";
}

string HomeLibrary::convert_to_stirng()
{
	return "Author: " + get_author() + "\nCategories: " + get_categories() + "\nYear: " + to_string(get_year());
}

string HomeLibrary::get_author() {
	return author;
}
void HomeLibrary::set_author(string author) {
	this->author = author; 
}

string HomeLibrary::get_categories() {
	return categories;
}
void HomeLibrary::set_categories(string categories) {
	this->categories = categories; 
}
int HomeLibrary::get_year() {
	return year;
}
void HomeLibrary::set_year(int year) {
	this->year = year;
}