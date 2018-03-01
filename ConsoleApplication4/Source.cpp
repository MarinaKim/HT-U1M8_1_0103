#include<stdio.h>
#include <locale.h>
#include<iostream>
#include <math.h>
#include <time.h>
#include <stdint.h>
#include <string.h>
using namespace std;
#define size 30
#define size1 50
int main()
{
	setlocale(LC_ALL, "Russian");
	int n;

	do
	{
		cout << "Введите номер задания: ";
		cin >> n;
		cin.get();
		switch (n) {
			//1.	Составить программу, которая: 
					//	a.запрашивает имя человека и повторяет его на экране;
						//b.запрашивает имя человека и повторяет его на экране с приветствием.

		case 1: {
			int k;
			cout << "введите пункт:";
			cin >> k;
			cin.get();
			switch (k) {
			case 1: {
				char name[size];
				char *cName;
				printf("enter you name: \n");
				cName = fgets(name, size, stdin);
				printf(" %s ", cName);

			}break;
			case 2: {
				char name[size];
				char *cName;
				printf("enter you name: \n");
				cName = fgets(name, size, stdin);
				printf(" Hello, %s\n ", cName);
			}break;
			}
		}break;

			//2.	Составить программу, которая запрашивает название футбольной команды и повторяет его на экране со словами "— это чемпион!".
		case 2: {
			char name[size];
			char *cName;
			printf("Введите название футбольной команды: \n");
			cName = fgets(name, size, stdin);
			printf(" %s -это ЧЕМПИОН \n ", cName);
		}break;

			//3.	Составить программу, которая запрашивает отдельно имя и отдельно фамилию, а затем выводит их как одну символьную строку.
		case 3: {
			char name[size] = {}, surname[size1] = {};
			char *cName, *cName1;
			printf("enter you name: \n");
			cName = fgets(name, size, stdin);

			printf("enter you surname: \n");
			cName1 = fgets(surname, size1, stdin);

			strcat(name, surname);
			printf("Result: %s \n", name);

		}break;

			//4.	Составить программу, которая запрашивает название государства и его столицы, а затем выводит сообщение: "Столица государства ... — город ..." (на месте многоточий должны быть выведены соответствующие значения).
		case 4: {
			char city[30], country[30];
			char *pCity, *pCountry;
			printf("Введите название города: \n");
			pCity = fgets(city, 30, stdin);

			printf("Введите название страны: \n");
			pCountry = fgets(country, 30, stdin);

			printf("столица государства %s ", pCountry);
			printf(" - город %s\n", pCity);

		}break;

			//5.	Дано название футбольного клуба. Определить количество символов в нем.
		case 5: {
			char name[size];
			char *cName;
			printf("Введите название футбольной команды: \n");
			
			cName = fgets(name, size, stdin);
			printf("количество символов: %d \n", strlen(name)-1);
		}break;

			//6.	Дано название города. Определить, четно или нет количество символов в нем
		case 6: {
			char name[size];
			char *cName;
			printf("Введите название города: \n");
		
			cName = fgets(name, size, stdin);
			int k = strlen(name)-1;
			if (k % 2 == 0)
				printf("количество символов четное \n");
			else
				printf("количество символов не четное \n");
		}break;
		}
	} while (n > 0);
}
