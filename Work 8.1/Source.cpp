#include <iostream>
#include <string>

using namespace std;


//Описать класс «домашняя библиотека».Предусмотреть возможность работы
//с произвольным числом книг, поиска книги по какому - либо признаку(по
//автору, по году издания или категории), добавления книг в библиотеку,
//удаления книг из нее, доступа к книге по номеру.
//Написать программу, демонстрирующую все разработанные элементы
//класса.


	class Book {
	public:
		string author;
		string categories;
		int year;

		Book* pNext;

		Book(string author = "Unknouwn author", string categories = "Unknouwn categories", int year = 0, Book* pNext = nullptr) {
			this->author = author; 
			this->categories = categories; 
			this->year = year; 
			this->pNext = pNext;
		}
	};

int main() {




	return 0;
}
