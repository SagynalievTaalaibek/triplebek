#include "book.h"
#include "Prototip.h"

int main()
{
	setlocale(LC_ALL, "rus");
	const int sh = 3;
	cout << "�� = 1 ��� = 0" << endl;
	string rules[]{ "� �������� ���� ����� ��� ���","���������� ����� ���� ���", "�������� �������� ��� ���", "������� �� ������ ��������� ������ ��� ���"};

	string narushenie[sh]{};
	string symbol[5]{};

	int shtrafy = 0;
	int n, size = 0;
	int i=0;

	cout << rules[0] <<endl;
	cin >> n;
	if (n == 0) {
		narushenie[i] = "� �������� ��� ��. �����: 15000";
		shtrafy += 15000;
		symbol[0] = "ne�";
		i++;
	}
	else {
		symbol[0] = "�";
	}

	cout << rules[1] << endl;
	cin >> n;
	
	if (n == 1) {
		cout << "���������� ����� - �" << endl;
		symbol[1] = "�";

		cout << rules[2] << endl;
		cin >> n;
		if (n == 1) {
			narushenie[1] = "����������� �������� ���������� ����� �����: 7500";
			shtrafy += 7500;
			symbol[2] = "�"; 
			i += 1;
		}
		else {
			symbol[2] = "���";
		}
		
	}
	else {
		cout << "��� ���������� ����� - ���"<<endl;
		symbol[1] = "���";

		cout << rules[2] << endl;
		cin >> n;

		if (n == 0) {
			narushenie[1] = "����������� �������� ��� ���������� ����� �����: 3000";
			shtrafy += 3000;
			symbol[2] = "�";
			i += 1;
		}
		else {
			symbol[0] = "���";
		}
	}

	cout << rules[3] << endl;
	cin >> n;
	if (n == 1) {
		narushenie[2] = "�������� ������ �� ��������� ������ �����: 7500";
		shtrafy += 7500;
		symbol[3] = "B";
		i++;
	}
	else {
		symbol[3] = "��B";
	}


	cout << symbol[0] << "&" << symbol[1] << "&" << symbol[2] << "&" << symbol[3];
	cout << endl;

	for (int j = 0; j < sh; j++)
	{
		int k = j;
		cout << "��������� � "<<++k<<" "<< narushenie[j] << endl;
	}
	
	
	cout << endl;
	cout <<"����� ����� ���������� = "<< shtrafy << endl;
	return 0;
}