#include "book.h"
#include "Prototip.h"

int main()
{
	setlocale(LC_ALL, "rus");
	const int sh = 2;
	string narushenie[sh]{};
	int shtrafy = 0;
	int n, size = 0;
	int i=0;
	cout << "� �������� ���� ����� ��� ��� true = 1; false = 0"<<endl;
	cin >> n;
	if (n == 0) {
		narushenie[i] = "� �������� ��� ��. �����: 5000";
		shtrafy += 5000;
		i++;
	}
	cout << "������� �� �������" << endl;
	cin >> n;
	if (n == 0) {
		narushenie[i] = "������ �� �������. �����: 3000";
		shtrafy += 3000;
		i+= 1;
	}

	for (int j = 0; j < sh; j++)
	{
		cout << "��������� � "<< ++j << "  "<<narushenie[j] << endl;
	}
	cout << shtrafy << endl;
	return 0;
}