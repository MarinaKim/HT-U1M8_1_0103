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
		cout << "������� ����� �������: ";
		cin >> n;
		cin.get();
		switch (n) {
			//1.	��������� ���������, �������: 
					//	a.����������� ��� �������� � ��������� ��� �� ������;
						//b.����������� ��� �������� � ��������� ��� �� ������ � ������������.

		case 1: {
			int k;
			cout << "������� �����:";
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

			//2.	��������� ���������, ������� ����������� �������� ���������� ������� � ��������� ��� �� ������ �� ������� "� ��� �������!".
		case 2: {
			char name[size];
			char *cName;
			printf("������� �������� ���������� �������: \n");
			cName = fgets(name, size, stdin);
			printf(" %s -��� ������� \n ", cName);
		}break;

			//3.	��������� ���������, ������� ����������� �������� ��� � �������� �������, � ����� ������� �� ��� ���� ���������� ������.
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

			//4.	��������� ���������, ������� ����������� �������� ����������� � ��� �������, � ����� ������� ���������: "������� ����������� ... � ����� ..." (�� ����� ���������� ������ ���� �������� ��������������� ��������).
		case 4: {
			char city[30], country[30];
			char *pCity, *pCountry;
			printf("������� �������� ������: \n");
			pCity = fgets(city, 30, stdin);

			printf("������� �������� ������: \n");
			pCountry = fgets(country, 30, stdin);

			printf("������� ����������� %s ", pCountry);
			printf(" - ����� %s\n", pCity);

		}break;

			//5.	���� �������� ����������� �����. ���������� ���������� �������� � ���.
		case 5: {
			char name[size];
			char *cName;
			printf("������� �������� ���������� �������: \n");
			
			cName = fgets(name, size, stdin);
			printf("���������� ��������: %d \n", strlen(name)-1);
		}break;

			//6.	���� �������� ������. ����������, ����� ��� ��� ���������� �������� � ���
		case 6: {
			char name[size];
			char *cName;
			printf("������� �������� ������: \n");
		
			cName = fgets(name, size, stdin);
			int k = strlen(name)-1;
			if (k % 2 == 0)
				printf("���������� �������� ������ \n");
			else
				printf("���������� �������� �� ������ \n");
		}break;
		}
	} while (n > 0);
}
