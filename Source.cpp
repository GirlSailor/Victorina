#include <iostream>
#include <Windows.h>
using namespace std;


int main() {

	setlocale(0, "");
	int back = 1;
	int choice;
	int quantity = 8;
	int color = 4;
	int life = 3;
	int game;
	int gamequantity;
	int answer;
	int point = 0;
	int numberquestions = 1;
	cout << "Введите имя игрока: ";
	string username; cin >> username;
	system("cls");
	cout << "Выберите цвет интерфейса: \n\n";
	cout << "\x1b[91m[1] Красный \n";
	cout << "\x1b[92m[2] Зеленый \n";
	cout << "\x1b[93m[3] Желтый \n";
	cout << "\x1b[94m[4] Синий \n";
	cout << "\x1b[95m[5] Фиолетовый \n";
	cout << "\x1b[96m[6] Лазурный \n\x1b[0m";
	cin >> choice;
	switch (choice)
	{
	case 1:
		color = 1;
		break;
	case 2:
		color = 2;
		break;
	case 3:
		color = 3;
		break;
	case 4:
		color = 4;
		break;
	case 5:
		color = 5;
		break;
	case 6:
		color = 6;
		break;
	default:
		system("cls");
		cout << "\x1b[91m Неккоректно введены данные!\x1b[0m\n Цвет выбран по умолчанию.\n Изменить цвет можно в настройках.\n";
		Sleep(2000);
		break;
	}
	system("cls");
	cout << " \t Привет \x1b[9" << color << "m" << username << "\x1b[0m!\n перед тобой замечательная игра \n \t\x1b[9" << color << "m \"ВИКТОРИНА\"\n\n\n\n\n\n\x1b[0m";
	Sleep(2000);
	while (true) {
		system("cls");
		cout << "\t\t\x1b[9" << color << "m МЕНЮ \x1b[0m\n\n";
		cout << "\t[1] Начать игру\n";
		cout << "\t[2] Настройки\n";
		cout << "\t[3] Правила\n";
		cout << "\t[4] Выйти\n\n\n";
		cout << "\tВыберите функцию.";
		cin >> choice;
		switch (choice)
		{
		case 1:
			system("cls");
			game = 1;
			gamequantity = quantity;
			numberquestions = 1;
			life = 3;
			point = 0;
			cout << "\x1b[9" << color << "m   Викторина начинается!\x1b[0m \nВыбран режим с " << quantity << " вопросами.\n";
			cout << "[1] Начать игру \n";
			cout << "[2] Вернуться в главное меню \n";
			cin >> choice;
			switch (choice)
			{
			case 1:
				while (game and life)
				{
					switch (gamequantity)
					{
					case 1:
						answer = 0;
						while (answer != 1 and answer != 2 and answer != 3 and answer != 4) {
							system("cls");
							cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
							cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Самый сложный вопрос! Как зовут преподавателя?" << endl;
							cout << "[\x1b[9" << color << "m1\x1b[0m] Орлов Дмитрий Алексеевич\n";
							cout << "[\x1b[9" << color << "m2\x1b[0m] Орлов Александр Дмитриевич\n";
							cout << "[\x1b[9" << color << "m3\x1b[0m] Орлов Алексей Дмитриевич\n";
							cout << "[\x1b[9" << color << "m4\x1b[0m] Орлов Дмитрий Александрович\n";
							cout << "Введите вариант ответа: ";
							cin >> answer;
							switch (answer)
							{
							case 1:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Самый сложный вопрос! Как зовут преподавателя?" << endl;
								cout << "[\x1b[91m1] Орлов Дмитрий Алексеевич\n\x1b[0m";
								cout << "[\x1b[9" << color << "m2\x1b[0m] Орлов Александр Дмитриевич\n";
								cout << "[\x1b[92m3] Орлов Алексей Дмитриевич\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] Орлов Дмитрий Александрович\n\n";
								cout << "\x1b[91m Ты ошибся =( -1 жизнь\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 2:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Самый сложный вопрос! Как зовут преподавателя?" << endl;
								cout << "[\x1b[9" << color << "m2\x1b[0m] Орлов Дмитрий Алексеевич\n";
								cout << "[\x1b[91m2] Орлов Александр Дмитриевич\n\x1b[0m";
								cout << "[\x1b[92m3] Орлов Алексей Дмитриевич\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] Орлов Дмитрий Александрович\n\n";
								cout << "\x1b[91m Ты ошибся =( -1 жизнь\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 3:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Самый сложный вопрос! Как зовут преподавателя?" << endl;
								cout << "[\x1b[9" << color << "m2\x1b[0m] Орлов Дмитрий Алексеевич\n";
								cout << "[\x1b[9" << color << "m2\x1b[0m] Орлов Александр Дмитриевич\n";
								cout << "[\x1b[92m3] Орлов Алексей Дмитриевич\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] Орлов Дмитрий Александрович\n\n";
								cout << "\x1b[92mМолодец! Правильный ответ! +100 очков\n\x1b[0m";
								Sleep(2000);
								point = point + 100;
								break;
							case 4:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Самый сложный вопрос! Как зовут преподавателя?" << endl;
								cout << "[\x1b[9" << color << "m2\x1b[0m] Орлов Дмитрий Алексеевич\n";
								cout << "[\x1b[9" << color << "m2\x1b[0m] Орлов Александр Дмитриевич\n";
								cout << "[\x1b[92m3] Орлов Алексей Дмитриевич\n\x1b[0m";
								cout << "[\x1b[91m4] Орлов Дмитрий Александрович\n\x1b[0m\n";
								cout << "\x1b[91m Ты ошибся =( -1 жизнь\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							default:
								system("cls");
								cout << "\x1b[91mНекорректный ввод! Попробуйте снова!\x1b[0m\n";
								Sleep(2000);
								break;
							}
						}
						gamequantity--;
						numberquestions++;
						game = 0;
						break;
					case 2:
						answer = 0;
						while (answer != 1 and answer != 2 and answer != 3 and answer != 4) {
							system("cls");
							cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
							cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какой оператор используется для присваивания значения переменной в С++?" << endl;
							cout << "[\x1b[9" << color << "m1\x1b[0m] =\n";
							cout << "[\x1b[9" << color << "m2\x1b[0m] ==\n";
							cout << "[\x1b[9" << color << "m3\x1b[0m] +=\n";
							cout << "[\x1b[9" << color << "m4\x1b[0m] ++\n";
							cout << "Введите вариант ответа: ";
							cin >> answer;
							switch (answer)
							{
							case 1:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какой оператор используется для присваивания значения переменной в С++?" << endl;
								cout << "[\x1b[92m1] =\n\x1b[0m";
								cout << "[\x1b[9" << color << "m2\x1b[0m] ==\n";
								cout << "[\x1b[9" << color << "m3\x1b[0m] +=\n";
								cout << "[\x1b[9" << color << "m4\x1b[0m] ++\n\n";
								cout << "\x1b[92mМолодец! Правильный ответ! +100 очков\n\x1b[0m";
								Sleep(2000);
								point = point + 100;
								break;
							case 2:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какой оператор используется для присваивания значения переменной в С++?" << endl;
								cout << "[\x1b[92m1] =\n\x1b[0m";
								cout << "[\x1b[91m2] ==\n\x1b[0m";
								cout << "[\x1b[9" << color << "m3\x1b[0m] +=\n";
								cout << "[\x1b[9" << color << "m4\x1b[0m] ++\n\n";
								cout << "\x1b[91m Ты ошибся =( -1 жизнь\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 3:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какой оператор используется для присваивания значения переменной в С++?" << endl;
								cout << "[\x1b[92m1] =\n\x1b[0m";
								cout << "[\x1b[9" << color << "m2\x1b[0m] ==\n";
								cout << "[\x1b[91m3] +=\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] ++\n\n";
								cout << "\x1b[91m Ты ошибся =( -1 жизнь\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 4:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какой оператор используется для присваивания значения переменной в С++?" << endl;
								cout << "[\x1b[92m1] =\n\x1b[0m";
								cout << "[\x1b[9" << color << "m2\x1b[0m] ==\n";
								cout << "[\x1b[9" << color << "m3\x1b[0m] +=\n";
								cout << "[\x1b[91m4] ++\n\x1b[0m\n";
								cout << "\x1b[91m Ты ошибся =( -1 жизнь\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							default:
								system("cls");
								cout << "\x1b[91mНекорректный ввод! Попробуйте снова!\x1b[0m\n";
								Sleep(2000);
								break;
							}
						}
						gamequantity--;
						numberquestions++;
						break;
					case 3:
						answer = 0;
						while (answer != 1 and answer != 2 and answer != 3 and answer != 4) {
							system("cls");
							cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
							cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какой тип данных используется для хранения дробных чисел в С++?" << endl;
							cout << "[\x1b[9" << color << "m1\x1b[0m] int\n";
							cout << "[\x1b[9" << color << "m2\x1b[0m] float\n";
							cout << "[\x1b[9" << color << "m3\x1b[0m] char\n";
							cout << "[\x1b[9" << color << "m4\x1b[0m] bool\n";
							cout << "Введите вариант ответа: ";
							cin >> answer;
							switch (answer)
							{
							case 1:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какой тип данных используется для хранения дробных чисел в С++?" << endl;
								cout << "[\x1b[91m1] int\n\x1b[0m";
								cout << "[\x1b[92m2] float\n\x1b[0m";
								cout << "[\x1b[9" << color << "m3\x1b[0m] char\n";
								cout << "[\x1b[9" << color << "m4\x1b[0m] bool\n\n";
								cout << "\x1b[91m Ты ошибся =( -1 жизнь\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 2:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какой тип данных используется для хранения дробных чисел в С++?" << endl;
								cout << "[\x1b[9" << color << "m3\x1b[0m] int\n";
								cout << "[\x1b[92m2] float\n\x1b[0m";
								cout << "[\x1b[9" << color << "m3\x1b[0m] char\n";
								cout << "[\x1b[9" << color << "m4\x1b[0m] bool\n\n";
								cout << "\x1b[92mМолодец! Правильный ответ! +100 очков\n\x1b[0m";
								Sleep(2000);
								point = point + 100;
								break;
							case 3:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какой тип данных используется для хранения дробных чисел в С++?" << endl;
								cout << "[\x1b[9" << color << "m3\x1b[0m] int\n";
								cout << "[\x1b[92m2] float\n\x1b[0m";
								cout << "[\x1b[91m3] char\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] bool\n\n";
								cout << "\x1b[91m Ты ошибся =( -1 жизнь\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 4:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какой тип данных используется для хранения дробных чисел в С++?" << endl;
								cout << "[\x1b[9" << color << "m3\x1b[0m] int\n";
								cout << "[\x1b[92m2] float\n\x1b[0m";
								cout << "[\x1b[9" << color << "m3\x1b[0m] char\n";
								cout << "[\x1b[91m4] bool\n\x1b[0m\n";
								cout << "\x1b[91m Ты ошибся =( -1 жизнь\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							default:
								system("cls");
								cout << "\x1b[91mНекорректный ввод! Попробуйте снова!\x1b[0m\n";
								Sleep(2000);
								break;
							}
						}
						gamequantity--;
						numberquestions++;
						break;
					case 4:
						answer = 0;
						while (answer != 1 and answer != 2 and answer != 3 and answer != 4) {
							system("cls");
							cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
							cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какой оператор используется для логического НЕ в С++?" << endl;
							cout << "[\x1b[9" << color << "m1\x1b[0m] ||\n";
							cout << "[\x1b[9" << color << "m2\x1b[0m] &&\n";
							cout << "[\x1b[9" << color << "m3\x1b[0m] !\n";
							cout << "[\x1b[9" << color << "m4\x1b[0m] ==\n";
							cout << "Введите вариант ответа: ";
							cin >> answer;
							switch (answer)
							{
							case 1:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какой оператор используется для логического НЕ в С++?" << endl;
								cout << "[\x1b[91m1] ||\n\x1b[0m";
								cout << "[\x1b[9" << color << "m2\x1b[0m] &&\n";
								cout << "[\x1b[92m3] !\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] ==\n\n";
								cout << "\x1b[91m Ты ошибся =( -1 жизнь\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 2:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какой оператор используется для логического НЕ в С++?" << endl;
								cout << "[\x1b[9" << color << "m1\x1b[0m] ||\n";
								cout << "[\x1b[91m2] &&\n\x1b[0m";
								cout << "[\x1b[92m3] !\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] ==\n\n";
								cout << "\x1b[91m Ты ошибся =( -1 жизнь\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 3:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какой оператор используется для логического НЕ в С++?" << endl;
								cout << "[\x1b[9" << color << "m1\x1b[0m] ||\n";
								cout << "[\x1b[9" << color << "m2\x1b[0m] &&\n";
								cout << "[\x1b[92m3] !\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] ==\n\n";
								cout << "\x1b[92mМолодец! Правильный ответ! +100 очков\n\x1b[0m";
								Sleep(2000);
								point = point + 100;
								break;
							case 4:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какой оператор используется для логического НЕ в С++?" << endl;
								cout << "[\x1b[9" << color << "m1\x1b[0m] ||\n";
								cout << "[\x1b[9" << color << "m2\x1b[0m] &&\n";
								cout << "[\x1b[92m3] !\n\x1b[0m";
								cout << "[\x1b[91m4] ==\n\x1b[0m\n";
								cout << "\x1b[91m Ты ошибся =( -1 жизнь\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							default:
								system("cls");
								cout << "\x1b[91mНекорректный ввод! Попробуйте снова!\x1b[0m\n";
								Sleep(2000);
								break;
							}
						}
						gamequantity--;
						numberquestions++;
						break;
					case 5:
						answer = 0;
						while (answer != 1 and answer != 2 and answer != 3 and answer != 4) {
							system("cls");
							cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
							cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Что такое функция в С++?" << endl;
							cout << "[\x1b[9" << color << "m1\x1b[0m] Условный оператор, который выполняет код, если условие истинно\n";
							cout << "[\x1b[9" << color << "m2\x1b[0m] Объект, который хранит несколько значений одного типа\n";
							cout << "[\x1b[9" << color << "m3\x1b[0m] Код, который выполняет определенную задачу и может возвращать значение\n";
							cout << "[\x1b[9" << color << "m4\x1b[0m] Оператор, который позволяет перейти к следующей итерации цикла\n";
							cout << "Введите вариант ответа: ";
							cin >> answer;
							switch (answer)
							{
							case 1:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Что такое функция в С++?" << endl;
								cout << "[\x1b[91m1] Условный оператор, который выполняет код, если условие истинно\n\x1b[0m";
								cout << "[\x1b[9" << color << "m2\x1b[0m] Объект, который хранит несколько значений одного типа\n";
								cout << "[\x1b[92m3] Код, который выполняет определенную задачу и может возвращать значение\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] Оператор, который позволяет перейти к следующей итерации цикла\n\n";
								cout << "\x1b[91m Ты ошибся =( -1 жизнь\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 2:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Что такое функция в С++?" << endl;
								cout << "[\x1b[9" << color << "m1\x1b[0m] Условный оператор, который выполняет код, если условие истинно\n";
								cout << "[\x1b[91m2] Объект, который хранит несколько значений одного типа\n\x1b[0m";
								cout << "[\x1b[92m3] Код, который выполняет определенную задачу и может возвращать значение\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] Оператор, который позволяет перейти к следующей итерации цикла\n\n";
								cout << "\x1b[91m Ты ошибся =( -1 жизнь\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 3:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Что такое функция в С++?" << endl;
								cout << "[\x1b[9" << color << "m1\x1b[0m] Условный оператор, который выполняет код, если условие истинно\n";
								cout << "[\x1b[9" << color << "m2\x1b[0m] Объект, который хранит несколько значений одного типа\n";
								cout << "[\x1b[92m3] Код, который выполняет определенную задачу и может возвращать значение\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] Оператор, который позволяет перейти к следующей итерации цикла\n\n";
								cout << "\x1b[92mМолодец! Правильный ответ! +100 очков\n\x1b[0m";
								Sleep(2000);
								point = point + 100;
								break;
							case 4:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Что такое функция в С++?" << endl;
								cout << "[\x1b[9" << color << "m1\x1b[0m] Условный оператор, который выполняет код, если условие истинно\n";
								cout << "[\x1b[9" << color << "m2\x1b[0m] Объект, который хранит несколько значений одного типа\n";
								cout << "[\x1b[92m3] Код, который выполняет определенную задачу и может возвращать значение\n\x1b[0m";
								cout << "[\x1b[91m4] Оператор, который позволяет перейти к следующей итерации цикла\n\x1b[0m\n";
								cout << "\x1b[91m Ты ошибся =( -1 жизнь\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							default:
								system("cls");
								cout << "\x1b[91mНекорректный ввод! Попробуйте снова!\x1b[0m\n";
								Sleep(2000);
								break;
							}
						}
						gamequantity--;
						numberquestions++;
						break;
					case 6:
						answer = 0;
						while (answer != 1 and answer != 2 and answer != 3 and answer != 4) {
							system("cls");
							cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
							cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какой оператор используется для логического И в C++?" << endl;
							cout << "[\x1b[9" << color << "m1\x1b[0m] ||\n";
							cout << "[\x1b[9" << color << "m2\x1b[0m] &&\n";
							cout << "[\x1b[9" << color << "m3\x1b[0m] !\n";
							cout << "[\x1b[9" << color << "m4\x1b[0m] ==\n";
							cout << "Введите вариант ответа: ";
							cin >> answer;
							switch (answer)
							{
							case 1:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какой оператор используется для логического И в C++?" << endl;
								cout << "[\x1b[91m1] ||\n\x1b[0m";
								cout << "[\x1b[92m2] &&\n\x1b[0m";
								cout << "[\x1b[9" << color << "m3\x1b[0m] !\n";
								cout << "[\x1b[9" << color << "m4\x1b[0m] ==\n\n";
								cout << "\x1b[91m Ты ошибся =( -1 жизнь\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 2:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какой оператор используется для логического И в C++?" << endl;
								cout << "[\x1b[9" << color << "m3\x1b[0m] ||\n";
								cout << "[\x1b[92m2] &&\n\x1b[0m";
								cout << "[\x1b[9" << color << "m3\x1b[0m] !\n";
								cout << "[\x1b[9" << color << "m4\x1b[0m] ==\n\n";
								cout << "\x1b[92mМолодец! Правильный ответ! +100 очков\n\x1b[0m";
								Sleep(2000);
								point = point + 100;
								break;
							case 3:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какой оператор используется для логического И в C++?" << endl;
								cout << "[\x1b[9" << color << "m3\x1b[0m] ||\n";
								cout << "[\x1b[92m2] &&\n\x1b[0m";
								cout << "[\x1b[91m3] !\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] ==\n\n";
								cout << "\x1b[91m Ты ошибся =( -1 жизнь\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 4:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какой оператор используется для логического И в C++?" << endl;
								cout << "[\x1b[9" << color << "m3\x1b[0m] ||\n";
								cout << "[\x1b[92m2] &&\n\x1b[0m";
								cout << "[\x1b[9" << color << "m3\x1b[0m] !\n";
								cout << "[\x1b[91m4] ==\n\x1b[0m\n";
								cout << "\x1b[91m Ты ошибся =( -1 жизнь\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							default:
								system("cls");
								cout << "\x1b[91mНекорректный ввод! Попробуйте снова!\x1b[0m\n";
								Sleep(2000);
								break;
							}
						}
						gamequantity--;
						numberquestions++;
						break;
					case 7:
						answer = 0;
						while (answer != 1 and answer != 2 and answer != 3 and answer != 4) {
							system("cls");
							cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
							cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Что такое массив в C++?" << endl;
							cout << "[\x1b[9" << color << "m1\x1b[0m] Функция, которая возвращает значение\n";
							cout << "[\x1b[9" << color << "m2\x1b[0m] Объект, который хранит несколько значений одного типа\n";
							cout << "[\x1b[9" << color << "m3\x1b[0m] Условный оператор, который выполняет код, если условие истинно\n";
							cout << "[\x1b[9" << color << "m4\x1b[0m] Оператор, который позволяет создать функцию\n";
							cout << "Введите вариант ответа: ";
							cin >> answer;
							switch (answer)
							{
							case 1:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Что такое массив в C++?" << endl;
								cout << "[\x1b[91m1] Функция, которая возвращает значение\n\x1b[0m";
								cout << "[\x1b[92m2] Объект, который хранит несколько значений одного типа\n\x1b[0m";
								cout << "[\x1b[9" << color << "m3\x1b[0m] Условный оператор, который выполняет код, если условие истинно\n";
								cout << "[\x1b[9" << color << "m4\x1b[0m] Оператор, который позволяет создать функцию\n\n";
								cout << "\x1b[91m Ты ошибся =( -1 жизнь\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 2:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Что такое массив в C++?" << endl;
								cout << "[\x1b[9" << color << "m3\x1b[0m] Функция, которая возвращает значение\n";
								cout << "[\x1b[92m2] Объект, который хранит несколько значений одного типа\n\x1b[0m";
								cout << "[\x1b[9" << color << "m3\x1b[0m] Условный оператор, который выполняет код, если условие истинно\n";
								cout << "[\x1b[9" << color << "m4\x1b[0m] Оператор, который позволяет создать функцию\n\n";
								cout << "\x1b[92mМолодец! Правильный ответ! +100 очков\n\x1b[0m";
								Sleep(2000);
								point = point + 100;
								break;
							case 3:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Что такое массив в C++?" << endl;
								cout << "[\x1b[9" << color << "m3\x1b[0m] Функция, которая возвращает значение\n";
								cout << "[\x1b[92m2] Объект, который хранит несколько значений одного типа\n\x1b[0m";
								cout << "[\x1b[91m3] Условный оператор, который выполняет код, если условие истинно\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] Оператор, который позволяет создать функцию\n\n";
								cout << "\x1b[91m Ты ошибся =( -1 жизнь\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 4:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Что такое массив в C++?" << endl;
								cout << "[\x1b[9" << color << "m3\x1b[0m] Функция, которая возвращает значение\n";
								cout << "[\x1b[92m2] Объект, который хранит несколько значений одного типа\n\x1b[0m";
								cout << "[\x1b[9" << color << "m3\x1b[0m] Условный оператор, который выполняет код, если условие истинно\n";
								cout << "[\x1b[91m4] Оператор, который позволяет создать функцию\n\x1b[0m\n";
								cout << "\x1b[91m Ты ошибся =( -1 жизнь\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							default:
								system("cls");
								cout << "\x1b[91mНекорректный ввод! Попробуйте снова!\x1b[0m\n";
								Sleep(2000);
								break;
							}
						}
						gamequantity--;
						numberquestions++;
						break;
					case 8:
						answer = 0;
						while (answer != 1 and answer != 2 and answer != 3 and answer != 4) {
							system("cls");
							cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
							cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какой тип данных используется для хранения целых чисел в C++?" << endl;
							cout << "[\x1b[9" << color << "m1\x1b[0m] int\n";
							cout << "[\x1b[9" << color << "m2\x1b[0m] float\n";
							cout << "[\x1b[9" << color << "m3\x1b[0m] char\n";
							cout << "[\x1b[9" << color << "m4\x1b[0m] bool\n";
							cout << "Введите вариант ответа: ";
							cin >> answer;
							switch (answer)
							{
							case 1:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какой тип данных используется для хранения целых чисел в C++?" << endl;
								cout << "[\x1b[92m1] int\n\x1b[0m";
								cout << "[\x1b[9" << color << "m2\x1b[0m] float\n";
								cout << "[\x1b[9" << color << "m3\x1b[0m] char\n";
								cout << "[\x1b[9" << color << "m4\x1b[0m] bool\n\n";
								cout << "\x1b[92mМолодец! Правильный ответ! +100 очков\n\x1b[0m";
								Sleep(2000);
								point = point + 100;
								break;
							case 2:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какой тип данных используется для хранения целых чисел в C++?" << endl;
								cout << "[\x1b[92m1] int\n\x1b[0m";
								cout << "[\x1b[91m2] float\n\x1b[0m";
								cout << "[\x1b[9" << color << "m3\x1b[0m] char\n";
								cout << "[\x1b[9" << color << "m4\x1b[0m] bool\n\n";
								cout << "\x1b[91m Ты ошибся =( -1 жизнь\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 3:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какой тип данных используется для хранения целых чисел в C++?" << endl;
								cout << "[\x1b[92m1] int\n\x1b[0m";
								cout << "[\x1b[9" << color << "m2\x1b[0m] float\n";
								cout << "[\x1b[91m3] char\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] bool\n\n";
								cout << "\x1b[91m Ты ошибся =( -1 жизнь\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 4:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какой тип данных используется для хранения целых чисел в C++?" << endl;
								cout << "[\x1b[92m1] int\n\x1b[0m";
								cout << "[\x1b[9" << color << "m2\x1b[0m] float\n";
								cout << "[\x1b[9" << color << "m3\x1b[0m] char\n";
								cout << "[\x1b[91m4] bool\n\x1b[0m\n";
								cout << "\x1b[91m Ты ошибся =( -1 жизнь\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							default:
								system("cls");
								cout << "\x1b[91mНекорректный ввод! Попробуйте снова!\x1b[0m\n";
								Sleep(2000);
								break;
							}
						}
						gamequantity--;
						numberquestions++;
						break;
					case 9:
						answer = 0;
						while (answer != 1 and answer != 2 and answer != 3 and answer != 4) {
							system("cls");
							cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
							cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Что такое переменная в C++?" << endl;
							cout << "[\x1b[9" << color << "m1\x1b[0m] Функция, которая возвращает значение\n";
							cout << "[\x1b[9" << color << "m2\x1b[0m] Код, который выполняет определенную задачу\n";
							cout << "[\x1b[9" << color << "m3\x1b[0m] Область памяти, которая хранит значение\n";
							cout << "[\x1b[9" << color << "m4\x1b[0m] Условие, которое проверяет истинность выражения\n";
							cout << "Введите вариант ответа: ";
							cin >> answer;
							switch (answer)
							{
							case 1:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Что такое переменная в C++?" << endl;
								cout << "[\x1b[91m1] Функция, которая возвращает значение\n\x1b[0m";
								cout << "[\x1b[9" << color << "m2\x1b[0m] Код, который выполняет определенную задачу\n";
								cout << "[\x1b[92m3] Область памяти, которая хранит значение\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] Условие, которое проверяет истинность выражения\n\n";
								cout << "\x1b[91m Ты ошибся =( -1 жизнь\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 2:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Что такое переменная в C++?" << endl;
								cout << "[\x1b[9" << color << "m1\x1b[0m] Функция, которая возвращает значение\n";
								cout << "[\x1b[91m2] Код, который выполняет определенную задачу\n\x1b[0m";
								cout << "[\x1b[92m3] Область памяти, которая хранит значение\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] Условие, которое проверяет истинность выражения\n\n";
								cout << "\x1b[91m Ты ошибся =( -1 жизнь\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 3:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Что такое переменная в C++?" << endl;
								cout << "[\x1b[9" << color << "m1\x1b[0m] Функция, которая возвращает значение\n";
								cout << "[\x1b[9" << color << "m2\x1b[0m] Код, который выполняет определенную задачу\n";
								cout << "[\x1b[92m3] Область памяти, которая хранит значение\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] Условие, которое проверяет истинность выражения\n\n";
								cout << "\x1b[92mМолодец! Правильный ответ! +100 очков\n\x1b[0m";
								Sleep(2000);
								point = point + 100;
								break;
							case 4:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Что такое переменная в C++?" << endl;
								cout << "[\x1b[9" << color << "m1\x1b[0m] Функция, которая возвращает значение\n";
								cout << "[\x1b[9" << color << "m2\x1b[0m] Код, который выполняет определенную задачу\n";
								cout << "[\x1b[92m3] Область памяти, которая хранит значение\n\x1b[0m";
								cout << "[\x1b[91m4] Условие, которое проверяет истинность выражения\n\x1b[0m\n";
								cout << "\x1b[91m Ты ошибся =( -1 жизнь\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							default:
								system("cls");
								cout << "\x1b[91mНекорректный ввод! Попробуйте снова!\x1b[0m\n";
								Sleep(2000);
								break;
							}
						}
						gamequantity--;
						numberquestions++;
						break;
					case 10:
						answer = 0;
						while (answer != 1 and answer != 2 and answer != 3 and answer != 4) {
							system("cls");
							cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
							cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какой оператор используется для умножения в C++?" << endl;
							cout << "[\x1b[9" << color << "m1\x1b[0m] /\n";
							cout << "[\x1b[9" << color << "m2\x1b[0m] %\n";
							cout << "[\x1b[9" << color << "m3\x1b[0m] *\n";
							cout << "[\x1b[9" << color << "m4\x1b[0m] +\n";
							cout << "Введите вариант ответа: ";
							cin >> answer;
							switch (answer)
							{
							case 1:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какой оператор используется для умножения в C++?" << endl;
								cout << "[\x1b[91m1] /\n\x1b[0m";
								cout << "[\x1b[9" << color << "m2\x1b[0m] %\n";
								cout << "[\x1b[92m3] *\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] +\n\n";
								cout << "\x1b[91m Ты ошибся =( -1 жизнь\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 2:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какой оператор используется для умножения в C++?" << endl;
								cout << "[\x1b[9" << color << "m1\x1b[0m] /\n";
								cout << "[\x1b[91m2] %\n\x1b[0m";
								cout << "[\x1b[92m3] *\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] +\n\n";
								cout << "\x1b[91m Ты ошибся =( -1 жизнь\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 3:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какой оператор используется для умножения в C++?" << endl;
								cout << "[\x1b[9" << color << "m1\x1b[0m] /\n";
								cout << "[\x1b[9" << color << "m2\x1b[0m] %\n";
								cout << "[\x1b[92m3] *\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] +\n\n";
								cout << "\x1b[92mМолодец! Правильный ответ! +100 очков\n\x1b[0m";
								Sleep(2000);
								point = point + 100;
								break;
							case 4:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какой оператор используется для умножения в C++?" << endl;
								cout << "[\x1b[9" << color << "m1\x1b[0m] /\n";
								cout << "[\x1b[9" << color << "m2\x1b[0m] %\n";
								cout << "[\x1b[92m3] *\n\x1b[0m";
								cout << "[\x1b[91m4] +\n\x1b[0m\n";
								cout << "\x1b[91m Ты ошибся =( -1 жизнь\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							default:
								system("cls");
								cout << "\x1b[91mНекорректный ввод! Попробуйте снова!\x1b[0m\n";
								Sleep(2000);
								break;
							}
						}
						gamequantity--;
						numberquestions++;
						break;
					case 11:
						answer = 0;
						while (answer != 1 and answer != 2 and answer != 3 and answer != 4) {
							system("cls");
							cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
							cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какая команда используется для запуска цикла?" << endl;
							cout << "[\x1b[9" << color << "m1\x1b[0m] while\n";
							cout << "[\x1b[9" << color << "m2\x1b[0m] switch\n";
							cout << "[\x1b[9" << color << "m3\x1b[0m] else\n";
							cout << "[\x1b[9" << color << "m4\x1b[0m] insert\n";
							cout << "Введите вариант ответа: ";
							cin >> answer;
							switch (answer)
							{
							case 1:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какая команда используется для запуска цикла?" << endl;
								cout << "[\x1b[92m1] while\n\x1b[0m";
								cout << "[\x1b[9" << color << "m2\x1b[0m] switch\n";
								cout << "[\x1b[9" << color << "m3\x1b[0m] else\n";
								cout << "[\x1b[9" << color << "m4\x1b[0m] insert\n\n";
								cout << "\x1b[92mМолодец! Правильный ответ! +100 очков\n\x1b[0m";
								Sleep(2000);
								point = point + 100;
								break;
							case 2:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какая команда используется для запуска цикла?" << endl;
								cout << "[\x1b[92m1] while\n\x1b[0m";
								cout << "[\x1b[91m2] switch\n\x1b[0m";
								cout << "[\x1b[9" << color << "m3\x1b[0m] else\n";
								cout << "[\x1b[9" << color << "m4\x1b[0m] insert\n\n";
								cout << "\x1b[91m Ты ошибся =( -1 жизнь\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 3:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какая команда используется для запуска цикла?" << endl;
								cout << "[\x1b[92m1] while\n\x1b[0m";
								cout << "[\x1b[9" << color << "m2\x1b[0m] switch\n";
								cout << "[\x1b[91m3] else\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] insert\n\n";
								cout << "\x1b[91m Ты ошибся =( -1 жизнь\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 4:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какая команда используется для запуска цикла?" << endl;
								cout << "[\x1b[92m1] while\n\x1b[0m";
								cout << "[\x1b[9" << color << "m2\x1b[0m] switch\n";
								cout << "[\x1b[9" << color << "m3\x1b[0m] else\n";
								cout << "[\x1b[91m4] insert\n\x1b[0m\n";
								cout << "\x1b[91m Ты ошибся =( -1 жизнь\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							default:
								system("cls");
								cout << "\x1b[91mНекорректный ввод! Попробуйте снова!\x1b[0m\n";
								Sleep(2000);
								break;
							}
						}
						gamequantity--;
						numberquestions++;
						break;
					case 12:
						answer = 0;
						while (answer != 1 and answer != 2 and answer != 3 and answer != 4) {
							system("cls");
							cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
							cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какой оператор используется для сравнения значений?" << endl;
							cout << "[\x1b[9" << color << "m1\x1b[0m] =\n";
							cout << "[\x1b[9" << color << "m2\x1b[0m] ==\n";
							cout << "[\x1b[9" << color << "m3\x1b[0m] ===\n";
							cout << "[\x1b[9" << color << "m4\x1b[0m] !=\n";
							cout << "Введите вариант ответа: ";
							cin >> answer;
							switch (answer)
							{
							case 1:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какой оператор используется для сравнения значений?" << endl;
								cout << "[\x1b[91m1] =\n\x1b[0m";
								cout << "[\x1b[92m2] ==\n\x1b[0m";
								cout << "[\x1b[9" << color << "m3\x1b[0m] ===\n";
								cout << "[\x1b[9" << color << "m4\x1b[0m] !=\n\n";
								cout << "\x1b[91m Ты ошибся =( -1 жизнь\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 2:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какой оператор используется для сравнения значений?" << endl;
								cout << "[\x1b[9" << color << "m3\x1b[0m] =\n";
								cout << "[\x1b[92m2] ==\n\x1b[0m";
								cout << "[\x1b[9" << color << "m3\x1b[0m] ===\n";
								cout << "[\x1b[9" << color << "m4\x1b[0m] !=\n\n";
								cout << "\x1b[92mМолодец! Правильный ответ! +100 очков\n\x1b[0m";
								Sleep(2000);
								point = point + 100;
								break;
							case 3:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какой оператор используется для сравнения значений?" << endl;
								cout << "[\x1b[9" << color << "m3\x1b[0m] =\n";
								cout << "[\x1b[92m2] ==\n\x1b[0m";
								cout << "[\x1b[91m3] ===\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] !=\n\n";
								cout << "\x1b[91m Ты ошибся =( -1 жизнь\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 4:
								system("cls");
								cout << "Пользователь \x1b[9" << color << "m " << username << " \x1b[0m | оставшиеся жизни: \x1b[9" << color << "m " << life << "\x1b[0m | количество очков: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  Какой оператор используется для сравнения значений?" << endl;
								cout << "[\x1b[9" << color << "m3\x1b[0m] =\n";
								cout << "[\x1b[92m2] ==\n\x1b[0m";
								cout << "[\x1b[9" << color << "m3\x1b[0m] ===\n";
								cout << "[\x1b[91m4] !=\n\x1b[0m\n";
								cout << "\x1b[91m Ты ошибся =( -1 жизнь\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							default:
								system("cls");
								cout << "\x1b[91mНекорректный ввод! Попробуйте снова!\x1b[0m\n";
								Sleep(2000);
								break;
							}
						}
						gamequantity--;
						numberquestions++;
						break;
					}
				}


				if (life == 0)
				{
					system("cls");
					cout << "\x1b[91mТы проиграл =( Не растраивайся, попробуй снова!\x1b[0m\n";
					Sleep(3000);
				}
				else
				{
					system("cls");
					cout << "\x1b[92mПоздравляю, " << username << "! Ты выиграл и набрал " << point << " очков! Можешь собой гордится!\x1b[0m\n";
					Sleep(3000);
				}

				break;
			default:
				break;
			}
			break;
		case 2:
			while (back) {
				system("cls");
				cout << "\t\t\x1b[9" << color << "mНАСТРОЙКИ\x1b[0m\n\n";
				cout << "[1] Изменить имя игрока.\n";
				cout << "[2] Количество вопросов в игре. \n";
				cout << "[3] Изменить цвет интерфейса. \n";
				cout << "[4] Выход в главное меню. \n";
				cout << "Выберите желаемые настройки. \n";
				cin >> choice;
				switch (choice)
				{
				case 1:
					system("cls");
					cout << "Введите новое имя игрока: ";
					cin >> username;
					break;
				case 2:
					system("cls");
					cout << "Выберите количество вопросов в игре: \n\n";
					cout << "[8]\n";
					cout << "[10]\n";
					cout << "[12]\n";
					cin >> choice;
					switch (choice)
					{
					case 8:
						quantity = 8;
						break;
					case 10:
						quantity = 10;
						break;
					case 12:
						quantity = 12;
						break;
					default:
						system("cls");
						cout << "\x1b[91m Ошибка ввода! Попробуйте снова!\x1b[0m";
						Sleep(2000);
						break;
					}
					break;
				case 3:
					system("cls");
					cout << "Выберите цвет интерфейса: \n\n";
					cout << "\x1b[91m[1] Красный \n";
					cout << "\x1b[92m[2] Зеленый \n";
					cout << "\x1b[93m[3] Желтый \n";
					cout << "\x1b[94m[4] Синий \n";
					cout << "\x1b[95m[5] Фиолетовый \n";
					cout << "\x1b[96m[6] Лазурный \n\x1b[0m";
					cin >> choice;
					switch (choice)
					{
					case 1:
						color = 1;
						break;
					case 2:
						color = 2;
						break;
					case 3:
						color = 3;
						break;
					case 4:
						color = 4;
						break;
					case 5:
						color = 5;
						break;
					case 6:
						color = 6;
						break;
					default:
						system("cls");
						cout << "\x1b[91m Неккоректно введены данные!\x1b[0m\n Цвет остался без изменений\n";
						Sleep(2000);
						break;
					}
					break;
				case 4:
					back = 0;
					break;
				default:
					system("cls");
					cout << "\x1b[91m Ошибка ввода! Попробуйте снова!\x1b[0m";
					Sleep(2000);
					break;
				}
			}
			break;
		case 3:
			system("cls");
			cout << "\t\t\x1b[9" << color << "mПРАВИЛА\x1b[0m\n\n";
			cout << " - Игрок получает очки за правильный ответ на вопрос;\n";
			cout << " - Игрок проходит дальше за правильный ответ;\n";
			cout << " - Игрок теряет жизнь при неправильном ответе.\n";
			cout << "Для возврата введите любое число ";
			cin >> back;
			break;
		case 4:
			return 0;
			break;
		default:
			system("cls");
			cout << "\x1b[91m Ошибка ввода! Попробуйте снова!\x1b[0m";
			Sleep(2000);
			break;
		}
	}

	int _; cin >> _;
	return 0;
}