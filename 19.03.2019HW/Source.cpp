#include<iostream> 
#include<locale.h>
#include<Windows.h>
#include <iomanip>
#include<fstream>

using namespace std;

void task3()
{
	char str[30];

	ifstream in_file("in.txt");

	ofstream out_file("out.txt");

	int a[10];

	int g = 0;

	while(!in_file.eof())
	{
		in_file.getline(str,30);

		for (size_t j = 0; j < strlen(str); j++)
		{
			if (str[j] == '0')
			{
				str[j] = '1';
			}

			else if (str[j] == '1')
				{

					str[j] = '0';

				}
		}
		out_file << str << endl;
	}

}

void task1()
{
	char str[30];

	ifstream in_file("txt.txt");

	int a[4];

	int g = 0;

	int h;

	for (size_t i = 0; i < 4; i++)
	{
		in_file.getline(str,30);

		a[i] = strlen(str);
	}

	for (size_t i = 0; i < 4; i++)
	{
		if (a[i] > g)
		{
			g = a[i];

			h = i;
		}
	}
	cout << h+1 << " строка самая большая и состоит из" << "  " << a[h] << endl;

}

void task2()
{

	char str[30];

	ifstream in_file("txt.txt");

	int a[10];

	int g = 0;

	char h;

	cout << "Введите символ" << endl;

	cin >> h;

	while (!in_file.eof())
	{
		in_file >> str;

		if (str[0] == h)
		{
			g++;
		}

	}



	cout << g << endl;

}

int main()
{
	setlocale(LC_ALL, "");

	srand(time(NULL));

	int task, flag;

	do
	{
		cout << "Номер задания:" << endl;

		cin >> task;

		switch (task)

		{

		case 1: task1(); break;

		case 2: task2(); break;

		case 3: task3(); break;

		}

		cout << "Продолжить?" << endl;

		cin >> flag;

	} while (flag == 1);

	system("pause");

}