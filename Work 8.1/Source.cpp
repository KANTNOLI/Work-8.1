#include <iostream>
#include <string>

using namespace std;


//������� ����� ��������� ����������.������������� ����������� ������
//� ������������ ������ ����, ������ ����� �� ������ - ���� ��������(��
//������, �� ���� ������� ��� ���������), ���������� ���� � ����������,
//�������� ���� �� ���, ������� � ����� �� ������.
//�������� ���������, ��������������� ��� ������������� ��������
//������.


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
