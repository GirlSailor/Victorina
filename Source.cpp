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
	cout << "������� ��� ������: ";
	string username; cin >> username;
	system("cls");
	cout << "�������� ���� ����������: \n\n";
	cout << "\x1b[91m[1] ������� \n";
	cout << "\x1b[92m[2] ������� \n";
	cout << "\x1b[93m[3] ������ \n";
	cout << "\x1b[94m[4] ����� \n";
	cout << "\x1b[95m[5] ���������� \n";
	cout << "\x1b[96m[6] �������� \n\x1b[0m";
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
		cout << "\x1b[91m ����������� ������� ������!\x1b[0m\n ���� ������ �� ���������.\n �������� ���� ����� � ����������.\n";
		Sleep(2000);
		break;
	}
	system("cls");
	cout << " \t ������ \x1b[9" << color << "m" << username << "\x1b[0m!\n ����� ����� ������������� ���� \n \t\x1b[9" << color << "m \"���������\"\n\n\n\n\n\n\x1b[0m";
	Sleep(2000);
	while (true) {
		system("cls");
		cout << "\t\t\x1b[9" << color << "m ���� \x1b[0m\n\n";
		cout << "\t[1] ������ ����\n";
		cout << "\t[2] ���������\n";
		cout << "\t[3] �������\n";
		cout << "\t[4] �����\n\n\n";
		cout << "\t�������� �������.";
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
			cout << "\x1b[9" << color << "m   ��������� ����������!\x1b[0m \n������ ����� � " << quantity << " ���������.\n";
			cout << "[1] ������ ���� \n";
			cout << "[2] ��������� � ������� ���� \n";
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
							cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
							cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� ������� ������! ��� ����� �������������?" << endl;
							cout << "[\x1b[9" << color << "m1\x1b[0m] ����� ������� ����������\n";
							cout << "[\x1b[9" << color << "m2\x1b[0m] ����� ��������� ����������\n";
							cout << "[\x1b[9" << color << "m3\x1b[0m] ����� ������� ����������\n";
							cout << "[\x1b[9" << color << "m4\x1b[0m] ����� ������� �������������\n";
							cout << "������� ������� ������: ";
							cin >> answer;
							switch (answer)
							{
							case 1:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� ������� ������! ��� ����� �������������?" << endl;
								cout << "[\x1b[91m1] ����� ������� ����������\n\x1b[0m";
								cout << "[\x1b[9" << color << "m2\x1b[0m] ����� ��������� ����������\n";
								cout << "[\x1b[92m3] ����� ������� ����������\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] ����� ������� �������������\n\n";
								cout << "\x1b[91m �� ������ =( -1 �����\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 2:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� ������� ������! ��� ����� �������������?" << endl;
								cout << "[\x1b[9" << color << "m2\x1b[0m] ����� ������� ����������\n";
								cout << "[\x1b[91m2] ����� ��������� ����������\n\x1b[0m";
								cout << "[\x1b[92m3] ����� ������� ����������\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] ����� ������� �������������\n\n";
								cout << "\x1b[91m �� ������ =( -1 �����\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 3:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� ������� ������! ��� ����� �������������?" << endl;
								cout << "[\x1b[9" << color << "m2\x1b[0m] ����� ������� ����������\n";
								cout << "[\x1b[9" << color << "m2\x1b[0m] ����� ��������� ����������\n";
								cout << "[\x1b[92m3] ����� ������� ����������\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] ����� ������� �������������\n\n";
								cout << "\x1b[92m�������! ���������� �����! +100 �����\n\x1b[0m";
								Sleep(2000);
								point = point + 100;
								break;
							case 4:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� ������� ������! ��� ����� �������������?" << endl;
								cout << "[\x1b[9" << color << "m2\x1b[0m] ����� ������� ����������\n";
								cout << "[\x1b[9" << color << "m2\x1b[0m] ����� ��������� ����������\n";
								cout << "[\x1b[92m3] ����� ������� ����������\n\x1b[0m";
								cout << "[\x1b[91m4] ����� ������� �������������\n\x1b[0m\n";
								cout << "\x1b[91m �� ������ =( -1 �����\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							default:
								system("cls");
								cout << "\x1b[91m������������ ����! ���������� �����!\x1b[0m\n";
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
							cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
							cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� �������� ������������ ��� ������������ �������� ���������� � �++?" << endl;
							cout << "[\x1b[9" << color << "m1\x1b[0m] =\n";
							cout << "[\x1b[9" << color << "m2\x1b[0m] ==\n";
							cout << "[\x1b[9" << color << "m3\x1b[0m] +=\n";
							cout << "[\x1b[9" << color << "m4\x1b[0m] ++\n";
							cout << "������� ������� ������: ";
							cin >> answer;
							switch (answer)
							{
							case 1:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� �������� ������������ ��� ������������ �������� ���������� � �++?" << endl;
								cout << "[\x1b[92m1] =\n\x1b[0m";
								cout << "[\x1b[9" << color << "m2\x1b[0m] ==\n";
								cout << "[\x1b[9" << color << "m3\x1b[0m] +=\n";
								cout << "[\x1b[9" << color << "m4\x1b[0m] ++\n\n";
								cout << "\x1b[92m�������! ���������� �����! +100 �����\n\x1b[0m";
								Sleep(2000);
								point = point + 100;
								break;
							case 2:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� �������� ������������ ��� ������������ �������� ���������� � �++?" << endl;
								cout << "[\x1b[92m1] =\n\x1b[0m";
								cout << "[\x1b[91m2] ==\n\x1b[0m";
								cout << "[\x1b[9" << color << "m3\x1b[0m] +=\n";
								cout << "[\x1b[9" << color << "m4\x1b[0m] ++\n\n";
								cout << "\x1b[91m �� ������ =( -1 �����\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 3:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� �������� ������������ ��� ������������ �������� ���������� � �++?" << endl;
								cout << "[\x1b[92m1] =\n\x1b[0m";
								cout << "[\x1b[9" << color << "m2\x1b[0m] ==\n";
								cout << "[\x1b[91m3] +=\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] ++\n\n";
								cout << "\x1b[91m �� ������ =( -1 �����\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 4:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� �������� ������������ ��� ������������ �������� ���������� � �++?" << endl;
								cout << "[\x1b[92m1] =\n\x1b[0m";
								cout << "[\x1b[9" << color << "m2\x1b[0m] ==\n";
								cout << "[\x1b[9" << color << "m3\x1b[0m] +=\n";
								cout << "[\x1b[91m4] ++\n\x1b[0m\n";
								cout << "\x1b[91m �� ������ =( -1 �����\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							default:
								system("cls");
								cout << "\x1b[91m������������ ����! ���������� �����!\x1b[0m\n";
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
							cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
							cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� ��� ������ ������������ ��� �������� ������� ����� � �++?" << endl;
							cout << "[\x1b[9" << color << "m1\x1b[0m] int\n";
							cout << "[\x1b[9" << color << "m2\x1b[0m] float\n";
							cout << "[\x1b[9" << color << "m3\x1b[0m] char\n";
							cout << "[\x1b[9" << color << "m4\x1b[0m] bool\n";
							cout << "������� ������� ������: ";
							cin >> answer;
							switch (answer)
							{
							case 1:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� ��� ������ ������������ ��� �������� ������� ����� � �++?" << endl;
								cout << "[\x1b[91m1] int\n\x1b[0m";
								cout << "[\x1b[92m2] float\n\x1b[0m";
								cout << "[\x1b[9" << color << "m3\x1b[0m] char\n";
								cout << "[\x1b[9" << color << "m4\x1b[0m] bool\n\n";
								cout << "\x1b[91m �� ������ =( -1 �����\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 2:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� ��� ������ ������������ ��� �������� ������� ����� � �++?" << endl;
								cout << "[\x1b[9" << color << "m3\x1b[0m] int\n";
								cout << "[\x1b[92m2] float\n\x1b[0m";
								cout << "[\x1b[9" << color << "m3\x1b[0m] char\n";
								cout << "[\x1b[9" << color << "m4\x1b[0m] bool\n\n";
								cout << "\x1b[92m�������! ���������� �����! +100 �����\n\x1b[0m";
								Sleep(2000);
								point = point + 100;
								break;
							case 3:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� ��� ������ ������������ ��� �������� ������� ����� � �++?" << endl;
								cout << "[\x1b[9" << color << "m3\x1b[0m] int\n";
								cout << "[\x1b[92m2] float\n\x1b[0m";
								cout << "[\x1b[91m3] char\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] bool\n\n";
								cout << "\x1b[91m �� ������ =( -1 �����\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 4:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� ��� ������ ������������ ��� �������� ������� ����� � �++?" << endl;
								cout << "[\x1b[9" << color << "m3\x1b[0m] int\n";
								cout << "[\x1b[92m2] float\n\x1b[0m";
								cout << "[\x1b[9" << color << "m3\x1b[0m] char\n";
								cout << "[\x1b[91m4] bool\n\x1b[0m\n";
								cout << "\x1b[91m �� ������ =( -1 �����\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							default:
								system("cls");
								cout << "\x1b[91m������������ ����! ���������� �����!\x1b[0m\n";
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
							cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
							cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� �������� ������������ ��� ����������� �� � �++?" << endl;
							cout << "[\x1b[9" << color << "m1\x1b[0m] ||\n";
							cout << "[\x1b[9" << color << "m2\x1b[0m] &&\n";
							cout << "[\x1b[9" << color << "m3\x1b[0m] !\n";
							cout << "[\x1b[9" << color << "m4\x1b[0m] ==\n";
							cout << "������� ������� ������: ";
							cin >> answer;
							switch (answer)
							{
							case 1:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� �������� ������������ ��� ����������� �� � �++?" << endl;
								cout << "[\x1b[91m1] ||\n\x1b[0m";
								cout << "[\x1b[9" << color << "m2\x1b[0m] &&\n";
								cout << "[\x1b[92m3] !\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] ==\n\n";
								cout << "\x1b[91m �� ������ =( -1 �����\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 2:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� �������� ������������ ��� ����������� �� � �++?" << endl;
								cout << "[\x1b[9" << color << "m1\x1b[0m] ||\n";
								cout << "[\x1b[91m2] &&\n\x1b[0m";
								cout << "[\x1b[92m3] !\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] ==\n\n";
								cout << "\x1b[91m �� ������ =( -1 �����\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 3:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� �������� ������������ ��� ����������� �� � �++?" << endl;
								cout << "[\x1b[9" << color << "m1\x1b[0m] ||\n";
								cout << "[\x1b[9" << color << "m2\x1b[0m] &&\n";
								cout << "[\x1b[92m3] !\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] ==\n\n";
								cout << "\x1b[92m�������! ���������� �����! +100 �����\n\x1b[0m";
								Sleep(2000);
								point = point + 100;
								break;
							case 4:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� �������� ������������ ��� ����������� �� � �++?" << endl;
								cout << "[\x1b[9" << color << "m1\x1b[0m] ||\n";
								cout << "[\x1b[9" << color << "m2\x1b[0m] &&\n";
								cout << "[\x1b[92m3] !\n\x1b[0m";
								cout << "[\x1b[91m4] ==\n\x1b[0m\n";
								cout << "\x1b[91m �� ������ =( -1 �����\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							default:
								system("cls");
								cout << "\x1b[91m������������ ����! ���������� �����!\x1b[0m\n";
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
							cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
							cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ��� ����� ������� � �++?" << endl;
							cout << "[\x1b[9" << color << "m1\x1b[0m] �������� ��������, ������� ��������� ���, ���� ������� �������\n";
							cout << "[\x1b[9" << color << "m2\x1b[0m] ������, ������� ������ ��������� �������� ������ ����\n";
							cout << "[\x1b[9" << color << "m3\x1b[0m] ���, ������� ��������� ������������ ������ � ����� ���������� ��������\n";
							cout << "[\x1b[9" << color << "m4\x1b[0m] ��������, ������� ��������� ������� � ��������� �������� �����\n";
							cout << "������� ������� ������: ";
							cin >> answer;
							switch (answer)
							{
							case 1:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ��� ����� ������� � �++?" << endl;
								cout << "[\x1b[91m1] �������� ��������, ������� ��������� ���, ���� ������� �������\n\x1b[0m";
								cout << "[\x1b[9" << color << "m2\x1b[0m] ������, ������� ������ ��������� �������� ������ ����\n";
								cout << "[\x1b[92m3] ���, ������� ��������� ������������ ������ � ����� ���������� ��������\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] ��������, ������� ��������� ������� � ��������� �������� �����\n\n";
								cout << "\x1b[91m �� ������ =( -1 �����\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 2:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ��� ����� ������� � �++?" << endl;
								cout << "[\x1b[9" << color << "m1\x1b[0m] �������� ��������, ������� ��������� ���, ���� ������� �������\n";
								cout << "[\x1b[91m2] ������, ������� ������ ��������� �������� ������ ����\n\x1b[0m";
								cout << "[\x1b[92m3] ���, ������� ��������� ������������ ������ � ����� ���������� ��������\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] ��������, ������� ��������� ������� � ��������� �������� �����\n\n";
								cout << "\x1b[91m �� ������ =( -1 �����\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 3:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ��� ����� ������� � �++?" << endl;
								cout << "[\x1b[9" << color << "m1\x1b[0m] �������� ��������, ������� ��������� ���, ���� ������� �������\n";
								cout << "[\x1b[9" << color << "m2\x1b[0m] ������, ������� ������ ��������� �������� ������ ����\n";
								cout << "[\x1b[92m3] ���, ������� ��������� ������������ ������ � ����� ���������� ��������\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] ��������, ������� ��������� ������� � ��������� �������� �����\n\n";
								cout << "\x1b[92m�������! ���������� �����! +100 �����\n\x1b[0m";
								Sleep(2000);
								point = point + 100;
								break;
							case 4:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ��� ����� ������� � �++?" << endl;
								cout << "[\x1b[9" << color << "m1\x1b[0m] �������� ��������, ������� ��������� ���, ���� ������� �������\n";
								cout << "[\x1b[9" << color << "m2\x1b[0m] ������, ������� ������ ��������� �������� ������ ����\n";
								cout << "[\x1b[92m3] ���, ������� ��������� ������������ ������ � ����� ���������� ��������\n\x1b[0m";
								cout << "[\x1b[91m4] ��������, ������� ��������� ������� � ��������� �������� �����\n\x1b[0m\n";
								cout << "\x1b[91m �� ������ =( -1 �����\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							default:
								system("cls");
								cout << "\x1b[91m������������ ����! ���������� �����!\x1b[0m\n";
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
							cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
							cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� �������� ������������ ��� ����������� � � C++?" << endl;
							cout << "[\x1b[9" << color << "m1\x1b[0m] ||\n";
							cout << "[\x1b[9" << color << "m2\x1b[0m] &&\n";
							cout << "[\x1b[9" << color << "m3\x1b[0m] !\n";
							cout << "[\x1b[9" << color << "m4\x1b[0m] ==\n";
							cout << "������� ������� ������: ";
							cin >> answer;
							switch (answer)
							{
							case 1:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� �������� ������������ ��� ����������� � � C++?" << endl;
								cout << "[\x1b[91m1] ||\n\x1b[0m";
								cout << "[\x1b[92m2] &&\n\x1b[0m";
								cout << "[\x1b[9" << color << "m3\x1b[0m] !\n";
								cout << "[\x1b[9" << color << "m4\x1b[0m] ==\n\n";
								cout << "\x1b[91m �� ������ =( -1 �����\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 2:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� �������� ������������ ��� ����������� � � C++?" << endl;
								cout << "[\x1b[9" << color << "m3\x1b[0m] ||\n";
								cout << "[\x1b[92m2] &&\n\x1b[0m";
								cout << "[\x1b[9" << color << "m3\x1b[0m] !\n";
								cout << "[\x1b[9" << color << "m4\x1b[0m] ==\n\n";
								cout << "\x1b[92m�������! ���������� �����! +100 �����\n\x1b[0m";
								Sleep(2000);
								point = point + 100;
								break;
							case 3:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� �������� ������������ ��� ����������� � � C++?" << endl;
								cout << "[\x1b[9" << color << "m3\x1b[0m] ||\n";
								cout << "[\x1b[92m2] &&\n\x1b[0m";
								cout << "[\x1b[91m3] !\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] ==\n\n";
								cout << "\x1b[91m �� ������ =( -1 �����\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 4:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� �������� ������������ ��� ����������� � � C++?" << endl;
								cout << "[\x1b[9" << color << "m3\x1b[0m] ||\n";
								cout << "[\x1b[92m2] &&\n\x1b[0m";
								cout << "[\x1b[9" << color << "m3\x1b[0m] !\n";
								cout << "[\x1b[91m4] ==\n\x1b[0m\n";
								cout << "\x1b[91m �� ������ =( -1 �����\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							default:
								system("cls");
								cout << "\x1b[91m������������ ����! ���������� �����!\x1b[0m\n";
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
							cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
							cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ��� ����� ������ � C++?" << endl;
							cout << "[\x1b[9" << color << "m1\x1b[0m] �������, ������� ���������� ��������\n";
							cout << "[\x1b[9" << color << "m2\x1b[0m] ������, ������� ������ ��������� �������� ������ ����\n";
							cout << "[\x1b[9" << color << "m3\x1b[0m] �������� ��������, ������� ��������� ���, ���� ������� �������\n";
							cout << "[\x1b[9" << color << "m4\x1b[0m] ��������, ������� ��������� ������� �������\n";
							cout << "������� ������� ������: ";
							cin >> answer;
							switch (answer)
							{
							case 1:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ��� ����� ������ � C++?" << endl;
								cout << "[\x1b[91m1] �������, ������� ���������� ��������\n\x1b[0m";
								cout << "[\x1b[92m2] ������, ������� ������ ��������� �������� ������ ����\n\x1b[0m";
								cout << "[\x1b[9" << color << "m3\x1b[0m] �������� ��������, ������� ��������� ���, ���� ������� �������\n";
								cout << "[\x1b[9" << color << "m4\x1b[0m] ��������, ������� ��������� ������� �������\n\n";
								cout << "\x1b[91m �� ������ =( -1 �����\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 2:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ��� ����� ������ � C++?" << endl;
								cout << "[\x1b[9" << color << "m3\x1b[0m] �������, ������� ���������� ��������\n";
								cout << "[\x1b[92m2] ������, ������� ������ ��������� �������� ������ ����\n\x1b[0m";
								cout << "[\x1b[9" << color << "m3\x1b[0m] �������� ��������, ������� ��������� ���, ���� ������� �������\n";
								cout << "[\x1b[9" << color << "m4\x1b[0m] ��������, ������� ��������� ������� �������\n\n";
								cout << "\x1b[92m�������! ���������� �����! +100 �����\n\x1b[0m";
								Sleep(2000);
								point = point + 100;
								break;
							case 3:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ��� ����� ������ � C++?" << endl;
								cout << "[\x1b[9" << color << "m3\x1b[0m] �������, ������� ���������� ��������\n";
								cout << "[\x1b[92m2] ������, ������� ������ ��������� �������� ������ ����\n\x1b[0m";
								cout << "[\x1b[91m3] �������� ��������, ������� ��������� ���, ���� ������� �������\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] ��������, ������� ��������� ������� �������\n\n";
								cout << "\x1b[91m �� ������ =( -1 �����\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 4:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ��� ����� ������ � C++?" << endl;
								cout << "[\x1b[9" << color << "m3\x1b[0m] �������, ������� ���������� ��������\n";
								cout << "[\x1b[92m2] ������, ������� ������ ��������� �������� ������ ����\n\x1b[0m";
								cout << "[\x1b[9" << color << "m3\x1b[0m] �������� ��������, ������� ��������� ���, ���� ������� �������\n";
								cout << "[\x1b[91m4] ��������, ������� ��������� ������� �������\n\x1b[0m\n";
								cout << "\x1b[91m �� ������ =( -1 �����\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							default:
								system("cls");
								cout << "\x1b[91m������������ ����! ���������� �����!\x1b[0m\n";
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
							cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
							cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� ��� ������ ������������ ��� �������� ����� ����� � C++?" << endl;
							cout << "[\x1b[9" << color << "m1\x1b[0m] int\n";
							cout << "[\x1b[9" << color << "m2\x1b[0m] float\n";
							cout << "[\x1b[9" << color << "m3\x1b[0m] char\n";
							cout << "[\x1b[9" << color << "m4\x1b[0m] bool\n";
							cout << "������� ������� ������: ";
							cin >> answer;
							switch (answer)
							{
							case 1:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� ��� ������ ������������ ��� �������� ����� ����� � C++?" << endl;
								cout << "[\x1b[92m1] int\n\x1b[0m";
								cout << "[\x1b[9" << color << "m2\x1b[0m] float\n";
								cout << "[\x1b[9" << color << "m3\x1b[0m] char\n";
								cout << "[\x1b[9" << color << "m4\x1b[0m] bool\n\n";
								cout << "\x1b[92m�������! ���������� �����! +100 �����\n\x1b[0m";
								Sleep(2000);
								point = point + 100;
								break;
							case 2:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� ��� ������ ������������ ��� �������� ����� ����� � C++?" << endl;
								cout << "[\x1b[92m1] int\n\x1b[0m";
								cout << "[\x1b[91m2] float\n\x1b[0m";
								cout << "[\x1b[9" << color << "m3\x1b[0m] char\n";
								cout << "[\x1b[9" << color << "m4\x1b[0m] bool\n\n";
								cout << "\x1b[91m �� ������ =( -1 �����\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 3:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� ��� ������ ������������ ��� �������� ����� ����� � C++?" << endl;
								cout << "[\x1b[92m1] int\n\x1b[0m";
								cout << "[\x1b[9" << color << "m2\x1b[0m] float\n";
								cout << "[\x1b[91m3] char\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] bool\n\n";
								cout << "\x1b[91m �� ������ =( -1 �����\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 4:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� ��� ������ ������������ ��� �������� ����� ����� � C++?" << endl;
								cout << "[\x1b[92m1] int\n\x1b[0m";
								cout << "[\x1b[9" << color << "m2\x1b[0m] float\n";
								cout << "[\x1b[9" << color << "m3\x1b[0m] char\n";
								cout << "[\x1b[91m4] bool\n\x1b[0m\n";
								cout << "\x1b[91m �� ������ =( -1 �����\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							default:
								system("cls");
								cout << "\x1b[91m������������ ����! ���������� �����!\x1b[0m\n";
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
							cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
							cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ��� ����� ���������� � C++?" << endl;
							cout << "[\x1b[9" << color << "m1\x1b[0m] �������, ������� ���������� ��������\n";
							cout << "[\x1b[9" << color << "m2\x1b[0m] ���, ������� ��������� ������������ ������\n";
							cout << "[\x1b[9" << color << "m3\x1b[0m] ������� ������, ������� ������ ��������\n";
							cout << "[\x1b[9" << color << "m4\x1b[0m] �������, ������� ��������� ���������� ���������\n";
							cout << "������� ������� ������: ";
							cin >> answer;
							switch (answer)
							{
							case 1:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ��� ����� ���������� � C++?" << endl;
								cout << "[\x1b[91m1] �������, ������� ���������� ��������\n\x1b[0m";
								cout << "[\x1b[9" << color << "m2\x1b[0m] ���, ������� ��������� ������������ ������\n";
								cout << "[\x1b[92m3] ������� ������, ������� ������ ��������\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] �������, ������� ��������� ���������� ���������\n\n";
								cout << "\x1b[91m �� ������ =( -1 �����\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 2:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ��� ����� ���������� � C++?" << endl;
								cout << "[\x1b[9" << color << "m1\x1b[0m] �������, ������� ���������� ��������\n";
								cout << "[\x1b[91m2] ���, ������� ��������� ������������ ������\n\x1b[0m";
								cout << "[\x1b[92m3] ������� ������, ������� ������ ��������\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] �������, ������� ��������� ���������� ���������\n\n";
								cout << "\x1b[91m �� ������ =( -1 �����\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 3:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ��� ����� ���������� � C++?" << endl;
								cout << "[\x1b[9" << color << "m1\x1b[0m] �������, ������� ���������� ��������\n";
								cout << "[\x1b[9" << color << "m2\x1b[0m] ���, ������� ��������� ������������ ������\n";
								cout << "[\x1b[92m3] ������� ������, ������� ������ ��������\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] �������, ������� ��������� ���������� ���������\n\n";
								cout << "\x1b[92m�������! ���������� �����! +100 �����\n\x1b[0m";
								Sleep(2000);
								point = point + 100;
								break;
							case 4:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ��� ����� ���������� � C++?" << endl;
								cout << "[\x1b[9" << color << "m1\x1b[0m] �������, ������� ���������� ��������\n";
								cout << "[\x1b[9" << color << "m2\x1b[0m] ���, ������� ��������� ������������ ������\n";
								cout << "[\x1b[92m3] ������� ������, ������� ������ ��������\n\x1b[0m";
								cout << "[\x1b[91m4] �������, ������� ��������� ���������� ���������\n\x1b[0m\n";
								cout << "\x1b[91m �� ������ =( -1 �����\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							default:
								system("cls");
								cout << "\x1b[91m������������ ����! ���������� �����!\x1b[0m\n";
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
							cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
							cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� �������� ������������ ��� ��������� � C++?" << endl;
							cout << "[\x1b[9" << color << "m1\x1b[0m] /\n";
							cout << "[\x1b[9" << color << "m2\x1b[0m] %\n";
							cout << "[\x1b[9" << color << "m3\x1b[0m] *\n";
							cout << "[\x1b[9" << color << "m4\x1b[0m] +\n";
							cout << "������� ������� ������: ";
							cin >> answer;
							switch (answer)
							{
							case 1:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� �������� ������������ ��� ��������� � C++?" << endl;
								cout << "[\x1b[91m1] /\n\x1b[0m";
								cout << "[\x1b[9" << color << "m2\x1b[0m] %\n";
								cout << "[\x1b[92m3] *\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] +\n\n";
								cout << "\x1b[91m �� ������ =( -1 �����\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 2:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� �������� ������������ ��� ��������� � C++?" << endl;
								cout << "[\x1b[9" << color << "m1\x1b[0m] /\n";
								cout << "[\x1b[91m2] %\n\x1b[0m";
								cout << "[\x1b[92m3] *\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] +\n\n";
								cout << "\x1b[91m �� ������ =( -1 �����\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 3:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� �������� ������������ ��� ��������� � C++?" << endl;
								cout << "[\x1b[9" << color << "m1\x1b[0m] /\n";
								cout << "[\x1b[9" << color << "m2\x1b[0m] %\n";
								cout << "[\x1b[92m3] *\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] +\n\n";
								cout << "\x1b[92m�������! ���������� �����! +100 �����\n\x1b[0m";
								Sleep(2000);
								point = point + 100;
								break;
							case 4:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� �������� ������������ ��� ��������� � C++?" << endl;
								cout << "[\x1b[9" << color << "m1\x1b[0m] /\n";
								cout << "[\x1b[9" << color << "m2\x1b[0m] %\n";
								cout << "[\x1b[92m3] *\n\x1b[0m";
								cout << "[\x1b[91m4] +\n\x1b[0m\n";
								cout << "\x1b[91m �� ������ =( -1 �����\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							default:
								system("cls");
								cout << "\x1b[91m������������ ����! ���������� �����!\x1b[0m\n";
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
							cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
							cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� ������� ������������ ��� ������� �����?" << endl;
							cout << "[\x1b[9" << color << "m1\x1b[0m] while\n";
							cout << "[\x1b[9" << color << "m2\x1b[0m] switch\n";
							cout << "[\x1b[9" << color << "m3\x1b[0m] else\n";
							cout << "[\x1b[9" << color << "m4\x1b[0m] insert\n";
							cout << "������� ������� ������: ";
							cin >> answer;
							switch (answer)
							{
							case 1:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� ������� ������������ ��� ������� �����?" << endl;
								cout << "[\x1b[92m1] while\n\x1b[0m";
								cout << "[\x1b[9" << color << "m2\x1b[0m] switch\n";
								cout << "[\x1b[9" << color << "m3\x1b[0m] else\n";
								cout << "[\x1b[9" << color << "m4\x1b[0m] insert\n\n";
								cout << "\x1b[92m�������! ���������� �����! +100 �����\n\x1b[0m";
								Sleep(2000);
								point = point + 100;
								break;
							case 2:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� ������� ������������ ��� ������� �����?" << endl;
								cout << "[\x1b[92m1] while\n\x1b[0m";
								cout << "[\x1b[91m2] switch\n\x1b[0m";
								cout << "[\x1b[9" << color << "m3\x1b[0m] else\n";
								cout << "[\x1b[9" << color << "m4\x1b[0m] insert\n\n";
								cout << "\x1b[91m �� ������ =( -1 �����\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 3:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� ������� ������������ ��� ������� �����?" << endl;
								cout << "[\x1b[92m1] while\n\x1b[0m";
								cout << "[\x1b[9" << color << "m2\x1b[0m] switch\n";
								cout << "[\x1b[91m3] else\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] insert\n\n";
								cout << "\x1b[91m �� ������ =( -1 �����\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 4:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� ������� ������������ ��� ������� �����?" << endl;
								cout << "[\x1b[92m1] while\n\x1b[0m";
								cout << "[\x1b[9" << color << "m2\x1b[0m] switch\n";
								cout << "[\x1b[9" << color << "m3\x1b[0m] else\n";
								cout << "[\x1b[91m4] insert\n\x1b[0m\n";
								cout << "\x1b[91m �� ������ =( -1 �����\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							default:
								system("cls");
								cout << "\x1b[91m������������ ����! ���������� �����!\x1b[0m\n";
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
							cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
							cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� �������� ������������ ��� ��������� ��������?" << endl;
							cout << "[\x1b[9" << color << "m1\x1b[0m] =\n";
							cout << "[\x1b[9" << color << "m2\x1b[0m] ==\n";
							cout << "[\x1b[9" << color << "m3\x1b[0m] ===\n";
							cout << "[\x1b[9" << color << "m4\x1b[0m] !=\n";
							cout << "������� ������� ������: ";
							cin >> answer;
							switch (answer)
							{
							case 1:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� �������� ������������ ��� ��������� ��������?" << endl;
								cout << "[\x1b[91m1] =\n\x1b[0m";
								cout << "[\x1b[92m2] ==\n\x1b[0m";
								cout << "[\x1b[9" << color << "m3\x1b[0m] ===\n";
								cout << "[\x1b[9" << color << "m4\x1b[0m] !=\n\n";
								cout << "\x1b[91m �� ������ =( -1 �����\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 2:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� �������� ������������ ��� ��������� ��������?" << endl;
								cout << "[\x1b[9" << color << "m3\x1b[0m] =\n";
								cout << "[\x1b[92m2] ==\n\x1b[0m";
								cout << "[\x1b[9" << color << "m3\x1b[0m] ===\n";
								cout << "[\x1b[9" << color << "m4\x1b[0m] !=\n\n";
								cout << "\x1b[92m�������! ���������� �����! +100 �����\n\x1b[0m";
								Sleep(2000);
								point = point + 100;
								break;
							case 3:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� �������� ������������ ��� ��������� ��������?" << endl;
								cout << "[\x1b[9" << color << "m3\x1b[0m] =\n";
								cout << "[\x1b[92m2] ==\n\x1b[0m";
								cout << "[\x1b[91m3] ===\n\x1b[0m";
								cout << "[\x1b[9" << color << "m4\x1b[0m] !=\n\n";
								cout << "\x1b[91m �� ������ =( -1 �����\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							case 4:
								system("cls");
								cout << "������������ \x1b[9" << color << "m " << username << " \x1b[0m | ���������� �����: \x1b[9" << color << "m " << life << "\x1b[0m | ���������� �����: \x1b[9" << color << "m " << point << "\x1b[0m\n\n";
								cout << "[\x1b[9" << color << "m#" << numberquestions << "\x1b[0m]  ����� �������� ������������ ��� ��������� ��������?" << endl;
								cout << "[\x1b[9" << color << "m3\x1b[0m] =\n";
								cout << "[\x1b[92m2] ==\n\x1b[0m";
								cout << "[\x1b[9" << color << "m3\x1b[0m] ===\n";
								cout << "[\x1b[91m4] !=\n\x1b[0m\n";
								cout << "\x1b[91m �� ������ =( -1 �����\x1b[0m\n";
								Sleep(2000);
								life--;
								break;
							default:
								system("cls");
								cout << "\x1b[91m������������ ����! ���������� �����!\x1b[0m\n";
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
					cout << "\x1b[91m�� �������� =( �� ������������, �������� �����!\x1b[0m\n";
					Sleep(3000);
				}
				else
				{
					system("cls");
					cout << "\x1b[92m����������, " << username << "! �� ������� � ������ " << point << " �����! ������ ����� ��������!\x1b[0m\n";
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
				cout << "\t\t\x1b[9" << color << "m���������\x1b[0m\n\n";
				cout << "[1] �������� ��� ������.\n";
				cout << "[2] ���������� �������� � ����. \n";
				cout << "[3] �������� ���� ����������. \n";
				cout << "[4] ����� � ������� ����. \n";
				cout << "�������� �������� ���������. \n";
				cin >> choice;
				switch (choice)
				{
				case 1:
					system("cls");
					cout << "������� ����� ��� ������: ";
					cin >> username;
					break;
				case 2:
					system("cls");
					cout << "�������� ���������� �������� � ����: \n\n";
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
						cout << "\x1b[91m ������ �����! ���������� �����!\x1b[0m";
						Sleep(2000);
						break;
					}
					break;
				case 3:
					system("cls");
					cout << "�������� ���� ����������: \n\n";
					cout << "\x1b[91m[1] ������� \n";
					cout << "\x1b[92m[2] ������� \n";
					cout << "\x1b[93m[3] ������ \n";
					cout << "\x1b[94m[4] ����� \n";
					cout << "\x1b[95m[5] ���������� \n";
					cout << "\x1b[96m[6] �������� \n\x1b[0m";
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
						cout << "\x1b[91m ����������� ������� ������!\x1b[0m\n ���� ������� ��� ���������\n";
						Sleep(2000);
						break;
					}
					break;
				case 4:
					back = 0;
					break;
				default:
					system("cls");
					cout << "\x1b[91m ������ �����! ���������� �����!\x1b[0m";
					Sleep(2000);
					break;
				}
			}
			break;
		case 3:
			system("cls");
			cout << "\t\t\x1b[9" << color << "m�������\x1b[0m\n\n";
			cout << " - ����� �������� ���� �� ���������� ����� �� ������;\n";
			cout << " - ����� �������� ������ �� ���������� �����;\n";
			cout << " - ����� ������ ����� ��� ������������ ������.\n";
			cout << "��� �������� ������� ����� ����� ";
			cin >> back;
			break;
		case 4:
			return 0;
			break;
		default:
			system("cls");
			cout << "\x1b[91m ������ �����! ���������� �����!\x1b[0m";
			Sleep(2000);
			break;
		}
	}

	int _; cin >> _;
	return 0;
}