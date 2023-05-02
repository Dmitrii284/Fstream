#include <iostream>
#include <fstream>
#include<sstream>

//Задача 1
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

	//Класс fstream

	std::fstream file; // Объект класса fstream Позволяет одновременно записывать и считывать данные файла
	file.open(path, std::ios::in | std::ios::app);// | Битовое ИЛИ // Открытие файла с режимами std::ios::in  и std::ios::app
	// std::ios::in -
	// Если мы используем режим открытия файла std::ios::app то курсор становится в конец, при записи в файл новой строчки




	if (file.is_open()) {
		//Добавление записи в файл
		std::cout << "Файл открыт.\n";
		std::cout << "Запись в файл.\nВведите строку -> ";
		std::string str;
		std::getline(std::cin, str);
		file << str << "\n";

		file.seekg(0, std::ios::beg); // Перемещение курсора в начало файла

		//Чтение из файла
		std::cout << "Содержимое файла.\n";
		char sym;
		while(file.get(sym))
			std::cout << sym;
	}
	else
		std::cout << "Ошибка открытия файла.\n";

	// Перемещение курсора
	// Чем отличается get  put

	//Текущее место положения курсора ios::cur current
	file.close();
	


	//Задача 1 Ввод в позицию файла

	std::cout << "Содержимое файла: .\n";
	print_file(path);

	std::cout << "Введите строку ->";
	std::string substr;
	std::getline(std::cin, substr);

	std::cout << "Введиет позицию -> ";
	std::cin >> n;
	std::cin.ignore();

	if (insert_file(path, substr, n))
		std::cout << "Вставка выполнена успешно .\n";
	else
		std::cout<<"Ошибка выполнения файла.\n";


	// Всегда в файл добавляется текст в режиме замены. А нам по задаче надо просто добавить
	//Нордик порд а надо вставить Нордик123 порд. А в итоге добавляется Нордик123рд. И по этому открываем файл для копирования содержимого.


	return false;
}

bool insert_file(std::string file_path, std::string str, int position) {
	std::string file_text;//Создали строковую переменную чтобы считать в нее 

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
	

	// Задача 1.1 Чтение даты из файла
	std::cout << "Задача1. \nСодержимое файла: \n";
	std::string date_path ="date.txt";
	print_file(date_path);

	// Создаем файл data.txt и записываем дату . И ниже выводин эту дату в формате ниже Решение в Фото.

	//Открытие и считывание файла
	unsigned int day = 24;
	unsigned int month = 04 ;
	unsigned int year = 2023;

	std::cout << "День: " << day << std::endl;
	std::cout << "Месяц: " << month << std::endl;
	std::cout << "Год: " << year << "\n\n";

}