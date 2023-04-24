#include <iostream>
#include <fstream>
#include<sstream>

//������ 1
bool print_file(std::string file_path) {
	static std::ifstream in;
	in.open(file_path);

	if (in.is_open()) {
		char sym;
		while (in.get(sym))
			std::cout << sym;
		std::cout << std::endl;
		in.close();
		return true;
	}

	return false;
}

bool insert_file(std::string file_path, std::string str, int position);


int main() {
	setlocale(LC_ALL, "Rus");
	int n;

	std::string path = "file.txt";

	//����� fstream
/*
	std::fstream file; // ������ ������ fstream ��������� ������������ ���������� � ��������� ������ �����
	file.open(path, std::ios::in | std::ios::app);// | ������� ��� // �������� ����� � �������� std::ios::in  � std::ios::app
	// std::ios::in -
	// ���� �� ���������� ����� �������� ����� std::ios::app �� ������ ���������� � �����, ��� ������ � ���� ����� �������




	if (file.is_open()) {
		//���������� ������ � ����
		std::cout << "���� ������.\n";
		std::cout << "������ � ����.\n������� ������ -> ";
		std::string str;
		std::getline(std::cin, str);
		file << str << "\n";

		file.seekg(0, std::ios::beg); // ����������� ������� � ������ �����

		//������ �� �����
		std::cout << "���������� �����.\n";
		char sym;
		while(file.get(sym))
			std::cout << sym;
	}
	else
		std::cout << "������ �������� �����.\n";

	// ����������� �������
	// ��� ���������� get  put

	//������� ����� ��������� ������� ios::cur current
	file.close();
	*/


	//������ 1 ���� � ������� �����

	/*std::cout << "���������� �����: .\n";
	print_file(path);

	std::cout << "������� ������ ->";
	std::string substr;
	std::getline(std::cin, substr);

	std::cout << "������� ������� -> ";
	std::cin >> n;
	std::cin.ignore();

	if (insert_file(path, substr, n))
		std::cout << "������� ��������� ������� .\n";
	else
		std::cout<<"������ ���������� �����.\n";


	// ������ � ���� ����������� ����� � ������ ������. � ��� �� ������ ���� ������ ��������
	//������ ���� � ���� �������� ������123 ����. � � ����� ����������� ������123��. � �� ����� ��������� ���� ��� ����������� �����������.


	return false;
}

bool insert_file(std::string file_path, std::string str, int position) {
	std::string file_text;//������� ��������� ���������� ����� ������� � ��� 

	std::fstream file;
	file.open(file_path, std::ios::in);
	if (file.is_open()) {
		char sym;
		while (file.get(sym))
			file_text += sym;
	}
	else {
		file.close();
		return false;
	}
	file.close();
	file_text.insert(position, str);
	file.open(file_path, std::ios::out);
	if (file.is_open()) {
		file << file_text;
		file.close();
	}
	file.close();
	return false;
	*/

	// ������ 1.1 ������ ���� �� �����
	std::cout << "������1. \n���������� �����: \n";
	std::string date_path ="date.txt";
	print_file(date_path);

	//�������� � ���������� �����
	unsigned int day = 24;
	unsigned int month = 04 ;
	unsigned int year = 2023;

	std::cout << "����: " << day << std::endl;
	std::cout << "�����: " << month << std::endl;
	std::cout << "���: " << year << "\n\n";

}