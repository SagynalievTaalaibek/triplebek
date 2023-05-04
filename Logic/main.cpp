#include "book.h"
#include "Prototip.h"

int main()
{
	setlocale(LC_ALL, "rus");
	const int sh = 3;
	cout << "ДА = 1 НЕТ = 0" << endl;
	string rules[]{ "У водителя были права или нет","Населенный пункт илти нет", "Привысел скорость или нет", "Выехала ли машина встречную полосу или нет"};

	string narushenie[sh]{};
	string symbol[5]{};

	int shtrafy = 0;
	int n, size = 0;
	int i=0;

	cout << rules[0] <<endl;
	cin >> n;
	if (n == 0) {
		narushenie[i] = "У водителя нет ВУ. Штраф: 15000";
		shtrafy += 15000;
		symbol[0] = "neУ";
		i++;
	}
	else {
		symbol[0] = "У";
	}

	cout << rules[1] << endl;
	cin >> n;
	
	if (n == 1) {
		cout << "Населенный пункт - Н" << endl;
		symbol[1] = "Н";

		cout << rules[2] << endl;
		cin >> n;
		if (n == 1) {
			narushenie[1] = "Привышнения скорости населенный пункт Штраф: 7500";
			shtrafy += 7500;
			symbol[2] = "П"; 
			i += 1;
		}
		else {
			symbol[2] = "неП";
		}
		
	}
	else {
		cout << "Вне населенный пункт - неН"<<endl;
		symbol[1] = "неН";

		cout << rules[2] << endl;
		cin >> n;

		if (n == 0) {
			narushenie[1] = "Привышнения скорости вне населенный пункт Штраф: 3000";
			shtrafy += 3000;
			symbol[2] = "П";
			i += 1;
		}
		else {
			symbol[0] = "неП";
		}
	}

	cout << rules[3] << endl;
	cin >> n;
	if (n == 1) {
		narushenie[2] = "Водитель выехал на встречную полосу Штраф: 7500";
		shtrafy += 7500;
		symbol[3] = "B";
		i++;
	}
	else {
		symbol[3] = "неB";
	}


	cout << symbol[0] << "&" << symbol[1] << "&" << symbol[2] << "&" << symbol[3];
	cout << endl;

	for (int j = 0; j < sh; j++)
	{
		int k = j;
		cout << "Нарушения № "<<++k<<" "<< narushenie[j] << endl;
	}
	
	
	cout << endl;
	cout <<"Общий штраф состовляет = "<< shtrafy << endl;
	return 0;
}