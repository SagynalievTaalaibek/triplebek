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
	cout << "У водителя есть права или нет true = 1; false = 0"<<endl;
	cin >> n;
	if (n == 0) {
		narushenie[i] = "У водителя нет ВУ. Штраф: 5000";
		shtrafy += 5000;
		i++;
	}
	cout << "Проехал на красный" << endl;
	cin >> n;
	if (n == 0) {
		narushenie[i] = "Проезд на красный. Штраф: 3000";
		shtrafy += 3000;
		i+= 1;
	}

	for (int j = 0; j < sh; j++)
	{
		cout << "Нарушения № "<< ++j << "  "<<narushenie[j] << endl;
	}
	cout << shtrafy << endl;
	return 0;
}